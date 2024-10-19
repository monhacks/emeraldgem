#ifndef GUARD_CHARACTER_CUSTOMIZATION_H
#define GUARD_CHARACTER_CUSTOMIZATION_H
// 

void ApplyPaletteChanges(u16* colors);
void ApplyPaletteChangesOW(u16* colors);
// void LoadCustomizedClothingPalette(const u32 *src, u16 offset, u16 size);
void LoadOutfitPalette(const u32 *src, u16 offset, u16 size);
void LoadOutfitPaletteOW(const u16 *src, u16 offset, u16 size, u8 index);
bool8 CheckPlayerGenderSpriteAndPalTag(u16 palTag);


enum { // customization
	// skintone
	CUSTOMIZATION_SKINTONE_PALE_SKIN = 1,
	CUSTOMIZATION_SKINTONE_LIGHT_SKIN,
	CUSTOMIZATION_SKINTONE_MEDIUM_SKIN,
	CUSTOMIZATION_SKINTONE_BROWN_SKIN,
	CUSTOMIZATION_SKINTONE_DARK_SKIN,
	// clothes start
	CUSTOMIZATION_CLOTHES_RED,
	CUSTOMIZATION_CLOTHES_YELLOW,
	CUSTOMIZATION_CLOTHES_ORANGE,
	CUSTOMIZATION_CLOTHES_GREEN,
	CUSTOMIZATION_CLOTHES_CYAN,
	CUSTOMIZATION_CLOTHES_BLUE,
	CUSTOMIZATION_CLOTHES_PURPLE,
	CUSTOMIZATION_CLOTHES_PINK,
	
	// misc start?
	// CUSTOMIZATION_CRYSTAL_BLUE, new clothing items need to be added here // nuevos colores deben ser añadidos aqui
};

struct ClothingInfo {
	u8 name[14]; // name. duh // el nombre. obvio
	s8 r; // base color, lightest // color base, el más claro // valor 0 - 31
	s8 g;
	s8 b;
	
	s8 darkR; // base shadow color. last needed color for code to work // color sombra base. el ultimo color necesario para el codigo // valor 0 - 31
	s8 darkG;
	s8 darkB;
	
	s8 darkerR; // not necesasry. useful if you want to set up your own dark tones, minimum value for code to read it is 1. 
	s8 darkerG; // no necesario. útil si quieres crear tus propias sombras, valor mínimo para que el codigo lo lea es 1
	s8 darkerB;
	
	s8 darkestR; // not necesasry. useful if you want to set up your own dark tones, minimum value for code to read it is 1. 
	s8 darkestG; // no necesario. útil si quieres crear tus propias sombras, valor mínimo para que el codigo lo lea es 1
	s8 darkestB;
	
};

extern const struct ClothingInfo gClothingItems[];

struct OutfitInfo {
	u8 name[14]; // name. duh // nombre obvio
	u8 Id; // id for the outift. necessary for storing it in savedata easily.  // id del outfit. necesario para tenerlo en el archivo guardado.
	u8 playerGender; // gender necessary for the fit. // genero requerido por el outfit.
	u16 graphicsId; // graphics id. maybe unnecessary...? // id del gráfico. quizá innecesario...?
	u16 paletteTag; // tag of the palette. ex: OBJ_EVENT_ID_BRENDAN // tag de la paleta. ej: OBJ_EVENT_ID_BRENDAN
};

extern const struct OutfitInfo gOutfitItems[];

#endif