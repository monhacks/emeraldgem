#ifndef GUARD_POKEMON_H
#define GUARD_POKEMON_H

#include "sprite.h"
#include "constants/region_map_sections.h"
#include "constants/pokemon_config.h"
#include "constants/map_groups.h"

#define GET_BASE_SPECIES_ID(speciesId) (GetFormSpeciesId(speciesId, 0))
#define FORM_SPECIES_END (0xffff)

#define METHOD_NONE 0
#define METHOD_MASUDA_METHOD 1
#define METHOD_DEXNAV 2

enum {
	// EASY
	POKEDOKU_TYPE = 1,
	POKEDOKU_ABILITY,
	POKEDOKU_EVOLINE,
	POKEDOKU_SPECIES_FLAG,
	POKEDOKU_DUAL_OR_SINGLE_TYPE,
	// MEDIUM
	POKEDOKU_SIGNATURE_MOVE,
	POKEDOKU_EVO_METHOD,
	POKEDOKU_REGION,
	POKEDOKU_MEGA_FORM,
	POKEDOKU_REGIONAL_FORM,
	// HARD
	POKEDOKU_HIGHEST_STAT,
	POKEDOKU_BASE_STAT_TOTAL,
	POKEDOKU_LEARNS_MOVE,
	POKEDOKU_STRONGEST_STAB,
	POKEDOKU_CATEGORY,
	// IMPOSSIBLE
	POKEDOKU_STAT_NUMBER,
	POKEDOKU_EV_YIELD,
	POKEDOKU_HEIGHT,
	POKEDOKU_WEIGHT,
	POKEDOKU_EGG_GROUP
};

// Property labels for Get(Box)MonData / Set(Box)MonData
enum {
    MON_DATA_PERSONALITY,
    MON_DATA_OT_ID,
    MON_DATA_NICKNAME,
    MON_DATA_LANGUAGE,
    MON_DATA_SANITY_IS_BAD_EGG,
    MON_DATA_SANITY_HAS_SPECIES,
    MON_DATA_SANITY_IS_EGG,
    MON_DATA_OT_NAME,
    MON_DATA_MARKINGS,
    MON_DATA_CHECKSUM,
    MON_DATA_ENCRYPT_SEPARATOR,
    MON_DATA_SPECIES,
    MON_DATA_HELD_ITEM,
    MON_DATA_MOVE1,
    MON_DATA_MOVE2,
    MON_DATA_MOVE3,
    MON_DATA_MOVE4,
    MON_DATA_PP1,
    MON_DATA_PP2,
    MON_DATA_PP3,
    MON_DATA_PP4,
    MON_DATA_PP_BONUSES,
    MON_DATA_COOL,
    MON_DATA_COOL_CV,
    MON_DATA_BEAUTY,
    MON_DATA_BEAUTY_CV,
    MON_DATA_CUTE,
    MON_DATA_CUTE_CV,
    MON_DATA_EXP,
    MON_DATA_HP_EV,
    MON_DATA_ATK_EV,
    MON_DATA_DEF_EV,
    MON_DATA_SPEED_EV,
    MON_DATA_SPATK_EV,
    MON_DATA_SPDEF_EV,
    MON_DATA_FRIENDSHIP,
    MON_DATA_SMART,
    MON_DATA_SMART_CV,
    MON_DATA_POKERUS,
    MON_DATA_MET_LOCATION,
    MON_DATA_MET_LEVEL,
    MON_DATA_MET_GAME,
    MON_DATA_POKEBALL,
    MON_DATA_HP_IV,
    MON_DATA_ATK_IV,
    MON_DATA_DEF_IV,
    MON_DATA_SPEED_IV,
    MON_DATA_SPATK_IV,
    MON_DATA_SPDEF_IV,
    MON_DATA_IS_EGG,
    MON_DATA_ABILITY_NUM,
    MON_DATA_TOUGH,
    MON_DATA_TOUGH_CV,
    MON_DATA_SHEEN,
	MON_DATA_CONTEST_EXP,
    MON_DATA_OT_GENDER,
    MON_DATA_COOL_RIBBON,
    MON_DATA_BEAUTY_RIBBON,
    MON_DATA_CUTE_RIBBON,
    MON_DATA_SMART_RIBBON,
    MON_DATA_TOUGH_RIBBON,
    MON_DATA_STATUS,
    MON_DATA_LEVEL,
    MON_DATA_HP,
    MON_DATA_MAX_HP,
    MON_DATA_ATK,
    MON_DATA_DEF,
    MON_DATA_SPEED,
    MON_DATA_SPATK,
    MON_DATA_SPDEF,
    MON_DATA_MAIL,
    MON_DATA_SPECIES2,
    MON_DATA_IVS,
    MON_DATA_CHAMPION_RIBBON,
    MON_DATA_WINNING_RIBBON,
    MON_DATA_VICTORY_RIBBON,
    MON_DATA_ARTIST_RIBBON,
    MON_DATA_EFFORT_RIBBON,
    MON_DATA_MARINE_RIBBON,
    MON_DATA_LAND_RIBBON,
    MON_DATA_SKY_RIBBON,
    MON_DATA_COUNTRY_RIBBON,
    MON_DATA_NATIONAL_RIBBON,
    MON_DATA_EARTH_RIBBON,
    MON_DATA_WORLD_RIBBON,
    MON_DATA_UNUSED_RIBBONS,
    MON_DATA_EVENT_LEGAL,
    MON_DATA_KNOWN_MOVES,
    MON_DATA_RIBBON_COUNT,
    MON_DATA_RIBBONS,
    MON_DATA_ATK2,
    MON_DATA_DEF2,
    MON_DATA_SPEED2,
    MON_DATA_SPATK2,
    MON_DATA_SPDEF2,
	MON_DATA_HIDDEN_NATURE,
	MON_DATA_HIDDEN_POWER,
};

struct BoxPokemon
{
    /*0x00*/ u32 personality;
    /*0x04*/ u32 otId;
    /*0x08*/ u8 nickname[POKEMON_NAME_LENGTH];
             u8 pokerus:1;
             // u8 hasSpecies:1;
             u8 isEgg:1;
             u8 markings:4; // 15 combinations as per sAnims_MarkingCombo
    /*0x14*/ u8 otName[PLAYER_NAME_LENGTH];
    /*0x1B*/ u8 metLocation;    // better to not limit the number of map sections. this is actually used for friendship growth, too
    /*0x1C*/ u32 species:11;    // up to 2047 species. could probably go down to 10 bits...
             u32 heldItem:10;   // up to 1023 items. could probably be 9 bits if hold items are limited to IDs below 511
             u8 metLevel:1;
             u32 contestExp:9; // 0 - 510
    /*0x20*/ u32 experience:21;
             // u32 otGender:1;
    /*0x24*/ u32 move1:10;  // 1023 moves
             u32 move2:10;  // bits 11-20
             u32 move3:10;  // bits 21-30
    /*0x28*/ u16 move4:10;  // bits 31-40
    /*0x2A*/ u16 attackIV:3;    // 46-50
             u16 defenseIV:3;   // 51-55
             u16 speedIV:3;     // 56-60
    /*0x2C*/ u8 ppBonuses;
    /*0x2D*/ u8 friendship;
    /*0x2E*/ u8 pokeball:6;
             u8 abilityNum:2;
    /*0x2F*/ u8 hpEV:6;
    /*0x30*/ u8 attackEV:6;
    /*0x31*/ u8 defenseEV:6;
    /*0x32*/ u8 speedEV:6;
    /*0x33*/ u8 spAttackEV:6;
    /*0x34*/ u8 spDefenseEV:6; 
			 u8 coolCV:2;
			 u8 toughCV:2;
			 u8 smartCV:2;
			 u8 cuteCV:2;
			 u8 beautyCV:2;
			 u8 hiddenNature:5; // remain 10 bits
			 u8 hiddenPower:5; // remain 10 bits
	/*0x35*/ u8 pp1:6;
             u8 pp2:6;
             u8 pp3:6;
			 u8 pp4:6;
}; /* size = 0x3C (56) bytes */

struct Pokemon
{
    /*0x00*/ struct BoxPokemon box;
    /*0x3C*/ u32 status;
    /*0x40*/ u8 level;
    /*0x41*/ u8 mail;
    /*0x42*/ u16 hp;
    /*0x44*/ u16 maxHP;
    /*0x46*/ u16 attack;
    /*0x48*/ u16 defense;
    /*0x4A*/ u16 speed;
    /*0x4C*/ u16 spAttack;
    /*0x4E*/ u16 spDefense;
}; /* size = 80 */

struct MonSpritesGfxManager
{
    u32 numSprites:4;
    u32 numSprites2:4; // Never read
    u32 numFrames:8;
    u32 active:8;
    u32 dataSize:4;
    u32 mode:4; // MON_SPR_GFX_MODE_*
    void *spriteBuffer;
    u8 **spritePointers;
    struct SpriteTemplate *templates;
    struct SpriteFrameImage *frameImages;
};

enum {
    MON_SPR_GFX_MODE_NORMAL,
    MON_SPR_GFX_MODE_BATTLE,
    MON_SPR_GFX_MODE_FULL_PARTY,
};

enum {
    MON_SPR_GFX_MANAGER_A,
    MON_SPR_GFX_MANAGER_B, // Nothing ever sets up this manager.
    MON_SPR_GFX_MANAGERS_COUNT
};

struct BattlePokemon
{
    /*0x00*/ u16 species;
    /*0x02*/ u16 attack;
    /*0x04*/ u16 defense;
    /*0x06*/ u16 speed;
    /*0x08*/ u16 spAttack;
    /*0x0A*/ u16 spDefense;
    /*0x0C*/ u16 moves[MAX_MON_MOVES];
    /*0x14*/ u32 hpIV:5;
    /*0x14*/ u32 attackIV:5;
    /*0x15*/ u32 defenseIV:5;
    /*0x15*/ u32 speedIV:5;
    /*0x16*/ u32 spAttackIV:5;
    /*0x17*/ u32 spDefenseIV:5;
    /*0x17*/ u32 abilityNum:2;
    /*0x18*/ s8 statStages[NUM_BATTLE_STATS];
    /*0x20*/ u16 ability;
    /*0x21*/ u8 type1;
    /*0x22*/ u8 type2;
	/*0x07*/ u8 type3;
    // /*0x23*/ u8 unknown;
    /*0x24*/ u8 pp[MAX_MON_MOVES];
    /*0x28*/ u16 hp;
    /*0x2A*/ u8 level;
    /*0x2B*/ u8 friendship;
    /*0x2C*/ u16 maxHP;
    /*0x2E*/ u16 item;
    /*0x30*/ u8 nickname[POKEMON_NAME_LENGTH + 1];
    /*0x3B*/ u8 ppBonuses;
    /*0x3C*/ u8 otName[PLAYER_NAME_LENGTH + 1];
    /*0x44*/ u32 experience;
    /*0x48*/ u32 personality;
    /*0x4C*/ u32 status1;
    /*0x50*/ u32 status2;
    /*0x54*/ u32 otId;
    /*0x54*/ u8 hiddenPower:5;
};

struct BaseStats
{
 /* 0x00 */ u8 baseHP;
 /* 0x01 */ u8 baseAttack;
 /* 0x02 */ u8 baseDefense;
 /* 0x03 */ u8 baseSpeed;
 /* 0x04 */ u8 baseSpAttack;
 /* 0x05 */ u8 baseSpDefense;
 /* 0x06 */ u8 type1;
 /* 0x07 */ u8 type2;
 // /* 0x07 */ u8 type3;
 /* 0x08 */ u8 catchRate;
 /* 0x09 */ u16 expYield;
 /* 0x0A */ u16 evYield_HP:2;
 /* 0x0A */ u16 evYield_Attack:2;
 /* 0x0A */ u16 evYield_Defense:2;
 /* 0x0A */ u16 evYield_Speed:2;
 /* 0x0B */ u16 evYield_SpAttack:2;
 /* 0x0B */ u16 evYield_SpDefense:2;
 /* 0x0C */ u16 itemCommon;
 /* 0x0E */ u16 itemRare;
 /* 0x10 */ u8 genderRatio;
 /* 0x11 */ u8 eggCycles;
 /* 0x12 */ u8 friendship;
 /* 0x13 */ u8 growthRate;
 /* 0x14 */ u8 eggGroup1;
 /* 0x15 */ u8 eggGroup2;
 /* 0x16 */ u16 abilities[NUM_ABILITY_SLOTS];
            u8 safariZoneFleeRate;
            u8 bodyColor : 7;
            u8 noFlip : 1;
            u16 flags;
};

#include "constants/battle_config.h"
struct BattleMove
{
    u16 effect;
    u16 power;  //higher than 255 for z moves
    u8 type;
    u8 accuracy;
    u8 pp;
    u8 secondaryEffectChance;
    u16 target;
    s8 priority;
    u32 flags;
    u8 split;
    u8 argument;
    u8 zMovePower;
    u8 zMoveEffect;
};

#define SPINDA_SPOT_WIDTH 16
#define SPINDA_SPOT_HEIGHT 16

struct SpindaSpot
{
    u8 x, y;
    u16 image[SPINDA_SPOT_HEIGHT];
};

struct LevelUpMove
{
    u16 move;
    u16 level;
};

struct Evolution
{
    u16 method;
    u16 param;
    u16 targetSpecies;
};

struct FormChange {
    u16 method;
    u16 targetSpecies;
    u16 param1;
    u16 param2;
};


#define NUM_UNOWN_FORMS 28

#define GET_UNOWN_LETTER(personality) ((   \
      (((personality) & 0x03000000) >> 18) \
    | (((personality) & 0x00030000) >> 12) \
    | (((personality) & 0x00000300) >> 6)  \
    | (((personality) & 0x00000003) >> 0)  \
) % NUM_UNOWN_FORMS)

#define GET_SHINY_VALUE(otId, personality)HIHALF(otId) ^ LOHALF(otId) ^ HIHALF(personality) ^ LOHALF(personality)
						// (01000010 01000010 10000001 10000001) (10000001 10000001 01000010 01000010)
						// ((01000010 01000010) ^ (01000010 01000010)) == 0000000 00000000
						// ((0000000 00000000) ^ (10000001 10000001)) == 1000001 10000001
						// ((10000001 10000001) ^ (01000010 01000010)) == 1100011 11000011
						// 						 (1100011 11000011) == 3
												       // 128+64+2+1 == 199 no shiny

extern u8 gPlayerPartyCount;
extern struct Pokemon gPlayerParty[PARTY_SIZE];
extern u8 gEnemyPartyCount;
extern struct Pokemon gEnemyParty[PARTY_SIZE];
extern struct SpriteTemplate gMultiuseSpriteTemplate;
extern const u16 *const gFormSpeciesIdTables[NUM_SPECIES];


extern const struct BattleMove gBattleMoves[];
extern const u8 gFacilityClassToPicIndex[];
extern const u8 gFacilityClassToTrainerClass[];
extern const struct BaseStats gBaseStats[];
extern const u8 *const gItemEffectTable[];
extern const u32 gExperienceTables[][MAX_LEVEL + 1];
extern const struct LevelUpMove *const gLevelUpLearnsets[];
extern const u16 *const gTeachableLearnsets[];
extern const u8 gPPUpGetMask[];
extern const u8 gPPUpClearMask[];
extern const u8 gPPUpAddValues[];
extern const u8 gStatStageRatios[MAX_STAT_STAGE + 1][2];
extern const u16 gLinkPlayerFacilityClasses[];
extern const struct SpriteTemplate gBattlerSpriteTemplates[];
extern const s8 gNatureStatTable[][5];

void ZeroBoxMonData(struct BoxPokemon *boxMon);
void ZeroMonData(struct Pokemon *mon);
void ZeroPlayerPartyMons(void);
void ZeroEnemyPartyMons(void);
void CreateMon(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 hasFixedPersonality, u32 fixedPersonality, u8 otIdType, u32 fixedOtId);
void CreateBoxMon(struct BoxPokemon *boxMon, u16 species, u8 level, u8 fixedIV, u8 hasFixedPersonality, u32 fixedPersonality, u8 otIdType, u32 fixedOtId);
void CreateMonWithNature(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 nature);
void CreateMonWithGenderNatureLetter(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 gender, u8 nature, u8 unownLetter, u8 otIdType);
//void CreateMonWithGenderNatureLetter(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 gender, u8 nature, u8 unownLetter, u8 otIdType);
void CreateMaleMon(struct Pokemon *mon, u16 species, u8 level);
void CreateMonWithIVsPersonality(struct Pokemon *mon, u16 species, u8 level, u32 ivs, u32 personality);
void CreateMonWithIVsOTID(struct Pokemon *mon, u16 species, u8 level, u8 *ivs, u32 otId);
void CreateMonWithEVSpread(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 evSpread);
void CreateBattleTowerMon(struct Pokemon *mon, struct BattleTowerPokemon *src);
void CreateBattleTowerMon_HandleLevel(struct Pokemon *mon, struct BattleTowerPokemon *src, bool8 lvl50);
void CreateApprenticeMon(struct Pokemon *mon, const struct Apprentice *src, u8 monId);
void CreateMonWithEVSpreadNatureOTID(struct Pokemon *mon, u16 species, u8 level, u8 nature, u8 fixedIV, u8 evSpread, u32 otId);
void ConvertPokemonToBattleTowerPokemon(struct Pokemon *mon, struct BattleTowerPokemon *dest);
void CreateEventLegalMon(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 hasFixedPersonality, u32 fixedPersonality, u8 otIdType, u32 fixedOtId);
bool8 ShouldIgnoreDeoxysForm(u8 caseId, u8 battlerId);
u16 GetUnionRoomTrainerPic(void);
u16 GetUnionRoomTrainerClass(void);
void CreateEventLegalEnemyMon(void);
void CalculateMonStats(struct Pokemon *mon);
void BoxMonToMon(const struct BoxPokemon *src, struct Pokemon *dest);
u8 GetLevelFromMonExp(struct Pokemon *mon);
u8 GetLevelFromBoxMonExp(struct BoxPokemon *boxMon);
u16 GiveMoveToMon(struct Pokemon *mon, u16 move);
u16 GiveMoveToBattleMon(struct BattlePokemon *mon, u16 move);
void SetMonMoveSlot(struct Pokemon *mon, u16 move, u8 slot);
void SetBattleMonMoveSlot(struct BattlePokemon *mon, u16 move, u8 slot);
void GiveMonInitialMoveset(struct Pokemon *mon);
void GiveBoxMonInitialMoveset(struct BoxPokemon *boxMon);
u16 MonTryLearningNewMove(struct Pokemon *mon, bool8 firstMove);
void DeleteFirstMoveAndGiveMoveToMon(struct Pokemon *mon, u16 move);
void DeleteFirstMoveAndGiveMoveToBoxMon(struct BoxPokemon *boxMon, u16 move);
u8 CountAliveMonsInBattle(u8 caseId);
u8 GetDefaultMoveTarget(u8 battlerId);
u8 GetMonGender(struct Pokemon *mon);
u8 GetBoxMonGender(struct BoxPokemon *boxMon);
u8 GetGenderFromSpeciesAndPersonality(u16 species, u32 personality);
void SetMultiuseSpriteTemplateToPokemon(u16 speciesTag, u8 battlerPosition);
void SetMultiuseSpriteTemplateToTrainerBack(u16 trainerSpriteId, u8 battlerPosition);
void SetMultiuseSpriteTemplateToTrainerFront(u16 trainerPicId, u8 battlerPosition);

// These are full type signatures for GetMonData() and GetBoxMonData(),
// but they are not used since some code erroneously omits the third arg.
// u32 GetMonData(struct Pokemon *mon, s32 field, u8 *data);
// u32 GetBoxMonData(struct BoxPokemon *boxMon, s32 field, u8 *data);
u32 GetMonData();
u32 GetBoxMonData();

void SetMonData(struct Pokemon *mon, s32 field, const void *dataArg);
void SetBoxMonData(struct BoxPokemon *boxMon, s32 field, const void *dataArg);
void CopyMon(void *dest, void *src, size_t size);
u8 GiveMonToPlayer(struct Pokemon *mon);
u8 CalculatePlayerPartyCount(void);
u8 CalculateEnemyPartyCount(void);
u8 GetMonsStateToDoubles(void);
u8 GetMonsStateToDoubles_2(void);
u16 GetAbilityBySpecies(u16 species, u8 abilityNum);
u16 GetMonAbility(struct Pokemon *mon);
void CreateSecretBaseEnemyParty(struct SecretBase *secretBaseRecord);
u8 GetSecretBaseTrainerPicIndex(void);
u8 GetSecretBaseTrainerClass(void);
bool8 IsPlayerPartyAndPokemonStorageFull(void);
bool8 IsPokemonStorageFull(void);
void GetSpeciesName(u8 *name, u16 species);
u8 CalculatePPWithBonus(u16 move, u8 ppBonuses, u8 moveIndex);
void RemoveMonPPBonus(struct Pokemon *mon, u8 moveIndex);
void RemoveBattleMonPPBonus(struct BattlePokemon *mon, u8 moveIndex);
void PokemonToBattleMon(struct Pokemon *src, struct BattlePokemon *dst);
void CopyPlayerPartyMonToBattleData(u8 battlerId, u8 partyIndex, bool8 resetStats);
bool8 ExecuteTableBasedItemEffect(struct Pokemon *mon, u16 item, u8 partyIndex, u8 moveIndex);
bool8 PokemonUseItemEffects(struct Pokemon *mon, u16 item, u8 partyIndex, u8 moveIndex, u8 e);
bool8 HealStatusConditions(struct Pokemon *mon, u32 battlePartyId, u32 healMask, u8 battlerId);
u8 GetItemEffectParamOffset(u16 itemId, u8 effectByte, u8 effectBit);
u8 *UseStatIncreaseItem(u16 itemId);
u8 GetNature(struct Pokemon *mon, bool32 checkHidden);
u8 GetNatureFromPersonality(u32 personality);
u16 GetEvolutionTargetSpecies(struct Pokemon *mon, u8 type, u16 evolutionItem, struct Pokemon *tradePartner);
u16 HoennPokedexNumToSpecies(u16 hoennNum);
u16 NationalPokedexNumToSpecies(u16 nationalNum);
u16 NationalToHoennOrder(u16 nationalNum);
u16 SpeciesToNationalPokedexNum(u16 species);
u16 SpeciesToHoennPokedexNum(u16 species);
u16 HoennToNationalOrder(u16 hoennNum);
u16 SpeciesToCryId(u16 species);
void DrawSpindaSpots(u16 species, u32 personality, u8 *dest, bool8 isFrontPic);
void EvolutionRenameMon(struct Pokemon *mon, u16 oldSpecies, u16 newSpecies);
u8 GetPlayerFlankId(void);
u16 GetLinkTrainerFlankId(u8 id);
s32 GetBattlerMultiplayerId(u16 id);
u8 GetTrainerEncounterMusicId(u16 trainerOpponentId);
u16 ModifyStatByNature(u8 nature, u16 n, u8 statIndex);
void AdjustFriendship(struct Pokemon *mon, u8 event);
void MonGainEVs(struct Pokemon *mon, u16 defeatedSpecies);
u16 GetMonEVCount(struct Pokemon *mon);
void RandomlyGivePartyPokerus(struct Pokemon *party);
u8 CheckPartyPokerus(struct Pokemon *party, u8 selection);
u8 CheckPartyHasHadPokerus(struct Pokemon *party, u8 selection);
void UpdatePartyPokerusTime(u16 days);
void PartySpreadPokerus(struct Pokemon *party);
bool8 TryIncrementMonLevel(struct Pokemon *mon);
u8 CanLearnTeachableMove(u16 species, u16 move);
u8 GetMoveRelearnerMoves(struct Pokemon *mon, u16 *moves);
u8 GetLevelUpMovesBySpecies(u16 species, u16 *moves);
u8 GetNumberOfRelearnableMoves(struct Pokemon *mon);
u16 SpeciesToPokedexNum(u16 species);
bool32 IsSpeciesInHoennDex(u16 species);
void ClearBattleMonForms(void);
u16 GetBattleBGM(void);
void PlayBattleBGM(void);
void PlayMapChosenOrBattleBGM(u16 songId);
void CreateTask_PlayMapChosenOrBattleBGM(u16 songId);
const u32 *GetMonFrontSpritePal(struct Pokemon *mon);
const u32 *GetMonSpritePalFromSpeciesAndPersonality(u16 species, u32 otId, u32 personality);
const struct CompressedSpritePalette *GetMonSpritePalStruct(struct Pokemon *mon);
const struct CompressedSpritePalette *GetMonSpritePalStructFromOtIdPersonality(u16 species2, u32 otId , u32 personality, u16 species);
// const struct CompressedSpritePalette *GetMonSpritePalStructFromOtIdPersonality2(u16 species, u16 species2, u32 otId , u32 personality);
bool32 IsHMMove2(u16 move);
bool8 IsMonSpriteNotFlipped(u16 species);
s8 GetMonFlavorRelation(struct Pokemon *mon, u8 flavor);
s8 GetFlavorRelationByPersonality(u32 personality, u8 flavor);
bool8 IsTradedMon(struct Pokemon *mon);
bool8 IsOtherTrainer(u32 otId, u8 *otName);
void MonRestorePP(struct Pokemon *mon);
void BoxMonRestorePP(struct BoxPokemon *boxMon);
void SetMonPreventsSwitchingString(void);
void SetWildMonHeldItem(void);
bool8 IsMonShiny(struct Pokemon *mon);
bool8 IsShinyOtIdPersonality(u32 otId, u32 personality);
const u8 *GetTrainerPartnerName(void);
void BattleAnimateFrontSprite(struct Sprite *sprite, u16 species, bool8 noCry, u8 panMode);
void DoMonFrontSpriteAnimation(struct Sprite *sprite, u16 species, bool8 noCry, u8 panModeAnimFlag);
void PokemonSummaryDoMonAnimation(struct Sprite *sprite, u16 species, bool8 oneFrame);
void StopPokemonAnimationDelayTask(void);
void BattleAnimateBackSprite(struct Sprite *sprite, u16 species);
u8 GetOpposingLinkMultiBattlerId(bool8 rightSide, u8 multiplayerId);
u16 FacilityClassToPicIndex(u16 facilityClass);
u16 PlayerGenderToFrontTrainerPicId(u8 playerGender);
void HandleSetPokedexFlag(u16 nationalNum, u8 caseId, u32 personality);
const u8 *GetTrainerClassNameFromId(u16 trainerId);
const u8 *GetTrainerNameFromId(u16 trainerId);
bool8 HasTwoFramesAnimation(u16 species);
struct MonSpritesGfxManager *CreateMonSpritesGfxManager(u8 managerId, u8 mode);
void DestroyMonSpritesGfxManager(u8 managerId);
u8 *MonSpritesGfxManager_GetSpritePtr(u8 managerId, u8 spriteNum);
u16 GetFormSpeciesId(u16 speciesId, u8 formId);
u8 GetFormIdFromFormSpeciesId(u16 formSpeciesId);
u32 GetUnownSpeciesId(u32 personality);
u16 GetFormChangeTargetSpecies(struct Pokemon *mon, u16 method, u32 arg);
u16 GetFormChangeTargetSpeciesBoxMon(struct BoxPokemon *mon, u16 method, u32 arg);
u16 MonTryLearningNewMoveEvolution(struct Pokemon *mon, bool8 firstMove);
bool32 ShouldShowFemaleDifferences(u16 species, u32 personality);
u32 CanSpeciesLearnTMHM(u16 species, u8 tm);
u32 CanMonLearnTMHM(struct Pokemon *mon, u8 tm);
extern const u32 sExpCandyExperienceTable[];
void CreateShinyMonWithNature(struct Pokemon *mon, u16 species, u8 level, u8 nature);
u8 SendMonToPC(struct Pokemon* mon);
u32 CalculateShininess(bool8 affectsShinyFlags, u8 method, u8 flagAffected, u16 species, u8 nature);
u8 GetRealIV(u8 iv);
u16 GetPreEvolution(u16 species);
// #define METHOD_CHAIN_FISHING 3;

#endif // GUARD_POKEMON_H