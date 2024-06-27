#ifndef GUARD_BATTLE_PIKE_H
#define GUARD_BATTLE_PIKE_H

void CallBattlePikeFunction(void);
u8 GetBattlePikeWildMonHeaderId(void);
bool32 TryGenerateBattlePikeWildMon(bool8 checkKeenEyeIntimidate);
bool8 InBattlePike(void);
bool8 DoesAbilityPreventStatus(struct Pokemon *mon, u32 status);
bool8 DoesTypePreventStatus(u16 species, u32 status);
void BurnAllTeam(void);

#endif // GUARD_BATTLE_PIKE_H
