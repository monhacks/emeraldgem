#include "global.h"
#include "decompress.h"
#include "graphics.h"
#include "item_icon.h"
#include "item.h"
#include "malloc.h"
#include "sprite.h"
#include "constants/items.h"
#include "data.h"

// EWRAM vars
EWRAM_DATA u8 *gItemIconDecompressionBuffer = NULL;
EWRAM_DATA u8 *gItemIcon4x4Buffer = NULL;


const struct TypeInfo gTypesInfo[NUMBER_OF_MON_TYPES] =
{
    [TYPE_NORMAL] =
    {
        .paletteTMHM = gItemIconPalette_NormalTMHM,
    },
    [TYPE_FIGHTING] =
    {
        .paletteTMHM = gItemIconPalette_FightingTMHM,
    },
    [TYPE_FLYING] =
    {
        .paletteTMHM = gItemIconPalette_FlyingTMHM,
    },
    [TYPE_POISON] =
    {
        .paletteTMHM = gItemIconPalette_PoisonTMHM,
    },
    [TYPE_GROUND] =
    {
        .paletteTMHM = gItemIconPalette_GroundTMHM,
    },
    [TYPE_ROCK] =
    {
        .paletteTMHM = gItemIconPalette_RockTMHM,
    },
    [TYPE_BUG] =
    {
        .paletteTMHM = gItemIconPalette_BugTMHM,
    },
    [TYPE_GHOST] =
    {
        .paletteTMHM = gItemIconPalette_GhostTMHM,
    },
    [TYPE_STEEL] =
    {
        .paletteTMHM = gItemIconPalette_SteelTMHM,
    },
    [TYPE_MYSTERY] =
    {
		.paletteTMHM = gItemIconPalette_PoisonTMHM,
    },
    [TYPE_FIRE] =
    {
        .paletteTMHM = gItemIconPalette_FireTMHM,
    },
    [TYPE_WATER] =
    {
        .paletteTMHM = gItemIconPalette_WaterTMHM,
    },
    [TYPE_GRASS] =
    {
        .paletteTMHM = gItemIconPalette_GrassTMHM,
    },
    [TYPE_ELECTRIC] =
    {
        .paletteTMHM = gItemIconPalette_ElectricTMHM,
    },
    [TYPE_PSYCHIC] =
    {
        .paletteTMHM = gItemIconPalette_PsychicTMHM,
    },
    [TYPE_ICE] =
    {
        .paletteTMHM = gItemIconPalette_IceTMHM,
    },
    [TYPE_DRAGON] =
    {
        .paletteTMHM = gItemIconPalette_DragonTMHM,
    },
    [TYPE_DARK] =
    {
        .paletteTMHM = gItemIconPalette_DarkTMHM,
    },
    [TYPE_FAIRY] =
    {
        .paletteTMHM = gItemIconPalette_FairyTMHM,
    },
};



// const rom data
// #include "data/item_icon_table.h"

static const struct OamData sOamData_ItemIcon =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 2,
    .affineParam = 0
};

static const union AnimCmd sSpriteAnim_ItemIcon[] =
{
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END
};

static const union AnimCmd *const sSpriteAnimTable_ItemIcon[] =
{
    sSpriteAnim_ItemIcon
};

const struct SpriteTemplate gItemIconSpriteTemplate =
{
    .tileTag = 0,
    .paletteTag = 0,
    .oam = &sOamData_ItemIcon,
    .anims = sSpriteAnimTable_ItemIcon,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

// code
bool8 AllocItemIconTemporaryBuffers(void)
{
    gItemIconDecompressionBuffer = Alloc(0x120);
    if (gItemIconDecompressionBuffer == NULL)
        return FALSE;

    gItemIcon4x4Buffer = AllocZeroed(0x200);
    if (gItemIcon4x4Buffer == NULL)
    {
        Free(gItemIconDecompressionBuffer);
        return FALSE;
    }

    return TRUE;
}

void FreeItemIconTemporaryBuffers(void)
{
    Free(gItemIconDecompressionBuffer);
    Free(gItemIcon4x4Buffer);
}

void CopyItemIconPicTo4x4Buffer(const void *src, void *dest)
{
    u8 i;

    for (i = 0; i < 3; i++)
        CpuCopy16(src + i * 96, dest + i * 128, 0x60);
}

u8 AddItemIconSprite(u16 tilesTag, u16 paletteTag, u16 itemId)
{
    if (!AllocItemIconTemporaryBuffers())
    {
        return MAX_SPRITES;
    }
    else
    {
        u8 spriteId;
        struct SpriteSheet spriteSheet;
        struct CompressedSpritePalette spritePalette;
        struct SpriteTemplate *spriteTemplate;

        LZDecompressWram(GetItemIconSprite(itemId), gItemIconDecompressionBuffer);
        CopyItemIconPicTo4x4Buffer(gItemIconDecompressionBuffer, gItemIcon4x4Buffer);
        spriteSheet.data = gItemIcon4x4Buffer;
        spriteSheet.size = 0x200;
        spriteSheet.tag = tilesTag;
        LoadSpriteSheet(&spriteSheet);

        spritePalette.data = GetItemIconPalette(itemId);
        spritePalette.tag = paletteTag;
        LoadCompressedSpritePalette(&spritePalette);

        spriteTemplate = Alloc(sizeof(*spriteTemplate));
        CpuCopy16(&gItemIconSpriteTemplate, spriteTemplate, sizeof(*spriteTemplate));
        spriteTemplate->tileTag = tilesTag;
        spriteTemplate->paletteTag = paletteTag;
        spriteId = CreateSprite(spriteTemplate, 0, 0, 0);

        FreeItemIconTemporaryBuffers();
        Free(spriteTemplate);

        return spriteId;
    }
}

u8 AddCustomItemIconSprite(const struct SpriteTemplate *customSpriteTemplate, u16 tilesTag, u16 paletteTag, u16 itemId)
{
    if (!AllocItemIconTemporaryBuffers())
    {
        return MAX_SPRITES;
    }
    else
    {
        u8 spriteId;
        struct SpriteSheet spriteSheet;
        struct CompressedSpritePalette spritePalette;
        struct SpriteTemplate *spriteTemplate;

        LZDecompressWram(GetItemIconSprite(itemId), gItemIconDecompressionBuffer);
        CopyItemIconPicTo4x4Buffer(gItemIconDecompressionBuffer, gItemIcon4x4Buffer);
        spriteSheet.data = gItemIcon4x4Buffer;
        spriteSheet.size = 0x200;
        spriteSheet.tag = tilesTag;
        LoadSpriteSheet(&spriteSheet);

        spritePalette.data = GetItemIconPalette(itemId);
        spritePalette.tag = paletteTag;
        LoadCompressedSpritePalette(&spritePalette);

        spriteTemplate = Alloc(sizeof(*spriteTemplate));
        CpuCopy16(customSpriteTemplate, spriteTemplate, sizeof(*spriteTemplate));
        spriteTemplate->tileTag = tilesTag;
        spriteTemplate->paletteTag = paletteTag;
        spriteId = CreateSprite(spriteTemplate, 0, 0, 0);

        FreeItemIconTemporaryBuffers();
        Free(spriteTemplate);

        return spriteId;
    }
}

const void *GetItemIconSprite(u16 itemId)
{
    if (itemId == 0xFFFF)
        return gItemIcon_ReturnToFieldArrow;
    else if (itemId >= ITEMS_COUNT)
        return gItems[0].iconSprite;
	if (itemId >= ITEM_TM01 && itemId < ITEM_HM01 + NUM_HIDDEN_MACHINES)
    {
		if (itemId < ITEM_TM01 + NUM_TECHNICAL_MACHINES)
            return gItemIcon_TM;
        return gItemIcon_HM;
    }
		
    
    return gItems[itemId].iconSprite;
}

const void *GetItemIconPalette(u16 itemId)
{
    if (itemId == 0xFFFF)
        return gItemIconPalette_ReturnToFieldArrow;
    if (itemId >= ITEMS_COUNT)
        return gItems[0].iconPalette;
    if (itemId >= ITEM_TM01 && itemId < ITEM_HM01 + NUM_HIDDEN_MACHINES)
        return gTypesInfo[gBattleMoves[ItemId_GetSecondaryId(itemId)].type].paletteTMHM;

    return gItems[itemId].iconPalette;
}