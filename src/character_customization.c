#include "global.h"
#include "palette.h"
#include "util.h"
#include "character_customization.h"
#include "decompress.h"
#include "gpu_regs.h"
#include "task.h"
#include "constants/rgb.h"

#define RGB8_TO_RGB5(r) ( r*31/255 )
#define MALE_SKINTONE_START         1
#define MALE_SKINTONE_END           4
#define MALE_MAIN_CLOTHES_START     5	
#define MALE_MAIN_CLOTHES_END       8	
#define MALE_ACCESSORY_1_START      10	
#define MALE_ACCESSORY_1_END        11	
#define MALE_ACCESSORY_2_START      12	
#define MALE_ACCESSORY_2_END        13
#define FEMALE_SKINTONE_START       1
#define FEMALE_SKINTONE_END         3
#define FEMALE_MAIN_CLOTHES_START   12	
#define FEMALE_MAIN_CLOTHES_END     13	
#define FEMALE_ACCESSORY_START      8	
#define FEMALE_ACCESSORY_END        10	
#define FEMALE_HAIR_START           4	
#define FEMALE_HAIR_END             6	

static s8 DarkenColorByMargin(s8 colorToDarken, s8 referenceColor, u8 modifier);
static u16 GetCustomizedColor(u8 item, u8 i, u8 x);
static bool8 ClothingItemHasDarkerColor(u8 item);
static bool8 ClothingItemHasDarkestColor(u8 item);

// #if GAME_LANGUAGE == LANGUAGE_SPANISH
const struct ClothingInfo gClothingItems[] = {
	// ejemplo

	// [CUSTOMIZATION_CRYSTAL_BLUE] = 
	// {
		// .name = _("Cristal Azul"),
		// .r = 30,
		// .g = 120,
		// .b = 165,
		// // as we want it to be crystal-like, shadows will be lighter
		// // como queremos que sea cristal, la sombra será mas clara
		// .darkR = 60,
		// .darkG = 175,
		// .darkB = 215,
		// // we will set up the darker tones so the outline and darker shadows match and have a hue shift
		// // agregaremos los tonos oscuros para que el contorno y sombra mas oscura combinen y tengan un "hue shift"
		// .darkerR = 25,
		// .darkerG = 220,
		// .darkerB = 220,
		// // darkest is outline, mostly // darkest es mayormente el contorno
		// .darkestR = 140,
		// .darkestG = 220,
		// .darkestB = 220,
	// },
	

	
	// skintone
	[CUSTOMIZATION_SKINTONE_PALE_SKIN] = 
	{
		.name = _("Blanca"),
		.r = 220,
		.g = 160,
		.b = 150,
		.darkR = 200,
		.darkG = 140,
		.darkB = 120,
	},
	[CUSTOMIZATION_SKINTONE_LIGHT_SKIN] = 
	{
		.name = _("Clara"),
		.r = 230,
		.g = 160,
		.b = 140,
		.darkR = 195,
		.darkG = 120,
		.darkB = 110,
	},
	[CUSTOMIZATION_SKINTONE_MEDIUM_SKIN] = 
	{
		.name = _("Media"),
		.r = 200,
		.g = 115,
		.b = 85,
		.darkR = 150,
		.darkG = 75,
		.darkB = 55,
	},
	[CUSTOMIZATION_SKINTONE_BROWN_SKIN] = 
	{
		.name = _("Media Oscura"),
		.r = 165,
		.g = 75,
		.b = 50,
		.darkR = 135,
		.darkG = 55,
		.darkB = 35,
	},
	[CUSTOMIZATION_SKINTONE_DARK_SKIN] = 
	{
		.name = _("Oscura"),
		.r = 135,
		.g = 65,
		.b = 45,
		.darkR = 110,
		.darkG = 45,
		.darkB = 30,
	},
	// clothes start
	[CUSTOMIZATION_CLOTHES_RED] = 
	{
		.name = _("Roja"), // no funciona
		.r = 235,
		.g = 60,
		.b = 70,
		.darkR = 185,
		.darkG = 35,
		.darkB = 50,
	},
	[CUSTOMIZATION_CLOTHES_ORANGE] = 
	{
		.name = _("Naranja"), // no funciona
		.r = 235,
		.g = 100,
		.b = 50,
		.darkR = 185,
		.darkG = 60,
		.darkB = 40,
	},
	[CUSTOMIZATION_CLOTHES_YELLOW] = 
	{
		.name = _("Amarilla"), // no funciona
		.r = 230,
		.g = 180,
		.b = 45,
		.darkR = 190,
		.darkG = 120,
		.darkB = 30,
	},
	[CUSTOMIZATION_CLOTHES_GREEN] = 
	{
		.name = _("Verde"),
		.r = 120,
		.g = 215,
		.b = 95,
		.darkR = 60,
		.darkG = 160,
		.darkB = 70,
	},
	[CUSTOMIZATION_CLOTHES_CYAN] = 
	{
		.name = _("Cyan"),
		.r = 95,
		.g = 215,
		.b = 175,
		.darkR = 55,
		.darkG = 150,
		.darkB = 145,
	},
	[CUSTOMIZATION_CLOTHES_BLUE] = 
	{
		.name = _("Azul"),
		.r = 40,
		.g = 95,
		.b = 200,
		.darkR = 25,
		.darkG = 70,
		.darkB = 160,
	},
	[CUSTOMIZATION_CLOTHES_PURPLE] = 
	{
		.name = _("Violeta"),
		.r = 120,
		.g = 75,
		.b = 195,
		.darkR = 80,
		.darkG = 45,
		.darkB = 140,
	},
	[CUSTOMIZATION_CLOTHES_PINK] = 
	{
		.name = _("Rosa"),
		.r = 235,
		.g = 90,
		.b = 230,
		.darkR = 185,
		.darkG = 55,
		.darkB = 180,
	}
	
};

static bool8 ClothingItemHasDarkerColor(u8 item) {
	return (gClothingItems[item].darkerR >= 1 && gClothingItems[item].darkerG >= 1 && gClothingItems[item].darkerB >= 1);
}

static bool8 ClothingItemHasDarkestColor(u8 item) {
	return (gClothingItems[item].darkestR >= 1 && gClothingItems[item].darkestG >= 1 && gClothingItems[item].darkestB >= 1);
}


static s8 DarkenColorByMargin(s8 colorToDarken, s8 referenceColor, u8 modifier){
	s8 newColor;
	u8 i;
	newColor = referenceColor;
	if (modifier == 0)
		return colorToDarken;
	if (modifier == 1)
		return referenceColor;
	if (modifier >= 2)
		newColor -= (colorToDarken - referenceColor);
	if (modifier >= 3)
		newColor -= (colorToDarken - referenceColor)/2;
	if (modifier >= 4)
		newColor -= (colorToDarken - referenceColor)/4;
	if ((newColor) < 0)
		return 0;
	return newColor;
}



static u16 GetCustomizedColor(u8 item, u8 i, u8 x) {
	
	s8 shadowR, shadowG, shadowB, lightR, lightG, lightB, rx, bx, gx;
	u8 clothing = gSaveBlock2Ptr->customization[item];
	
	shadowR = gClothingItems[clothing].darkR;
	shadowG = gClothingItems[clothing].darkG;
	shadowB = gClothingItems[clothing].darkB;
	lightR  = gClothingItems[clothing].r;
	lightG  = gClothingItems[clothing].g;
	lightB  = gClothingItems[clothing].b;
	
	
	rx = DarkenColorByMargin(lightR, shadowR, i - x);
	gx = DarkenColorByMargin(lightG, shadowG, i - x);
	bx = DarkenColorByMargin(lightB, shadowB, i - x);
	if ((clothing == CUSTOMIZATION_SKINTONE_PALE_SKIN || clothing == CUSTOMIZATION_SKINTONE_LIGHT_SKIN) && item == 0){ // lighter skintones hue shift too much. 
																													   //force it to use colors of darker skintones instead.
		if (i == 3){
			rx = gClothingItems[clothing+2].darkR;
			gx = gClothingItems[clothing+2].darkG;
			bx = gClothingItems[clothing+2].darkB;
		}
		else if (i == 4){
			rx = gClothingItems[clothing+3].darkR;
			gx = gClothingItems[clothing+3].darkG;
			bx = gClothingItems[clothing+3].darkB;
		}
	}
	if (i-x == 2 && ClothingItemHasDarkerColor(clothing)){ // if color has darker tone, use that instead.
		rx = gClothingItems[clothing].darkerR;
		gx = gClothingItems[clothing].darkerG;
		bx = gClothingItems[clothing].darkerB;
	}
	else if (i-x == 3 && ClothingItemHasDarkestColor(clothing)){ // if color has darkest tone, use that instead.
		rx = gClothingItems[clothing].darkestR;
		gx = gClothingItems[clothing].darkestG;
		bx = gClothingItems[clothing].darkestB;
	}
	rx = RGB8_TO_RGB5(rx);
	gx = RGB8_TO_RGB5(gx);
	bx = RGB8_TO_RGB5(bx);
	if (rx>31)
		rx = 31;
	if (gx>31)
		gx = 31;
	if (bx>31)
		bx= 31;
	return _RGB(rx,gx,bx); // turn the usual 8bit rgb color to 5bit. then turn it into a color value the game reads.
}

void ApplyPaletteChangesOW(u16* colors) { // ow needs to use the palette buffer, while other places do not.
	
    u8 i, skintone, mainClothes, highlightClothes1, highlightClothes2;
	skintone = gSaveBlock2Ptr->customization[0];
	mainClothes = gSaveBlock2Ptr->customization[1];
	highlightClothes1 = gSaveBlock2Ptr->customization[2];
	highlightClothes2 = gSaveBlock2Ptr->customization[3];
	for (i=0;i<16;i++)
		gPlttBufferFaded[i] = colors[i];
	
	if (gSaveBlock2Ptr->playerGender == MALE) {
		for (i = MALE_SKINTONE_START; i <= MALE_SKINTONE_END; i++) { //Should skip past first color, which is transparency.			
			if (skintone != 0)
				gPlttBufferFaded[i] = GetCustomizedColor(0, i, MALE_SKINTONE_START);
		}
		
		// changing main clothes
		
		for (i = MALE_MAIN_CLOTHES_START; i <= MALE_MAIN_CLOTHES_END; i++) { //Should skip past first color, which is transparency.
			if (mainClothes != 0)
				gPlttBufferFaded[i] = GetCustomizedColor(1, i, MALE_MAIN_CLOTHES_START);
		}
		
		// changing up highlight1
		
		for (i = MALE_ACCESSORY_1_START; i <= MALE_ACCESSORY_1_END; i++) { //Should skip past first color, which is transparency.
			if (highlightClothes1 != 0)
				gPlttBufferFaded[i] = GetCustomizedColor(2, i, MALE_ACCESSORY_1_START);
		}
		
		// changing up highlight2
		
		for (i = MALE_ACCESSORY_2_START; i <= MALE_ACCESSORY_2_END; i++) { //Should skip past first color, which is transparency.
			if (highlightClothes2 != 0)
				gPlttBufferFaded[i] = GetCustomizedColor(3, i, MALE_ACCESSORY_2_START);
		}
	}
	else {
		// changing up skintone
		for (i = FEMALE_SKINTONE_START; i <= FEMALE_SKINTONE_END; i++) { //Should skip past first color, which is transparency.
			if (skintone != 0)
				gPlttBufferFaded[i] = GetCustomizedColor(0, i, FEMALE_SKINTONE_START);
		}
		
		// changing up main clothes
		
		for (i = FEMALE_MAIN_CLOTHES_START; i <= FEMALE_MAIN_CLOTHES_END; i++) { //Should skip past first color, which is transparency.
			if (mainClothes != 0)
				gPlttBufferFaded[i] = GetCustomizedColor(1, i, FEMALE_MAIN_CLOTHES_START);
		}
		
		// changing up highlight1
		
		for (i = FEMALE_ACCESSORY_START; i <= FEMALE_ACCESSORY_END; i++) { //Should skip past first color, which is transparency.
			if (highlightClothes1 != 0)
				gPlttBufferFaded[i] = GetCustomizedColor(2, i, FEMALE_ACCESSORY_START);
		}
		
		// changing up hair
		
		for (i = FEMALE_HAIR_START; i <= FEMALE_HAIR_END; i++) { //Should skip past first color, which is transparency.
			if (highlightClothes2 != 0)
				gPlttBufferFaded[i] = GetCustomizedColor(3, i, FEMALE_HAIR_START);
		}

	}
}

void ApplyPaletteChanges(u16* colors) {
	
    u8 i, skintone, mainClothes, highlightClothes1, highlightClothes2;
    u16 color;
	skintone = gSaveBlock2Ptr->customization[0];
	mainClothes = gSaveBlock2Ptr->customization[1];
	highlightClothes1 = gSaveBlock2Ptr->customization[2];
	highlightClothes2 = gSaveBlock2Ptr->customization[3];


	if (gSaveBlock2Ptr->playerGender == MALE) {
		
		// changing up skintone
		
		for (i = MALE_SKINTONE_START; i <= MALE_SKINTONE_END; i++) { //Should skip past first color, which is transparency.			
			if (skintone != 0)
				colors[i] = GetCustomizedColor(0, i, MALE_SKINTONE_START);
		}
		
		// changing main clothes
		
		for (i = MALE_MAIN_CLOTHES_START; i <= MALE_MAIN_CLOTHES_END; i++) { //Should skip past first color, which is transparency.
			if (mainClothes != 0)
				colors[i] = GetCustomizedColor(1, i, MALE_MAIN_CLOTHES_START);
		}
		
		// changing up highlight1
		
		for (i = MALE_ACCESSORY_1_START; i <= MALE_ACCESSORY_1_END; i++) { //Should skip past first color, which is transparency.
			if (highlightClothes1 != 0)
				colors[i] = GetCustomizedColor(2, i, MALE_ACCESSORY_1_START);
		}
		
		// changing up highlight2
		
		for (i = MALE_ACCESSORY_2_START; i <= MALE_ACCESSORY_2_END; i++) { //Should skip past first color, which is transparency.
			if (highlightClothes2 != 0)
				colors[i] = GetCustomizedColor(3, i, MALE_ACCESSORY_2_START);
		}
	}
	else {
		// changing up skintone
		for (i = FEMALE_SKINTONE_START; i <= FEMALE_SKINTONE_END; i++) { //Should skip past first color, which is transparency.
			if (skintone != 0)
				colors[i] = GetCustomizedColor(0, i, FEMALE_SKINTONE_START);
		}
		
		// changing up main clothes
		
		for (i = FEMALE_MAIN_CLOTHES_START; i <= FEMALE_MAIN_CLOTHES_END; i++) { //Should skip past first color, which is transparency.
			if (mainClothes != 0)
				colors[i] = GetCustomizedColor(1, i, FEMALE_MAIN_CLOTHES_START);
		}
		
		// changing up highlight1
		
		for (i = FEMALE_ACCESSORY_START; i <= FEMALE_ACCESSORY_END; i++) { //Should skip past first color, which is transparency.
			if (highlightClothes1 != 0)
				colors[i] = GetCustomizedColor(2, i, FEMALE_ACCESSORY_START);
		}
		
		// changing up hair
		
		for (i = FEMALE_HAIR_START; i <= FEMALE_HAIR_END; i++) { //Should skip past first color, which is transparency.
			if (highlightClothes2 != 0)
				colors[i] = GetCustomizedColor(3, i, FEMALE_HAIR_START);
		}

	}
}

void LoadOutfitPalette(const u32 *src, u16 offset, u16 size)
{
    LZDecompressWram(src, gPaletteDecompressionBuffer);

	ApplyPaletteChanges((u16*) gPaletteDecompressionBuffer);

    CpuCopy16(gPaletteDecompressionBuffer, gPlttBufferUnfaded + offset, size);
    CpuCopy16(gPaletteDecompressionBuffer, gPlttBufferFaded + offset, size);
}

void LoadOutfitPaletteOW(const u16 *src, u16 offset, u16 size, u8 index)
{
	
	ApplyPaletteChangesOW((u16*) src);

    CpuCopy32(gPlttBufferFaded, gPlttBufferUnfaded + offset, size);
    CpuCopy32(gPlttBufferFaded, gPlttBufferFaded + offset, size);
}

bool8 CheckPlayerGenderSpriteAndPalTag(u16 palTag) // use the paltag to check if the palette should be changed to be the player's customized one. should later use the info on the gOutfitItems struct when functional.
{
	return ((palTag == 0x1100 && gSaveBlock2Ptr->playerGender == MALE) || (palTag == 0x1110 && gSaveBlock2Ptr->playerGender == FEMALE));
}