#ifndef GUARD_BERRY_H
#define GUARD_BERRY_H

void ClearEnigmaBerries(void);
void SetEnigmaBerry(u8 *src);
bool32 IsEnigmaBerryValid(void);
const struct Berry *GetBerryInfo(u8 berry);
struct BerryTree *GetBerryTreeInfo(u8 id);
bool32 ObjectEventInteractionWaterBerryTree(void);
bool8 IsPlayerFacingEmptyBerryTreePatch(void);
bool8 TryToWaterBerryTree(void);
void ClearBerryTrees(void);
void BerryTreeTimeUpdate(s32 minutes);
void PlantBerryTree(u8 id, u8 berry, u8 stage, bool8 sparkle, u8 mulch);
void RemoveBerryTree(u8 id);
u8 GetBerryTypeByBerryTreeId(u8 id);
u8 GetStageByBerryTreeId(u8);
u8 ItemIdToBerryType(u16 item);
u8 ItemIdToMulchType(u16 item);
void GetBerryNameByBerryType(u8 berry, u8 *string);
void ResetBerryTreeSparkleFlag(u8 id);
void Bag_ChooseBerry(void);
void ObjectEventInteractionGetBerryTreeData(void);
void ObjectEventInteractionPlantBerryTree(void);
void ObjectEventInteractionPickBerryTree(void);
void ObjectEventInteractionRemoveBerryTree(void);
bool8 PlayerHasBerries(void);
bool8 PlayerHasMulch(void);
void SetBerryTreesSeen(void);

extern const struct Berry gBerries[];

struct BerryCrushBerryData {
    u8 difficulty; // The number of A presses required to crush it
    u16 powder;
};

enum {
	GROWTH_MULCH = 1, // done, cuts grow time in half
	DAMP_MULCH, // done, forces the soil to always be watered
	STABLE_MULCH, // done, trees grow 25% faster and it's watered 50% of times
//	GOOEY_MULCH, // wip, trees always revive ??? sounds pretty useless. maybe tree doesnt die
	RICH_MULCH, // done, +5 extra berries
	SURPRISE_MULCH, // done, gives a random amount of a random berry, excluding miracle berry
//	BOOST_MULCH, // wip, ???? a true mystery 
	AMAZE_MULCH // done, halved grow time, always watered, +2 extra berries, does die
};

extern const struct BerryCrushBerryData gBerryCrush_BerryData[];

#endif // GUARD_BERRY_H
