#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_message.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "data.h"
#include "event_data.h"
#include "frontier_util.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "link.h"
#include "menu.h"
#include "palette.h"
#include "recorded_battle.h"
#include "string_util.h"
#include "strings.h"
#include "text.h"
#include "trainer_hill.h"
#include "window.h"
#include "constants/abilities.h"
#include "constants/battle_dome.h"
#include "constants/battle_string_ids.h"
#include "constants/frontier_util.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/opponents.h"
#include "constants/species.h"
#include "constants/trainers.h"
#include "constants/trainer_hill.h"
#include "constants/weather.h"

struct BattleWindowText
{
    u8 fillValue;
    u8 fontId;
    u8 x;
    u8 y;
    u8 letterSpacing;
    u8 lineSpacing;
    u8 speed;
    u8 fgColor;
    u8 bgColor;
    u8 shadowColor;
};

static void ChooseMoveUsedParticle(u8 *textPtr);
static void ChooseTypeOfMoveUsedString(u8 *dst);
static void ExpandBattleTextBuffPlaceholders(const u8 *src, u8 *dst);

static EWRAM_DATA u16 sBattlerAbilities[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA struct BattleMsgData *gBattleMsgDataPtr = NULL;

// todo: make some of those names less vague: attacker/target vs pkmn, etc.

static const u8 sText_Trainer1LoseText[] = _("{B_TRAINER1_LOSE_TEXT}");
static const u8 sText_PkmnGainedEXP[] = _("¡{B_BUFF1} ganó {B_BUFF2}\n{B_BUFF3} Puntos de EXP!\p");
static const u8 sText_EmptyString4[] = _(" ");
static const u8 sText_ABoosted[] = _(" unos");
static const u8 sText_PkmnGrewToLv[] = _("¡{B_BUFF1} subió al\nnivel {B_BUFF2}!{WAIT_SE}\p");
static const u8 sText_PkmnLearnedMove[] = _("¡{B_BUFF1} aprendió\n{B_BUFF2}!{WAIT_SE}\p");
static const u8 sText_TryToLearnMove1[] = _("{B_BUFF1} quiere\naprender {B_BUFF2}.\p");
static const u8 sText_TryToLearnMove2[] = _("Pero, {B_BUFF1} no puede usar más\nde cuatro movimientos.\p");
static const u8 sText_TryToLearnMove3[] = _("¿Reemplazar un movimiento\ncon {B_BUFF2}?");
static const u8 sText_PkmnForgotMove[] = _("{B_BUFF1} olvidó\n{B_BUFF2}.\p");
static const u8 sText_StopLearningMove[] = _("{PAUSE 32}¿Dejar de aprender\n{B_BUFF2}?");
static const u8 sText_DidNotLearnMove[] = _("{B_BUFF1} no aprendió\n{B_BUFF2}.\p");
static const u8 sText_UseNextPkmn[] = _("¿Usar otro Pokémon?");
static const u8 sText_AttackMissed[] = _("¡El ataque de\n{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} falló!");
static const u8 sText_PkmnProtectedItself[] = _("¡{B_DEF_NAME_WITH_PREFIX}\nse protegió!");
static const u8 sText_PkmnsItemRevived[] = _("¡{B_TARGET_OF_REVIVE} ha recuperado sus fuerzas!"); 
static const u8 sText_AvoidedDamage[] = _("¡{B_DEF_NAME_WITH_PREFIX} evitó el\ndaño con {B_DEF_ABILITY}!");
static const u8 sText_PkmnMakesGroundMiss[] = _("¡{B_DEF_NAME_WITH_PREFIX} evita ataques\nTipo Tierra con {B_DEF_ABILITY}!");
static const u8 sText_PkmnAvoidedAttack[] = _("¡{B_DEF_NAME_WITH_PREFIX} lo esquivó!");
static const u8 sText_ItDoesntAffect[] = _("Pero no afecta a\n{B_DEF_NAME_WITH_PREFIX}…");
static const u8 sText_AttackerFainted[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}\nya no puede continuar!\p");
static const u8 sText_TargetFainted[] = _("¡{B_DEF_NAME_WITH_PREFIX}\nya no puede continuar!\p");
static const u8 sText_PlayerGotMoney[] = _("¡{COLOR_PLAYER}{B_PLAYER_NAME}{COLOR WHITE} ganó ¥{B_BUFF1}\npor vencer!\p");
static const u8 sText_PlayerLostAgainstEnemyTrainer[] = _("¡{COLOR_PLAYER}{B_PLAYER_NAME}{COLOR WHITE} ya no tiene Pokémon\nque puedan luchar!\p¡Perdiste el combate contra\n{B_TRAINER1_CLASS} {B_TRAINER1_NAME}!{PAUSE_UNTIL_PRESS}");
static const u8 sText_PlayerLostToEnemyTrainer[] = _("¡{COLOR_PLAYER}{B_PLAYER_NAME}{COLOR WHITE} ya no tiene Pokémon\nque puedan luchar!\p¡Perdiste el combate contra\n{B_TRAINER1_CLASS} {B_TRAINER1_NAME}!{PAUSE_UNTIL_PRESS}");
static const u8 sText_PlayerPaidPrizeMoney[] = _("{COLOR_PLAYER}{B_PLAYER_NAME}{COLOR WHITE} pagó ¥{B_BUFF1} por perder…\n… … … …\p¡{COLOR_PLAYER}{B_PLAYER_NAME}{COLOR WHITE} se desmayó!{PAUSE_UNTIL_PRESS}");
static const u8 sText_PlayerWhiteout[] = _("¡{COLOR_PLAYER}{B_PLAYER_NAME}{COLOR WHITE} ya no tiene Pokémon\nque puedan luchar!\p");
static const u8 sText_PlayerWhiteout2[] = _("¡{COLOR_PLAYER}{B_PLAYER_NAME}{COLOR WHITE} se asustó y perdió ¥{B_BUFF1}…!\p… … … …\p¡{COLOR_PLAYER}{B_PLAYER_NAME}{COLOR WHITE} se desmayó!{PAUSE_UNTIL_PRESS}");
static const u8 sText_PreventsEscape[] = _("¡{B_SCR_ACTIVE_NAME_WITH_PREFIX} evita el\nescape con {B_SCR_ACTIVE_ABILITY}!\p");
static const u8 sText_CantEscape2[] = _("¡Pero te persiguió!\p");
static const u8 sText_AttackerCantEscape[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} no puede escapar!");
static const u8 sText_HitXTimes[] = _("¡Golpeó {B_BUFF1} vece(s)!");
static const u8 sText_PkmnFellAsleep[] = _("¡{B_EFF_NAME_WITH_PREFIX}\nse durmió!");
static const u8 sText_PkmnMadeSleep[] = _("¡{B_SCR_ACTIVE_ABILITY} de {B_SCR_ACTIVE_NAME_WITH_PREFIX}\nadormeció a {B_EFF_NAME_WITH_PREFIX}!");
static const u8 sText_PkmnAlreadyAsleep[] = _("¡{B_DEF_NAME_WITH_PREFIX} ya está\ndurmiendo!");
static const u8 sText_PkmnAlreadyAsleep2[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} ya está\ndurmiendo!");
static const u8 sText_PkmnWasntAffected[] = _("¡Pero no afectó a\n{B_DEF_NAME_WITH_PREFIX}!");
static const u8 sText_PkmnWasPoisoned[] = _("¡{B_EFF_NAME_WITH_PREFIX}\nha sido envenenado!");
static const u8 sText_PkmnPoisonedBy[] = _("¡{B_BUFF1} de {B_SCR_ACTIVE_NAME_WITH_PREFIX}\nenvenenó a {B_EFF_NAME_WITH_PREFIX}!");
static const u8 sText_PkmnHurtByPoison[] = _("¡El veneno corroe a\n{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}!");
static const u8 sText_PkmnAlreadyPoisoned[] = _("Pero… ¿Si {B_DEF_NAME_WITH_PREFIX}\nya está envenenado…?");
static const u8 sText_PkmnBadlyPoisoned[] = _("¡{B_EFF_NAME_WITH_PREFIX} fue envenenado\ngravemente!");
static const u8 sText_PkmnEnergyDrained[] = _("¡La energía de {B_DEF_NAME_WITH_PREFIX}\nfue robada!");
static const u8 sText_PkmnWasBurned[] = _("¡{B_EFF_NAME_WITH_PREFIX} se quemó!");
static const u8 sText_PkmnBurnedBy[] = _("{B_SCR_ACTIVE_ABILITY} de {B_SCR_ACTIVE_NAME_WITH_PREFIX}\nquemó a {B_EFF_NAME_WITH_PREFIX}!");
static const u8 sText_PkmnHurtByBurn[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}\nse resiente de las quemaduras!");
static const u8 sText_PkmnAlreadyHasBurn[] = _("{B_DEF_NAME_WITH_PREFIX} ya está quemado…\nTurno desperdiciado.");
static const u8 sText_PkmnWasFrozen[] = _("¡{B_EFF_NAME_WITH_PREFIX}\nfue helado!");
static const u8 sText_PkmnFrozenBy[] = _("¡{B_SCR_ACTIVE_ABILITY} de {B_SCR_ACTIVE_NAME_WITH_PREFIX} heló\n a {B_EFF_NAME_WITH_PREFIX}!");
static const u8 sText_PkmnIsFrozen[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} está\n helado!");
static const u8 sText_PkmnWasDefrosted[] = _("¡{B_DEF_NAME_WITH_PREFIX} se\ndescongeló!");
static const u8 sText_PkmnWasDefrosted2[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se\ndescongeló!");
static const u8 sText_PkmnWasDefrostedBy[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se descongeló\ngracias a {B_CURRENT_MOVE}!");
static const u8 sText_PkmnWasParalyzed[] = _("¡{B_EFF_NAME_WITH_PREFIX} está paralizado!\n¡Quizá no se mueva!");
static const u8 sText_PkmnWasParalyzedBy[] = _("{B_SCR_ACTIVE_ABILITY} de {B_SCR_ACTIVE_NAME_WITH_PREFIX}\nparalizó a {B_EFF_NAME_WITH_PREFIX}!\l¡Quizá no se mueva!");
static const u8 sText_PkmnIsParalyzed[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se paralizó!\n¡No pudo moverse!");
static const u8 sText_PkmnIsAlreadyParalyzed[] = _("{B_DEF_NAME_WITH_PREFIX} ya\nestaba paralizado.");
static const u8 sText_PkmnHealedParalysis[] = _("¡La parálisis de {B_DEF_NAME_WITH_PREFIX}\nse curó!");
static const u8 sText_PkmnDreamEaten[] = _("¡Se comieron los sueños de\n{B_DEF_NAME_WITH_PREFIX}!");
static const u8 sText_StatsWontIncrease[] = _("{B_BUFF1} de {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}\nno subirá más!");
static const u8 sText_StatsWontDecrease[] = _("{B_BUFF1} de {B_DEF_NAME_WITH_PREFIX}\nno bajará más!");
static const u8 sText_TeamStoppedWorking[] = _("¡Los efectos de tu {B_BUFF1}\ndesaparecieron!");
static const u8 sText_FoeStoppedWorking[] = _("¡Los efectos del {B_BUFF1} del rival\ndesaparecieron!");
static const u8 sText_PkmnIsConfused[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se\nconfundió!");
static const u8 sText_PkmnHealedConfusion[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se liberó\nde la confusión!");
static const u8 sText_PkmnWasConfused[] = _("¡{B_EFF_NAME_WITH_PREFIX} se\nconfundió!");
static const u8 sText_PkmnAlreadyConfused[] = _("¡{B_DEF_NAME_WITH_PREFIX} no puede\nconfundirse dos veces!");
static const u8 sText_PkmnFellInLove[] = _("¡{B_DEF_NAME_WITH_PREFIX}\nse enamoró!");
static const u8 sText_PkmnInLove[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se enamoró\nde {B_SCR_ACTIVE_NAME_WITH_PREFIX}!");
static const u8 sText_PkmnImmobilizedByLove[] = _("¡El amor impide que {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}\npueda atacar!");
static const u8 sText_PkmnBlownAway[] = _("¡{B_DEF_NAME_WITH_PREFIX}\nsalió volando!");
static const u8 sText_PkmnChangedType[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se transformó en\nun tipo {B_BUFF1}!");
static const u8 sText_PkmnFlinched[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se acobardó!");
static const u8 sText_PkmnRegainedHealth[] = _("¡{B_DEF_NAME_WITH_PREFIX} recuperó\nsalud!");
static const u8 sText_PkmnHPFull[] = _("¡Los PS de {B_DEF_NAME_WITH_PREFIX}\nestán al máximo!");
static const u8 sText_PkmnRaisedSpDef[] = _("¡{B_CURRENT_MOVE} de {B_ATK_PREFIX2}\nsubió su Defensa Especial!");
static const u8 sText_PkmnRaisedSpDefALittle[] = _("¡{B_CURRENT_MOVE} de {B_ATK_PREFIX2}\nsubió su Defensa Especial un poquito!");
static const u8 sText_PkmnRaisedDef[] = _("¡{B_CURRENT_MOVE} de {B_ATK_PREFIX2}\nsubió su Defensa!");
static const u8 sText_PkmnRaisedDefALittle[] = _("¡{B_CURRENT_MOVE} de {B_ATK_PREFIX2}\nsubió su Defensa un poquito!");
static const u8 sText_PkmnCoveredByVeil[] = _("¡El equipo de {B_ATK_PREFIX2} fue cubierto\npor un velo!");
static const u8 sText_PkmnUsedSafeguard[] = _("¡El equipo de {B_DEF_NAME_WITH_PREFIX} fue protegido\npor Salvaguardia!");
static const u8 sText_PkmnSafeguardExpired[] = _("¡El equipo de  {B_ATK_PREFIX3} ya no es\nprotegido por Salvaguardia!");
static const u8 sText_PkmnWentToSleep[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se fue\na dormir!");
static const u8 sText_PkmnSleptHealthy[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} durmió y\nse curó!");
static const u8 sText_PkmnWhippedWhirlwind[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} comenzó un remolino!");
static const u8 sText_PkmnTookSunlight[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} absorbió luz solar!");
static const u8 sText_PkmnLoweredHead[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} bajó la cabeza!");
static const u8 sText_PkmnIsGlowing[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} está brillando!");
static const u8 sText_PkmnFlewHigh[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} voló muy alto!");
static const u8 sText_PkmnDugHole[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} cavó un agujero!");
static const u8 sText_PkmnHidUnderwater[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se metió\nabajo del agua!");
static const u8 sText_PkmnSprangUp[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} dio un salto tremendo!");
static const u8 sText_PkmnSqueezedByBind[] = _("¡{B_DEF_NAME_WITH_PREFIX} fue dañado\npor la Atadura!");
static const u8 sText_PkmnInSnapTrap[] = _("¡{B_DEF_NAME_WITH_PREFIX} fue atrapado\ppor un Sepo!");
static const u8 sText_PkmnTrappedInVortex[] = _("¡{B_DEF_NAME_WITH_PREFIX} quedó atrapado\nen el vórtice!");
static const u8 sText_PkmnTrappedBySandTomb[] = _("¡{B_DEF_NAME_WITH_PREFIX} quedó atrapado\nen una Tumba Arena!");
static const u8 sText_PkmnWrappedBy[] = _("¡{B_DEF_NAME_WITH_PREFIX} fue Constreñido\npor {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}!");
static const u8 sText_PkmnClamped[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} atrapó a\n{B_DEF_NAME_WITH_PREFIX} con su Tenaza!");
static const u8 sText_PkmnHurtBy[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} recibe daño\npor su {B_BUFF1}!");
static const u8 sText_PkmnFreedFrom[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se liberó\nde su {B_BUFF1}!");
static const u8 sText_PkmnCrashed[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} siguió de largo!");
const u8 gText_PkmnShroudedInMist[] = _("¡{B_ATK_PREFIX2} se envolvió\nen Neblina!");
static const u8 sText_PkmnProtectedByMist[] = _("¡La Neblina protege a\n{B_SCR_ACTIVE_NAME_WITH_PREFIX}!");
const u8 gText_PkmnGettingPumped[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se está preparando\npara luchar!");
static const u8 sText_PkmnHitWithRecoil[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} también se\nhizo daño!");
static const u8 sText_PkmnProtectedItself2[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se protegió!");
static const u8 sText_PkmnBuffetedBySandstorm[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} es golpeado\npor la Tormenta de Arena!");
static const u8 sText_PkmnPeltedByHail[] = _("¡El granizo daña a\n{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}!");
static const u8 sText_PkmnsXWoreOff[] = _("{B_BUFF1}de {B_ATK_PREFIX1}\nllegó a su fin!");
static const u8 sText_PkmnSeeded[] = _("¡{B_DEF_NAME_WITH_PREFIX} fue infectado!");
static const u8 sText_PkmnEvadedAttack[] = _("¡{B_DEF_NAME_WITH_PREFIX} lo esquivó!");
static const u8 sText_PkmnSappedByLeechSeed[] = _("¡Las Drenadoras le quitan\nla energía a {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}!");
static const u8 sText_PkmnFastAsleep[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} is fast\nasleep.");
static const u8 sText_PkmnWokeUp[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} despertó!");
static const u8 sText_PkmnUproarKeptAwake[] = _("¡Pero el Alboroto de\n{B_SCR_ACTIVE_NAME_WITH_PREFIX} no lo permite!");
static const u8 sText_PkmnWokeUpInUproar[] = _("¡El Alboroto despertó a\n{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}!");
static const u8 sText_PkmnCausedUproar[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} grita y\nhace un alboroto!");
static const u8 sText_PkmnMakingUproar[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} está haciendo\nun alboroto!");
static const u8 sText_PkmnCalmedDown[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se calmó.");
static const u8 sText_PkmnCantSleepInUproar[] = _("¡Pero {B_DEF_NAME_WITH_PREFIX} no\npuede dormir con tanto ruido!");
static const u8 sText_PkmnStockpiled[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} reservó\n{B_BUFF1}!");
static const u8 sText_PkmnCantStockpile[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} no puede\nreservar nada más!");
static const u8 sText_PkmnCantSleepInUproar2[] = _("¡Pero {B_DEF_NAME_WITH_PREFIX} no\npuede dormir con tanto ruido!");
static const u8 sText_UproarKeptPkmnAwake[] = _("¡Pero el Alboroto no le\ndeja dormir!");
static const u8 sText_PkmnStayedAwakeUsing[] = _("¡{B_DEF_NAME_WITH_PREFIX} se mantiene\ndespierto con su {B_DEF_ABILITY}!");
static const u8 sText_PkmnStoringEnergy[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} está\nabsorbiendo energía!");
static const u8 sText_PkmnUnleashedEnergy[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} liberó\nenergía!");
static const u8 sText_PkmnFatigueConfusion[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se confundió\npor el cansancio!");
static const u8 sText_PlayerPickedUpMoney[] = _("¡{COLOR_PLAYER}{B_PLAYER_NAME}{COLOR WHITE} levantó\n¥{B_BUFF1}!\p");
static const u8 sText_PkmnUnaffected[] = _("¡Pero {B_DEF_NAME_WITH_PREFIX}\nni se inmuta!");
static const u8 sText_PkmnTransformedInto[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se transformó\nen {B_BUFF1}!");
static const u8 sText_PkmnMadeSubstitute[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} creó\nun Sustituto!");
static const u8 sText_PkmnHasSubstitute[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} ya tiene\nun Sustituto.");
static const u8 sText_SubstituteDamaged[] = _("¡El Sustituto recibe el daño\nen lugar de {B_DEF_NAME_WITH_PREFIX}!\p");
static const u8 sText_PkmnSubstituteFaded[] = _("¡El Sustituto de{B_DEF_NAME_WITH_PREFIX}\nse rompió!\p");
static const u8 sText_PkmnMustRecharge[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} debe descansar!");
static const u8 sText_PkmnRageBuilding[] = _("¡La Furia de {B_DEF_NAME_WITH_PREFIX}\nestá creciendo!");
static const u8 sText_PkmnMoveWasDisabled[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_BUFF1}\nwas disabled!");
static const u8 sText_PkmnMoveDisabledNoMore[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} is disabled\nno more!");
static const u8 sText_PkmnGotEncore[] = _("{B_DEF_NAME_WITH_PREFIX} got\nan ENCORE!");
static const u8 sText_PkmnEncoreEnded[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s ENCORE\nended!");
static const u8 sText_PkmnTookAim[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} took aim\nat {B_DEF_NAME_WITH_PREFIX}!");
static const u8 sText_PkmnSketchedMove[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} boceteó\n{B_BUFF1}!");
static const u8 sText_PkmnTryingToTakeFoe[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} está intentando\nllevarse consigo a su rival!");
static const u8 sText_PkmnTookFoe[] = _("¡{B_DEF_NAME_WITH_PREFIX} se llevó\na {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} consigo!");
static const u8 sText_PkmnReducedPP[] = _("Reduced {B_DEF_NAME_WITH_PREFIX}'s\n{B_BUFF1} by {B_BUFF2}!");
static const u8 sText_PkmnStoleItem[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} stole\n{B_DEF_NAME_WITH_PREFIX}'s {B_LAST_ITEM}!");
static const u8 sText_TargetCantEscapeNow[] = _("{B_DEF_NAME_WITH_PREFIX} can't\nescape now!");
static const u8 sText_PkmnFellIntoNightmare[] = _("{B_DEF_NAME_WITH_PREFIX} fell into\na NIGHTMARE!");
static const u8 sText_PkmnLockedInNightmare[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} is locked\nin a NIGHTMARE!");
static const u8 sText_PkmnLaidCurse[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} cut its own HP and\nlaid a CURSE on {B_DEF_NAME_WITH_PREFIX}!");
static const u8 sText_PkmnAfflictedByCurse[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} is afflicted\nby the CURSE!");
static const u8 sText_SpikesScattered[] = _("SPIKES were scattered all around\nthe opponent's side!");
static const u8 sText_PkmnHurtBySpikes[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} is hurt\nby SPIKES!");
static const u8 sText_PkmnIdentified[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} identified\n{B_DEF_NAME_WITH_PREFIX}!");
static const u8 sText_PkmnPerishCountFell[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s PERISH count\nfell to {B_BUFF1}!");
static const u8 sText_PkmnBracedItself[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} braced\nitself!");
static const u8 sText_PkmnEnduredHit[] = _("{B_DEF_NAME_WITH_PREFIX} ENDURED\nthe hit!");
static const u8 sText_MagnitudeStrength[] = _("MAGNITUDE {B_BUFF1}!");
static const u8 sText_PkmnCutHPMaxedAttack[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} cut its own HP\nand maximized ATTACK!");
static const u8 sText_PkmnCopiedStatChanges[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} copied\n{B_DEF_NAME_WITH_PREFIX}'s stat changes!");
static const u8 sText_PkmnGotFree[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} got free of\n{B_DEF_NAME_WITH_PREFIX}'s {B_BUFF1}!");
static const u8 sText_PkmnShedLeechSeed[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} shed\nLEECH SEED!");
static const u8 sText_PkmnBlewAwaySpikes[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} blew away\nSPIKES!");
static const u8 sText_PkmnFledFromBattle[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} fled from\nbattle!");
static const u8 sText_PkmnForesawAttack[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} foresaw\nan attack!");
static const u8 sText_PkmnTookAttack[] = _("{B_DEF_NAME_WITH_PREFIX} took the\n{B_BUFF1} attack!");
static const u8 sText_PkmnChoseXAsDestiny[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} chose\n{B_CURRENT_MOVE} as its destiny!");
static const u8 sText_PkmnAttack[] = _("{B_BUFF1}'s attack!");
static const u8 sText_PkmnCenterAttention[] = _("{B_DEF_NAME_WITH_PREFIX} became the\ncenter of attention!");
static const u8 sText_PkmnChargingPower[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} began\ncharging power!");
static const u8 sText_NaturePowerTurnedInto[] = _("NATURE POWER turned into\n{B_CURRENT_MOVE}!");
static const u8 sText_PkmnStatusNormal[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s status\nreturned to normal!");
static const u8 sText_PkmnSubjectedToTorment[] = _("{B_DEF_NAME_WITH_PREFIX} was subjected\nto TORMENT!");
static const u8 sText_PkmnTighteningFocus[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} is tightening\nits focus!");
static const u8 sText_PkmnFellForTaunt[] = _("{B_DEF_NAME_WITH_PREFIX} fell for\nthe Taunt!");
static const u8 sText_PkmnReadyToHelp[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} is ready to\nhelp {B_DEF_NAME_WITH_PREFIX}!");
static const u8 sText_PkmnSwitchedItems[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} switched\nitems with its opponent!");
static const u8 sText_PkmnObtainedX[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} obtained\n{B_BUFF1}.");
static const u8 sText_PkmnObtainedX2[] = _("{B_DEF_NAME_WITH_PREFIX} obtained\n{B_BUFF2}.");
static const u8 sText_PkmnObtainedXYObtainedZ[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} obtained\n{B_BUFF1}.\p{B_DEF_NAME_WITH_PREFIX} obtained\n{B_BUFF2}.");
static const u8 sText_PkmnCopiedFoe[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} copió\n{B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX}!");
static const u8 sText_PkmnMadeWish[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} pidió un Deseo!");
static const u8 sText_PkmnWishCameTrue[] = _("¡El Deseo de {B_BUFF1}\nse cumplió!");
static const u8 sText_PkmnPlantedRoots[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} planted its roots!");
static const u8 sText_PkmnAbsorbedNutrients[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} absorbed\nnutrients with its roots!");
static const u8 sText_PkmnAnchoredItself[] = _("{B_DEF_NAME_WITH_PREFIX} anchored\nitself with its roots!");
static const u8 sText_PkmnWasMadeDrowsy[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} made\n{B_DEF_NAME_WITH_PREFIX} drowsy!");
static const u8 sText_PkmnKnockedOff[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} knocked off\n{B_DEF_NAME_WITH_PREFIX}'s {B_LAST_ITEM}!");
static const u8 sText_PkmnSwappedAbilities[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} swapped abilities\nwith its opponent!");
static const u8 sText_PkmnSealedOpponentMove[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} sealed the\nopponent's move(s)!");
static const u8 sText_PkmnWantsGrudge[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} wants the\nopponent to bear a GRUDGE!");
static const u8 sText_PkmnLostPPGrudge[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s {B_BUFF1} lost\nall its PP due to the GRUDGE!");
static const u8 sText_PkmnShroudedItself[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} shrouded\nitself in {B_CURRENT_MOVE}!");
static const u8 sText_PkmnMoveBounced[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s {B_CURRENT_MOVE}\nwas bounced back by MAGIC COAT!");
static const u8 sText_PkmnWaitsForTarget[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} waits for a target\nto make a move!");
static const u8 sText_PkmnSnatchedMove[] = _("{B_DEF_NAME_WITH_PREFIX} SNATCHED\n{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s move!");
static const u8 sText_ElectricityWeakened[] = _("Electricity's power was\nweakened!");
static const u8 sText_FireWeakened[] = _("Fire's power was\nweakened!");
static const u8 sText_XFoundOneY[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} econtró una\nunidad de {B_LAST_ITEM}!");
static const u8 sText_SoothingAroma[] = _("A soothing aroma wafted\nthrough the area!");
static const u8 sText_ItemsCantBeUsedNow[] = _("No puedes usar objetos ahora.{PAUSE 64}");
static const u8 sText_ForXCommaYZ[] = _("Para {B_SCR_ACTIVE_NAME_WITH_PREFIX},\n{B_LAST_ITEM} {B_BUFF1}");
static const u8 sText_PkmnUsedXToGetPumped[] = _("¡{B_SCR_ACTIVE_NAME_WITH_PREFIX} usó\n{B_LAST_ITEM} para mejorarse!");
static const u8 sText_PkmnLostFocus[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} lost its\nfocus and couldn't move!");
static const u8 sText_PkmnWasDraggedOut[] = _("{B_DEF_NAME_WITH_PREFIX} was\ndragged out!\p");
static const u8 sText_TheWallShattered[] = _("The wall shattered!");
static const u8 sText_ButNoEffect[] = _("But it had no effect!");
static const u8 sText_PkmnHasNoMovesLeft[] = _("{B_ACTIVE_NAME_WITH_PREFIX} has no\nmoves left!\p");
static const u8 sText_PkmnMoveIsDisabled[] = _("{B_ACTIVE_NAME_WITH_PREFIX}'s {B_CURRENT_MOVE}\nis disabled!\p");
static const u8 sText_PkmnCantUseMoveTorment[] = _("{B_ACTIVE_NAME_WITH_PREFIX} can't use the same\nmove in a row due to the Torment!\p");
static const u8 sText_PkmnCantUseMoveTaunt[] = _("{B_ACTIVE_NAME_WITH_PREFIX} can't use\n{B_CURRENT_MOVE} after the Taunt!\p");
static const u8 sText_PkmnCantUseMoveSealed[] = _("{B_ACTIVE_NAME_WITH_PREFIX} can't use the\nsealed {B_CURRENT_MOVE}!\p");
static const u8 sText_PkmnCantUseMoveThroatChop[] = _("{B_ACTIVE_NAME_WITH_PREFIX} can't use\n{B_CURRENT_MOVE} due to Throat Chop!\p");
static const u8 sText_PkmnMadeItRain[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_SCR_ACTIVE_ABILITY}\nmade it rain!");
static const u8 sText_PkmnRaisedSpeed[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_SCR_ACTIVE_ABILITY}\nraised its SPEED!");
static const u8 sText_PkmnProtectedBy[] = _("{B_DEF_NAME_WITH_PREFIX} was protected\nby {B_DEF_ABILITY}!");
static const u8 sText_PkmnPreventsUsage[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY}\nprevents {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}\lfrom using {B_CURRENT_MOVE}!");
static const u8 sText_PkmnRestoredHPUsing[] = _("{B_DEF_NAME_WITH_PREFIX} restored HP\nusing its {B_DEF_ABILITY}!");
static const u8 sText_PkmnsXMadeYUseless[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY}\nmade {B_CURRENT_MOVE} useless!");
static const u8 sText_PkmnChangedTypeWith[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY}\nmade it the {B_BUFF1} type!");
static const u8 sText_PkmnPreventsParalysisWith[] = _("{B_EFF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY}\nprevents paralysis!");
static const u8 sText_PkmnPreventsRomanceWith[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY}\nprevents romance!");
static const u8 sText_PkmnPreventsPoisoningWith[] = _("{B_EFF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY}\nprevents poisoning!");
static const u8 sText_PkmnPreventsConfusionWith[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY}\nprevents confusion!");
static const u8 sText_PkmnRaisedFirePowerWith[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY}\nraised its FIRE power!");
static const u8 sText_PkmnAnchorsItselfWith[] = _("{B_DEF_NAME_WITH_PREFIX} anchors\nitself with {B_DEF_ABILITY}!");
static const u8 sText_PkmnCutsAttackWith[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_SCR_ACTIVE_ABILITY}\ncuts {B_DEF_NAME_WITH_PREFIX}'s ATTACK!");
static const u8 sText_PkmnPreventsStatLossWith[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_SCR_ACTIVE_ABILITY}\nprevents stat loss!");
static const u8 sText_PkmnHurtsWith[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} was hurt by\n{B_DEF_NAME_WITH_PREFIX}'s {B_BUFF1}!");
static const u8 sText_PkmnTraced[] = _("¡{B_SCR_ACTIVE_NAME_WITH_PREFIX} copió\n{B_BUFF2} de {B_BUFF1}!");
static const u8 sText_PkmnsXPreventsBurns[] = _("¡{B_EFF_NAME_WITH_PREFIX} evita la\nquemadura con {B_EFF_ABILITY}!");
static const u8 sText_PkmnsXPreventsFreeze[] = _("¡{B_EFF_NAME_WITH_PREFIX} evita ser\nhelado con {B_EFF_ABILITY}!");
static const u8 sText_FreezeDmg[] = _("¡{B_EFF_NAME_WITH_PREFIX} se\nresiente por estar helado!");
static const u8 sText_PkmnsXBlocksY[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY}\nblocks {B_CURRENT_MOVE}!");
static const u8 sText_PkmnsXBlocksY2[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_SCR_ACTIVE_ABILITY}\nblocks {B_CURRENT_MOVE}!");
static const u8 sText_PkmnsXRestoredHPALittle2[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s {B_ATK_ABILITY}\nrestored its HP a little!");
static const u8 sText_PkmnsXWhippedUpSandstorm[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_SCR_ACTIVE_ABILITY}\nwhipped up a sandstorm!");
static const u8 sText_PkmnsXIntensifiedSun[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_SCR_ACTIVE_ABILITY}\nintensified the sun's rays!");
static const u8 sText_PkmnsXPreventsYLoss[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_SCR_ACTIVE_ABILITY}\nprevents {B_BUFF1} loss!");
static const u8 sText_PkmnsXInfatuatedY[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY}\ninfatuated {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}!");
static const u8 sText_PkmnsXMadeYIneffective[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY}\nmade {B_CURRENT_MOVE} ineffective!");
static const u8 sText_PkmnsXCuredYProblem[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_SCR_ACTIVE_ABILITY}\ncured its {B_BUFF1} problem!");
static const u8 sText_ItSuckedLiquidOoze[] = _("It sucked up the\nLIQUID OOZE!");
static const u8 sText_PkmnTransformed[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} transformed!");
static const u8 sText_PkmnsXTookAttack[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY}\ntook the attack!");
const u8 gText_PkmnsXPreventsSwitching[] = _("{B_BUFF1}'s {B_LAST_ABILITY}\nprevents switching!\p");
static const u8 sText_PreventedFromWorking[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY}\nprevented {B_SCR_ACTIVE_NAME_WITH_PREFIX}'s\l{B_BUFF1} from working!");
static const u8 sText_PkmnsXMadeItIneffective[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_SCR_ACTIVE_ABILITY}\nmade it ineffective!");
static const u8 sText_PkmnsXPreventsFlinching[] = _("{B_EFF_NAME_WITH_PREFIX}'s {B_EFF_ABILITY}\nprevents flinching!");
static const u8 sText_PkmnsXPreventsYsZ[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s {B_ATK_ABILITY}\nprevents {B_DEF_NAME_WITH_PREFIX}'s\l{B_DEF_ABILITY} from working!");
static const u8 sText_PkmnsXCuredItsYProblem[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_SCR_ACTIVE_ABILITY}\ncured its {B_BUFF1} problem!");
static const u8 sText_PkmnsXHadNoEffectOnY[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_SCR_ACTIVE_ABILITY}\nhad no effect on {B_EFF_NAME_WITH_PREFIX}!");
const u8 gText_StatSharply[] = _(" mucho");
const u8 gText_StatRose[] = _("subió");
const u8 sText_StatNOTRose[] = _("!");
static const u8 sText_StatHarshly[] = _("!");
static const u8 sText_StatFell[] = _("bajó");
static const u8 sText_AttackersStatRose[] = _("¡{B_BUFF1} de {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} {B_BUFF2}!\n");
const u8 gText_DefendersStatRose[] = _("¡{B_BUFF1} de {B_DEF_NAME_WITH_PREFIX} \n{B_BUFF2}!");
static const u8 sText_UsingItemTheStatOfPkmnRose[] = _("¡Usando {B_LAST_ITEM}, {B_BUFF1}\nde {B_SCR_ACTIVE_NAME_WITH_PREFIX} {B_BUFF2}!");
static const u8 sText_AttackersStatFell[] = _("¡{B_BUFF1} de {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}\n{B_BUFF2}!");
static const u8 sText_DefendersStatFell[] = _("¡{B_BUFF1} de {B_DEF_NAME_WITH_PREFIX}\n{B_BUFF2}!");
static const u8 sText_StatsWontIncrease2[] = _("¡Las estadísticas de {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}\nno subirán más!");
static const u8 sText_StatsWontDecrease2[] = _("¡Las estadísticas de {B_DEF_NAME_WITH_PREFIX}\nno bajarán más!");
static const u8 sText_CriticalHit[] = _("¡Es un golpe crítico!");
static const u8 sText_OneHitKO[] = _("¡Fue un golpe fulminante!");
static const u8 sText_123Poof[] = _("{PAUSE 32}1, {PAUSE 15}2, y{PAUSE 15}… {PAUSE 15}… {PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}¡Puf!\p");
static const u8 sText_AndEllipsis[] = _("Y…\p");
static const u8 sText_HMMovesCantBeForgotten[] = _("No puedes olvidar\nMOs ahora.\p");
static const u8 sText_NotVeryEffective[] = _("No es muy efectivo…");
static const u8 sText_SuperEffective[] = _("¡Es súperefectivo!");
static const u8 sText_GotAwaySafely[] = _("{PLAY_SE SE_FLEE}¡Escapaste sin problemas!\p");
static const u8 sText_PkmnFledUsingIts[] = _("{PLAY_SE SE_FLEE}¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} escapó\nusando su {B_LAST_ITEM}!\p");
static const u8 sText_PkmnFledUsing[] = _("{PLAY_SE SE_FLEE}¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} escapó\nusando {B_ATK_ABILITY}!\p");
static const u8 sText_WildPkmnFled[] = _("{PLAY_SE SE_FLEE}¡El {B_BUFF1} salvaje se escapó!");
static const u8 sText_PlayerDefeatedLinkTrainer[] = _("¡Derrotaste a\n{B_LINK_OPPONENT1_NAME}!");
static const u8 sText_TwoLinkTrainersDefeated[] = _("¡Derrotaste a {B_LINK_OPPONENT1_NAME}\ny a {B_LINK_OPPONENT2_NAME}!");
static const u8 sText_PlayerLostAgainstLinkTrainer[] = _("Perdiste contra\n{B_LINK_OPPONENT1_NAME}…");
static const u8 sText_PlayerLostToTwo[] = _("Perdiste contra {B_LINK_OPPONENT1_NAME}\ny {B_LINK_OPPONENT2_NAME}…");
static const u8 sText_PlayerBattledToDrawLinkTrainer[] = _("¡Tú y {B_LINK_OPPONENT1_NAME} empataron!");
static const u8 sText_PlayerBattledToDrawVsTwo[] = _("¡Tú, {B_LINK_OPPONENT1_NAME} y\n{B_LINK_OPPONENT2_NAME} empataron!");
static const u8 sText_WildFled[] = _("{PLAY_SE SE_FLEE}¡{B_LINK_OPPONENT1_NAME} se rindió!");
static const u8 sText_TwoWildFled[] = _("{PLAY_SE SE_FLEE}¡{B_LINK_OPPONENT1_NAME} y\n{B_LINK_OPPONENT2_NAME} se rindieron!");
static const u8 sText_NoRunningFromTrainers[] = _("¡No! ¡No puedes escaparte\nde un Entrenador!\p");
static const u8 sText_CantEscape[] = _("¡No conseguiste escapar!\p");
static const u8 sText_DontLeaveBirch[] = _("Profe Birch: ¡NO, NO ME DEJES ASÍ!\p");
static const u8 sText_ButNothingHappened[] = _("¡Pero no pasó nada!");
static const u8 sText_ButItFailed[] = _("¡Pero falló!");
static const u8 sText_ItHurtConfusion[] = _("¡Está tan confundido que\nse golpeó a sí mismo!");
static const u8 sText_MirrorMoveFailed[] = _("¡El Movimiento Espejo falló!");
static const u8 sText_StartedToRain[] = _("¡Emepeó a llover!");
static const u8 sText_DownpourStarted[] = _("¡Se está cayendo el cielo!"); // corresponds to DownpourText in pokegold and pokecrystal and is used by Rain Dance in GSC
static const u8 sText_RainContinues[] = _("Está lloviendo.");
static const u8 sText_DownpourContinues[] = _("Está lloviendo a cántaros."); // unused
static const u8 sText_RainStopped[] = _("¡Dejó de llover!");
static const u8 sText_SandstormBrewed[] = _("¡Una tormenta de arena empezó!");
static const u8 sText_SandstormRages[] = _("La tormenta de arena empeora.");
static const u8 sText_SandstormSubsided[] = _("La tomenta de arena se calmó.");
static const u8 sText_SunlightGotBright[] = _("¡El sol brilla fuerte!");
static const u8 sText_SunlightStrong[] = _("Hay mucho sol.");
static const u8 sText_SunlightFaded[] = _("El sol ya no brilla tan fuerte.");
static const u8 sText_StartedHail[] = _("¡Empezó a granizar!");
static const u8 sText_HailContinues[] = _("Está granizando.");
static const u8 sText_HailStopped[] = _("Ya no cae granizo.");
static const u8 sText_FailedToSpitUp[] = _("¡Pero no pudo Escupir!");
static const u8 sText_FailedToSwallow[] = _("¡Pero nomás tragó aire!");
static const u8 sText_WindBecameHeatWave[] = _("¡El viento es ahora\nuna Onda de Calor!");
static const u8 sText_StatChangesGone[] = _("¡Los cambios en las\ncaracterísticas se revirtieron!");
static const u8 sText_CoinsScattered[] = _("¡Hay monedas desperrigadas!");
static const u8 sText_TooWeakForSubstitute[] = _("¡Estaba muy débil para\ncrear un Sustituto!");
static const u8 sText_SharedPain[] = _("¡Ahora todos comparten su dolor!");
static const u8 sText_BellChimed[] = _("¡Sonó la campanita!");
static const u8 sText_FaintInThree[] = _("¡Los Pokémon que la escucharon\nse desmayarán en tres turnos!");
static const u8 sText_NoPPLeft[] = _("¡No tiene más PP!\p");
static const u8 sText_ButNoPPLeft[] = _("¡Pero no tenía más PP!");
static const u8 sText_PkmnIgnoresAsleep[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} te ignora\nhasta dormido!");
static const u8 sText_PkmnIgnoredOrders[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} ni te escuchó!");
static const u8 sText_PkmnBeganToNap[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se fue a dormir\npara rebelarse!");
static const u8 sText_PkmnLoafing[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se está\nburlando de ti!");
static const u8 sText_PkmnWontObey[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} no te hace\ncaso!");
static const u8 sText_PkmnTurnedAway[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} te hizo caras!");
static const u8 sText_PkmnPretendNotNotice[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se puso a\ncharlar con el rival!");
static const u8 sText_EnemyAboutToSwitchPkmn[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME} va a\nsacar a {B_BUFF2}.\p¿Quieres cambiar tus Pokémon?");
static const u8 sText_PkmnLearnedMove2[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} aprendió\n{B_BUFF1}!");
static const u8 sText_PlayerDefeatedLinkTrainerTrainer1[] = _("¡Derrotaste a\n{B_TRAINER1_CLASS} {B_TRAINER1_NAME}!\p");
static const u8 sText_CreptCloser[] = _("¡{COLOR_PLAYER}{B_PLAYER_NAME}{COLOR WHITE} se acercó a\n{COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1}!");
static const u8 sText_CantGetCloser[] = _("¡{COLOR_PLAYER}{B_PLAYER_NAME}{COLOR WHITE} no puede acercarse más!");
static const u8 sText_PkmnWatchingCarefully[] = _("{COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1} te está\nmirando fijamente.");
static const u8 sText_PkmnCuriousAboutX[] = _("¡{COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1} mira\ncuriosamente el {B_BUFF1}!");
static const u8 sText_PkmnEnthralledByX[] = _("¡{COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1} se encanto con\nel {B_BUFF1}!");
static const u8 sText_PkmnIgnoredX[] = _("¡A {COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1} no le importó\nel {B_BUFF1}!");
static const u8 sText_ThrewPokeblockAtPkmn[] = _("¡{COLOR_PLAYER}{B_PLAYER_NAME}{COLOR WHITE} le tiró un {POKEBLOCK}\nal {COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1}!");
static const u8 sText_OutOfSafariBalls[] = _("{PLAY_SE SE_DING_DONG}RÉFERI: ¡Ya no tienes\nSafari Balls! ¡Game over!\p");
static const u8 sText_OpponentMon1Appeared[] = _("¡Un {COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1} se acercó!\p");
static const u8 sText_WildPkmnAppeared[] = _("¡Un {COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1} salvaje\nte corta el paso!\p");
static const u8 sText_LegendaryPkmnAppeared[] = _("¡WOW! ¡Es un {COLOR 13}{B_OPPONENT_MON1_NAME}{COLOR 1} salvaje!\p");
static const u8 sText_WildPkmnAppearedPause[] = _("¡Un {COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1} salvaje\nte corta el paso!{PAUSE 127}");
static const u8 sText_TwoWildPkmnAppeared[] = _("¡Un {COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1} y un\n{COLOR 11}{B_OPPONENT_MON2_NAME}{COLOR 1} salvajes te cortan el paso!\p");
static const u8 sText_Trainer1WantsToBattle[] = _("¡{B_TRAINER1_CLASS} {B_TRAINER1_NAME}\nquiere luchar!\p");
static const u8 sText_LinkTrainerWantsToBattle[] = _("¡{B_LINK_OPPONENT1_NAME}\nquiere luchar!");
static const u8 sText_TwoLinkTrainersWantToBattle[] = _("¡{B_LINK_OPPONENT1_NAME} y {B_LINK_OPPONENT2_NAME}\nquieren luchar!");
static const u8 sText_Trainer1SentOutPkmn[] = _("¡{B_TRAINER1_CLASS} {B_TRAINER1_NAME} envía\na su {COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1}!");
static const u8 sText_Trainer1SentOutTwoPkmn[] = _("¡{B_TRAINER1_CLASS} {B_TRAINER1_NAME} envía a\nsu {COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1} y a su {COLOR 11}{B_OPPONENT_MON2_NAME}{COLOR 1}!");
static const u8 sText_Trainer1SentOutPkmn2[] = _("¡{B_TRAINER1_CLASS} {B_TRAINER1_NAME} envía\na {B_BUFF1}!");
static const u8 sText_LinkTrainerSentOutPkmn[] = _("{B_LINK_OPPONENT1_NAME} envía a\nsu{COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1}!");
static const u8 sText_LinkTrainerSentOutTwoPkmn[] = _("{B_LINK_OPPONENT1_NAME} envía a\nsu{COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1} and {COLOR 11}{B_OPPONENT_MON2_NAME}{COLOR 1}!");
static const u8 sText_TwoLinkTrainersSentOutPkmn[] = _("¡{B_LINK_OPPONENT1_NAME} envió a {B_LINK_OPPONENT_MON1_NAME}!\n¡Y {B_LINK_OPPONENT2_NAME}, a {B_LINK_OPPONENT_MON2_NAME}!");
static const u8 sText_LinkTrainerSentOutPkmn2[] = _("¡{B_LINK_OPPONENT1_NAME} eligió a\n{B_BUFF1}!");
static const u8 sText_LinkTrainerMultiSentOutPkmn[] = _("¡{B_LINK_SCR_TRAINER_NAME} envía a\n{B_BUFF1}!");
static const u8 sText_GoPkmn[] = _("¡{B_PLAYER_MON1_NAME}, yo te elijo!");
static const u8 sText_GoTwoPkmn[] = _("¡Yo los elijo, {B_PLAYER_MON1_NAME} y\n{B_PLAYER_MON2_NAME}! ¡Ataquen!");
static const u8 sText_GoPkmn2[] = _("¡{B_BUFF1}, al centro y al frente!");
static const u8 sText_DoItPkmn[] = _("¡Creo en tí! ¡{B_BUFF1}, ataca!");
static const u8 sText_GoForItPkmn[] = _("¡Acábale, {B_BUFF1}!");
static const u8 sText_YourFoesWeakGetEmPkmn[] = _("¡El rival está débil!\n¡Yo sé que puedes, {B_BUFF1}!");
static const u8 sText_LinkPartnerSentOutPkmnGoPkmn[] = _("¡{B_LINK_PARTNER_NAME} envió a {B_LINK_PLAYER_MON2_NAME}!\n¡Vamos! ¡{B_LINK_PLAYER_MON1_NAME}!");
static const u8 sText_PkmnThatsEnough[] = _("¡{B_BUFF1}, está bien!\n¡Regresa!");
static const u8 sText_PkmnComeBack[] = _("¡{B_BUFF1}, regresa!");
static const u8 sText_PkmnOkComeBack[] = _("¡No te preocupes, {B_BUFF1}!\n¡Regresa!");
static const u8 sText_PkmnGoodComeBack[] = _("¡{B_BUFF1}, buen trabajo!\n¡Regresa!");
static const u8 sText_Trainer1WithdrewPkmn[] = _("¡{B_TRAINER1_CLASS} {B_TRAINER1_NAME}\nretiró a {B_BUFF1}!");
static const u8 sText_LinkTrainer1WithdrewPkmn[] = _("¡{B_LINK_OPPONENT1_NAME} retiró a\n{B_BUFF1}!");
static const u8 sText_LinkTrainer2WithdrewPkmn[] = _("¡{B_LINK_SCR_TRAINER_NAME} retiró a\n{B_BUFF1}!");
static const u8 sText_WildPkmnPrefix[] = _(" salvaje");
static const u8 sText_FoePkmnPrefix[] = _(" enemigo");
static const u8 sText_EmptyString8[] = _("");
static const u8 sText_FoePkmnPrefix2[] = _(" enemigo");
static const u8 sText_AllyPkmnPrefix[] = _(" aliado");
static const u8 sText_FoePkmnPrefix3[] = _(" enemigo");
static const u8 sText_AllyPkmnPrefix2[] = _(" aliado");
static const u8 sText_FoePkmnPrefix4[] = _(" enemigo");
static const u8 sText_AllyPkmnPrefix3[] = _(" aliado");
static const u8 sText_AttackerUsedX[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} usó\n{COLOR 10}{B_BUFF3}{COLOR 1}!");
static const u8 sText_ExclamationMark[] = _("!");
static const u8 sText_ExclamationMark2[] = _("!");
static const u8 sText_ExclamationMark3[] = _("!");
static const u8 sText_ExclamationMark4[] = _("!");
static const u8 sText_ExclamationMark5[] = _("!");
static const u8 sText_Accuracy[] = _("Presición");
static const u8 sText_Evasiveness[] = _("Evasión");
static const u8 sText_PkmnTookTargetHigh[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} elevó a {COLOR 13}{B_DEF_NAME_WITH_PREFIX}{COLOR 1}\nen el aire!");
static const u8 sText_TargetTooHeavy[] = _("¡Pero pesaba demasiado!");

const u8 * const gStatNamesTable[NUM_BATTLE_STATS] =
{
    gText_HP3, gText_Attack, gText_Defense,
    gText_Speed, gText_SpAtk, gText_SpDef,
    sText_Accuracy, sText_Evasiveness
};

static const u8 sText_PokeblockWasTooSpicy[] = _("was too spicy!");
static const u8 sText_PokeblockWasTooDry[] = _("was too dry!");
static const u8 sText_PokeblockWasTooSweet[] = _("was too sweet!");
static const u8 sText_PokeblockWasTooBitter[] = _("was too bitter!");
static const u8 sText_PokeblockWasTooSour[] = _("was too sour!");

const u8 * const gPokeblockWasTooXStringTable[FLAVOR_COUNT] =
{
    [FLAVOR_SPICY]  = sText_PokeblockWasTooSpicy,
    [FLAVOR_DRY]    = sText_PokeblockWasTooDry,
    [FLAVOR_SWEET]  = sText_PokeblockWasTooSweet,
    [FLAVOR_BITTER] = sText_PokeblockWasTooBitter,
    [FLAVOR_SOUR]   = sText_PokeblockWasTooSour
};

static const u8 sText_PlayerUsedItem[] = _("¡{COLOR_PLAYER}{B_PLAYER_NAME}{COLOR WHITE} usó\n{B_LAST_ITEM}!");
static const u8 sText_WallyUsedItem[] = _("¡Wally usó\n{B_LAST_ITEM}!");
static const u8 sText_Trainer1UsedItem[] = _("¡{B_TRAINER1_CLASS} {B_TRAINER1_NAME}\nusó {B_LAST_ITEM}!");
static const u8 sText_TrainerBlockedBall[] = _("¡El rival bloqueó la Ball!");
static const u8 sText_DontBeAThief[] = _("¡Robar está mal!");
static const u8 sText_ItDodgedBall[] = _("¡Esquivó la Ball!\n¡Este Pokémon no puede ser atrapado!");
static const u8 sText_YouMissedPkmn[] = _("¡No le diste al Pokémon!");
static const u8 sText_PkmnBrokeFree[] = _("¡Rayos!\n¡El Pokémon escapó!");
static const u8 sText_ItAppearedCaught[] = _("¡UGH!\n¡Parecía que sí!");
static const u8 sText_AarghAlmostHadIt[] = _("¡Aargh!\n¡Casi lo tenía!");
static const u8 sText_ShootSoClose[] = _("¡MIEERRRCOLES!\n¡TAN CERCA!");
static const u8 sText_GotchaPkmnCaught[] = _("¡Ajá!\n¡Atrapé a {B_DEF_NAME}!{WAIT_SE}{PLAY_BGM MUS_CAUGHT}\p");
static const u8 sText_GotchaPkmnCaught2[] = _("Ajá!\n¡Atrapé a {B_DEF_NAME}!{WAIT_SE}{PLAY_BGM MUS_CAUGHT}{PAUSE 127}");
static const u8 sText_GiveNicknameCaptured[] = _("¿Darle un apodo\na {B_DEF_NAME}?");
static const u8 sText_PkmnSentToPC[] = _("{B_DEF_NAME} se ha enviado al\nPC de {B_PC_CREATOR_NAME}.");
static const u8 sText_Someones[] = _("alguien");
static const u8 sText_Lanettes[] = _("Lanette");
static const u8 sText_PkmnDataAddedToDex[] = _("¡Los datos de {B_DEF_NAME} serán\nañadidos al Pokédex!\p");
static const u8 sText_ItIsRaining[] = _("Está lloviendo.");
static const u8 sText_SandstormIsRaging[] = _("La tormenta de arena arrecia.");
static const u8 sText_BoxIsFull[] = _("¡El PC se llenó!\n¡No puedes atrapar más Pokémon!\p");
static const u8 sText_EnigmaBerry[] = _("ENIGMA BERRY");
static const u8 sText_BerrySuffix[] = _(" BERRY");
static const u8 sText_PkmnsItemCuredParalysis[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_LAST_ITEM}\ncured paralysis!");
static const u8 sText_PkmnsItemCuredPoison[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_LAST_ITEM}\ncured poison!");
static const u8 sText_PkmnsItemHealedBurn[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_LAST_ITEM}\nhealed its burn!");
static const u8 sText_PkmnsItemDefrostedIt[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_LAST_ITEM}\ndefrosted it!");
static const u8 sText_PkmnsItemWokeIt[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_LAST_ITEM}\nwoke it from its sleep!");
static const u8 sText_PkmnsItemSnappedOut[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_LAST_ITEM}\nsnapped it out of confusion!");
static const u8 sText_PkmnsItemCuredProblem[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_LAST_ITEM}\ncured its {B_BUFF1} problem!");
static const u8 sText_PkmnsItemNormalizedStatus[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_LAST_ITEM}\nnormalized its status!");
static const u8 sText_PkmnsItemRestoredHealth[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_LAST_ITEM}\nrestored health!");
static const u8 sText_PkmnsItemRestoredPP[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_LAST_ITEM}\nrestored {B_BUFF1}'s PP!");
static const u8 sText_PkmnsItemRestoredStatus[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_LAST_ITEM}\nrestored its status!");
static const u8 sText_PkmnsItemRestoredHPALittle[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_LAST_ITEM}\nrestored its HP a little!");
static const u8 sText_ItemAllowsOnlyYMove[] = _("{B_LAST_ITEM} allows the\nuse of only {B_CURRENT_MOVE}!\p");
static const u8 sText_PkmnHungOnWithX[] = _("{B_DEF_NAME_WITH_PREFIX} hung on\nusing its {B_LAST_ITEM}!");
const u8 gText_EmptyString3[] = _("");
static const u8 sText_YouThrowABallNowRight[] = _("You throw a BALL now, right?\nI… I'll do my best!");

// early declaration of strings
static const u8 sText_PkmnIncapableOfPower[];
static const u8 sText_GlintAppearsInEye[];
static const u8 sText_PkmnGettingIntoPosition[];
static const u8 sText_PkmnBeganGrowlingDeeply[];
static const u8 sText_PkmnEagerForMore[];
static const u8 sText_DefeatedOpponentByReferee[];
static const u8 sText_LostToOpponentByReferee[];
static const u8 sText_TiedOpponentByReferee[];
static const u8 sText_QuestionForfeitMatch[];
static const u8 sText_ForfeitedMatch[];
static const u8 sText_Trainer1WinText[];
static const u8 sText_Trainer2WinText[];
static const u8 sText_TwoInGameTrainersDefeated[];
static const u8 sText_Trainer2LoseText[];

// New battle strings.
static const s8 sText_EnduredViaSturdy[] = _("¡{B_DEF_NAME_WITH_PREFIX} aguantó el golpe\ngracias a su {B_DEF_ABILITY}!");
static const s8 sText_PowerHerbActivation[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se cargó totalmente\ngracias a su {B_LAST_ITEM}!");
static const s8 sText_HurtByItem[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} se lastimó\ncon su {B_LAST_ITEM}!");
static const s8 sText_BadlyPoisonedByItem[] = _("¡{B_LAST_ITEM} envenenó\ngravemente a {B_EFF_NAME_WITH_PREFIX}!");
static const s8 sText_BurnedByItem[] = _("{B_LAST_ITEM} quemó\na {B_EFF_NAME_WITH_PREFIX}!");
static const s8 sText_TargetAbilityActivates[] = _("¡{B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX} se activó!");
static const u8 sText_GravityIntensified[] = _("¡Graveda intensificada!");
static const u8 sText_TargetIdentified[] = _("¡{B_DEF_NAME_WITH_PREFIX} identificado!");
static const u8 sText_TargetWokeUp[] = _("¡{B_DEF_NAME_WITH_PREFIX} se despertó!");
static const u8 sText_PkmnStoleAndAteItem[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} robó y\ncomió la {B_LAST_ITEM} de {B_DEF_NAME_WITH_PREFIX}!");
static const u8 sText_TailWindBlew[] = _("¡El Viento Afín cubre el\neqipo de {B_ATK_TEAM2}!");
static const u8 sText_PkmnWentBack[] = _("¡{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} regresó con\n{B_ATK_TRAINER_CLASS} {B_ATK_TRAINER_NAME}");
static const u8 sText_PkmnCantUseItemsAnymore[] = _("¡{B_DEF_NAME_WITH_PREFIX} ya no puede\nnusar objetos!");
static const u8 sText_PkmnFlung[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} flung its\n{B_LAST_ITEM}!");
static const u8 sText_PkmnPreventedFromHealing[] = _("{B_DEF_NAME_WITH_PREFIX} was prevented\nfrom healing!");
static const u8 sText_PkmnSwitchedAtkAndDef[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} switched its\nAttack and Defense!");
static const u8 sText_PkmnsAbilitySuppressed[] = _("{B_DEF_NAME_WITH_PREFIX}'s ability\nwas suppressed!");
static const u8 sText_ShieldedFromCriticalHits[] = _("The {B_CURRENT_MOVE} shielded {B_ATK_TEAM2}\nteam from critical hits!");
static const u8 sText_SwitchedAtkAndSpAtk[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} switched all its\nchanges to its Attack and\pSp. Atk with the target!");
static const u8 sText_SwitchedDefAndSpDef[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} switched all its\nchanges to its Defense and\pSp. Def with the target!");
static const u8 sText_PkmnAcquiredAbility[] = _("{B_DEF_NAME_WITH_PREFIX} acquired\n{B_DEF_ABILITY}!");
static const u8 sText_PoisonSpikesScattered[] = _("Poison Spikes were scattered all\naround the opposing team's feet!");
static const u8 sText_PkmnSwitchedStatChanges[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} switched stat changes\nwith the target!");
static const u8 sText_PkmnSurroundedWithVeilOfWater[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} surrounded itself\nwith a veil of water!");
static const u8 sText_PkmnLevitatedOnElectromagnetism[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} levitated on\nelectromagnetism!");
static const u8 sText_PkmnTwistedDimensions[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} twisted\nthe dimensions!");
static const u8 sText_PointedStonesFloat[] =_("Pointed stones float in the air\naround {B_DEF_TEAM2} team!");
static const u8 sText_CloakedInMysticalMoonlight[] =_("It became cloaked in mystical\nmoonlight!");
static const u8 sText_TrappedBySwirlingMagma[] =_("{B_DEF_NAME_WITH_PREFIX} became\ntrapped by swirling magma!");
static const u8 sText_VanishedInstantly[] =_("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} vanished\ninstantly!");
static const u8 sText_ProtectedTeam[] =_("{B_CURRENT_MOVE} protected\n{B_ATK_TEAM2} team!");
static const u8 sText_SharedItsGuard[] =_("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} shared its\nguard with the target!");
static const u8 sText_SharedItsPower[] =_("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} shared its\npower with the target!");
static const u8 sText_SwapsDefAndSpDefOfAllPkmn[] =_("It created a bizarre area in which the\nDefense and Sp.Def stats are swapped!");
static const u8 sText_BecameNimble[] =_("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} became nimble!");
static const u8 sText_HurledIntoTheAir[] =_("{B_DEF_NAME_WITH_PREFIX} was hurled\ninto the air!");
static const u8 sText_HeldItemsLoseEffects[] =_("It created a bizarre area in which\nPokémon's held items lose their effects!");
static const u8 sText_FellStraightDown[] =_("{B_DEF_NAME_WITH_PREFIX} fell\nstraight down!");
static const u8 sText_TargetChangedType[] =_("{B_DEF_NAME_WITH_PREFIX} transformed\ninto the {B_BUFF1} type!");
static const u8 sText_PkmnAcquiredSimple[] =_("{B_DEF_NAME_WITH_PREFIX} acquired\nSimple!");
static const u8 sText_KindOffer[] =_("{B_DEF_NAME_WITH_PREFIX}\ntook the kind offer!");
static const u8 sText_ResetsTargetsStatLevels[] =_("{B_DEF_NAME_WITH_PREFIX}'s stat changes\nwere removed!");
static const u8 sText_AllySwitchPosition[] =_("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} and\n{B_SCR_ACTIVE_NAME_WITH_PREFIX} switched places!");
static const u8 sText_RestoreTargetsHealth[] =_("{B_DEF_NAME_WITH_PREFIX}'s HP was restored!");
static const u8 sText_TookPkmnIntoTheSky[] =_("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} took\n{B_DEF_NAME_WITH_PREFIX} into the sky!");
static const u8 sText_FreedFromSkyDrop[] =_("{B_DEF_NAME_WITH_PREFIX} was freed\nfrom the Sky Drop!");
static const u8 sText_PostponeTargetMove[] =_("{B_DEF_NAME_WITH_PREFIX}'s move\nwas postponed!");
static const u8 sText_ReflectTargetsType[] =_("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s type\nchanged to match the {B_DEF_NAME_WITH_PREFIX}'s!");
static const u8 sText_TransferHeldItem[] =_("{B_DEF_NAME_WITH_PREFIX} received {B_LAST_ITEM}\nfrom {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}");
static const u8 sText_EmbargoEnds[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} can\nuse items again!");
static const u8 sText_Electromagnetism[] = _("electromagnetism");
static const u8 sText_BufferEnds[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s {B_BUFF1}\nwore off!");
static const u8 sText_ThroatChopEnds[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} can\nuse sound-based moves again!");
static const u8 sText_TelekinesisEnds[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} was freed\nfrom the telekinesis!");
static const u8 sText_TailwindEnds[] = _("{B_ATK_TEAM1} team's tailwind\npetered out!");
static const u8 sText_LuckyChantEnds[] = _("{B_ATK_TEAM1} team's Lucky Chant\nwore off!");
static const u8 sText_TrickRoomEnds[] = _("The twisted dimensions returned to\nnormal!");
static const u8 sText_WonderRoomEnds[] = _("Wonder Room wore off, and Defense\nand Sp. Def stats returned to normal!");
static const u8 sText_MagicRoomEnds[] = _("Magic Room wore off, and held items'\neffects returned to normal!");
static const u8 sText_MudSportEnds[] = _("The effects of Mud Sport have faded.");
static const u8 sText_WaterSportEnds[] = _("The effects of Water Sport have faded.");
static const u8 sText_GravityEnds[] = _("Gravity returned to normal!");
static const u8 sText_AquaRingHeal[] = _("Aqua Ring restored\n{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s HP!");
static const u8 sText_TargetAbilityRaisedStat[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY}\nraised its {B_BUFF1}!");
static const u8 sText_TargetAbilityLoweredStat[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY}\nlowered its {B_BUFF1}!");
static const u8 sText_AttackerAbilityRaisedStat[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s {B_ATK_ABILITY}\nraised its {B_BUFF1}!");
static const u8 sText_ScriptingAbilityRaisedStat[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_SCR_ACTIVE_ABILITY}\nraised its {B_BUFF1}!");
static const u8 sText_AuroraVeilEnds[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY}\nwore off!");
static const u8 sText_ElectricTerrainEnds[] = _("The electricity disappeared\nfrom the battlefield.");
static const u8 sText_MistyTerrainEnds[] = _("The mist disappeared\nfrom the battlefield.");
static const u8 sText_PsychicTerrainEnds[] = _("The weirdness disappeared\nfrom the battlefield.");
static const u8 sText_GrassyTerrainEnds[] = _("The grass disappeared\nfrom the battlefield.");
static const u8 sText_TargetsStatWasMaxedOut[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY} maxed\nits {B_BUFF1}!");
static const u8 sText_PoisonHealHpUp[] = _("The poisoning healed {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}\na little bit!");
static const u8 sText_BadDreamsDmg[] = _("{B_DEF_NAME_WITH_PREFIX} is tormented\nby {B_ATK_ABILITY}!");
static const u8 sText_MoldBreakerEnters[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} breaks the mold!");
static const u8 sText_TeravoltEnters[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} is radiating \na bursting aura!");
static const u8 sText_TurboblazeEnters[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} is radiating\na blazing aura!");
static const u8 sText_SlowStartEnters[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} can't get it going!");
static const u8 sText_SlowStartEnd[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} finally got\nits act together!");
static const u8 sText_SolarPowerHpDrop[] = _("The {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s {B_ATK_ABILITY}\ntakes its toll!");
static const u8 sText_AftermathDmg[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} is hurt!");
static const u8 sText_AnticipationActivates[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} shuddered\nin anticipation!");
static const u8 sText_ForewarnActivates[] = _("{B_SCR_ACTIVE_ABILITY} alerted {B_SCR_ACTIVE_NAME_WITH_PREFIX}\nto the {B_DEF_NAME_WITH_PREFIX}'s {B_BUFF1}!");
static const u8 sText_IceBodyHpGain[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s {B_ATK_ABILITY}\nhealed it a little bit!");
static const u8 sText_SnowWarningHail[] = _("It started to hail!");
static const u8 sText_FriskActivates[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} frisked {B_DEF_NAME_WITH_PREFIX} and\nfound its {B_LAST_ITEM}!");
static const u8 sText_UnnerveEnters[] = _("The opposing team is too nervous\nto eat Berries!");
static const u8 sText_HarvestBerry[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} harvested\nits {B_LAST_ITEM}!");
static const u8 sText_LastAbilityRaisedBuff1[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s {B_LAST_ABILITY}\nraised its {B_BUFF1}!");
static const u8 sText_MagicBounceActivates[] = _("The {B_DEF_NAME_WITH_PREFIX} bounced the\n{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} back!");
static const u8 sText_ProteanTypeChange[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s {B_ATK_ABILITY} transformed\nit into the {B_BUFF1} type!");
static const u8 sText_SymbiosisItemPass[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} passed its {B_LAST_ITEM}\nto {B_SCR_ACTIVE_NAME_WITH_PREFIX} through {B_ATK_ABILITY}!");
static const u8 sText_StealthRockDmg[] = _("Pointed stones dug into\n{B_SCR_ACTIVE_NAME_WITH_PREFIX}!");
static const u8 sText_ToxicSpikesAbsorbed[] = _("The poison spikes disappeared\nfrom around the opposing team's feet!");
static const u8 sText_ToxicSpikesPoisoned[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} was poisoned!");
static const u8 sText_StickyWebSwitchIn[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} was\ncaught in a Sticky Web!");
static const u8 sText_HealingWishCameTrue[] = _("The healing wish came true\nfor {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}!");
static const u8 sText_HealingWishHealed[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} regained health!");
static const u8 sText_LunarDanceCameTrue[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} became cloaked\nin mystical moonlight!");
static const u8 sText_CursedBodyDisabled[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s {B_BUFF1} was disabled\nby {B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY}!");
static const u8 sText_AttackerAquiredAbility[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} acquired {B_LAST_ABILITY}!");
static const u8 sText_TargetStatWontGoHigher[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_BUFF1}\nwon't go higher!");
static const u8 sText_PkmnMoveBouncedViaAbility[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s {B_CURRENT_MOVE} was\nbounced back by {B_DEF_NAME_WITH_PREFIX}'s\l{B_DEF_ABILITY}!");
static const u8 sText_ImposterTransform[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} transformed into\n{B_DEF_NAME_WITH_PREFIX} using {B_LAST_ABILITY}!");
static const u8 sText_NotDoneYet[] = _("This move effect is not done yet!\p");
static const u8 sText_PkmnBlewAwayToxicSpikes[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} blew away\nToxic Spikes!");
static const u8 sText_PkmnBlewAwayStickyWeb[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} blew away\nSticky Web!");
static const u8 sText_PkmnBlewAwayStealthRock[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} blew away\nStealth Rock!");
static const u8 sText_StickyWebUsed[] = _("A sticky web spreads out on the\nground around {B_DEF_TEAM2} team!");
static const u8 sText_QuashSuccess[] = _("The opposing {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s move was postponed!");
static const u8 sText_IonDelugeOn[] = _("A deluge of ions showers\nthe battlefield!");
static const u8 sText_TopsyTurvySwitchedStats[] = _("{B_DEF_NAME_WITH_PREFIX}'s stat changes were\nall reversed!");
static const u8 sText_TerrainBecomesMisty[] = _("Mist swirled about\nthe battlefield!");
static const u8 sText_TerrainBecomesGrassy[] = _("Grass grew to cover\nthe battlefield!");
static const u8 sText_TerrainBecomesElectric[] = _("An electric current runs across\nthe battlefield!");
static const u8 sText_TerrainBecomesPsychic[] = _("The battlefield got weird!");
static const u8 sText_TargetElectrified[] = _("The {B_DEF_NAME_WITH_PREFIX}'s moves\nhave been electrified!");
static const u8 sText_AssaultVestDoesntAllow[] = _("{B_LAST_ITEM}'s effects prevent\nstatus moves from being used!\p");
static const u8 sText_GravityPreventsUsage[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} can't use {B_CURRENT_MOVE}\nbecause of gravity!\p");
static const u8 sText_HealBlockPreventsUsage[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} was\nprevented from healing!\p");
static const u8 sText_MegaEvoReacting[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s {B_LAST_ITEM} is \nreacting to {B_ATK_TRAINER_NAME}'s Mega Ring!");
static const u8 sText_FerventWishReached[] = _("{B_ATK_TRAINER_NAME}'s fervent wish\nhas reached {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}!");
static const u8 sText_MegaEvoEvolved[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} has Mega Evolved into\nMega {B_BUFF1}!");
static const u8 sText_drastically[] = _(" drásticamente");
static const u8 sText_severely[] = _(" severamente");
static const u8 sText_Infestation[] = _("{B_DEF_NAME_WITH_PREFIX} has been afflicted\nwith an infestation by {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}!");
static const u8 sText_NoEffectOnTarget[] = _("It had no effect\non {B_DEF_NAME_WITH_PREFIX}!");
static const u8 sText_BurstingFlames[] = _("The bursting flames\nhit {B_SCR_ACTIVE_NAME_WITH_PREFIX}!");
static const u8 sText_BestowItemGiving[] = _("{B_DEF_NAME_WITH_PREFIX} received {B_LAST_ITEM}\nfrom {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}!");
static const u8 sText_ThirdTypeAdded[] = _("{B_BUFF1} type was added to\n{B_DEF_NAME_WITH_PREFIX}!");
static const u8 sText_FellForFeint[] = _("{B_DEF_NAME_WITH_PREFIX} fell for\nthe feint!");
static const u8 sText_PokemonCannotUseMove[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} cannot\nuse {B_CURRENT_MOVE}!");
static const u8 sText_CoveredInPowder[] = _("{B_DEF_NAME_WITH_PREFIX} is covered in powder!");
static const u8 sText_PowderExplodes[] = _("When the flame touched the powder\non the Pokémon, it exploded!");
static const u8 sText_BelchCantUse[] = _("Belch cannot be used!\p");
static const u8 sText_SpectralThiefSteal[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} stole the target's\nboosted stats!");
static const u8 sText_GravityGrounding[] = _("{B_DEF_NAME_WITH_PREFIX} can't stay airborne\nbecause of gravity!");
static const u8 sText_MistyTerrainPreventsStatus[] = _("{B_DEF_NAME_WITH_PREFIX} surrounds itself\nwith a protective mist!");
static const u8 sText_GrassyTerrainHeals[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} is healed\nby the grassy terrain!");
static const u8 sText_ElectricTerrainPreventsSleep[] = _("{B_DEF_NAME_WITH_PREFIX} surrounds itself\nwith electrified terrain!");
static const u8 sText_PsychicTerrainPreventsPriority[] = _("{B_DEF_NAME_WITH_PREFIX} surrounds itself\nwith psychic terrain!");
static const u8 sText_SafetyGogglesProtected[] = _("{B_DEF_NAME_WITH_PREFIX} is not affected\nthanks to its {B_LAST_ITEM}!");
static const u8 sText_FlowerVeilProtected[] = _("{B_DEF_NAME_WITH_PREFIX} surrounded itself\nwith a veil of petals!");
static const u8 sText_SweetVeilProtected[] = _("{B_DEF_NAME_WITH_PREFIX} surrounded itself\nwith a veil of sweetness!");
static const u8 sText_AromaVeilProtected[] = _("{B_DEF_NAME_WITH_PREFIX} is protected\nby an aromatic veil!");
static const u8 sText_CelebrateMessage[] = _("Congratulations, {COLOR_PLAYER}{B_PLAYER_NAME}{COLOR WHITE}!");
static const u8 sText_UsedInstructedMove[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} used the move\ninstructed by {B_BUFF1}!");
static const u8 sText_LaserFocusMessage[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}\nconcentrated intensely!");
static const u8 sText_GemActivates[] = _("{B_LAST_ITEM} strengthened\n{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s power!");
static const u8 sText_BerryDmgReducing[] = _("{B_LAST_ITEM} weakened the damage\nto {B_DEF_NAME_WITH_PREFIX}!");
static const u8 sText_TargetAteItem[] = _("{B_DEF_NAME_WITH_PREFIX} ate its {B_LAST_ITEM}!");
static const u8 sText_AirBalloonFloat[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} floats in the air\nwith its {B_LAST_ITEM}!");
static const u8 sText_AirBalloonPop[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_LAST_ITEM} popped!");
static const u8 sText_IncinerateBurn[] = _("{B_EFF_NAME_WITH_PREFIX}'s {B_LAST_ITEM}\nwas burnt up!");
static const u8 sText_BugBite[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} stole and ate\n{B_EFF_NAME_WITH_PREFIX}'s {B_LAST_ITEM}!");
static const u8 sText_IllusionWoreOff[] = _("{B_DEF_NAME_WITH_PREFIX}'s Illusion wore off!");
static const u8 sText_AttackerCuredTargetStatus[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} cured\n{B_DEF_NAME_WITH_PREFIX}'s problem!");
static const u8 sText_AttackerLostFireType[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} burned itself out!");
static const u8 sText_HealerCure[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s {B_LAST_ABILITY}\ncured {B_SCR_ACTIVE_NAME_WITH_PREFIX}'s problem!");
static const u8 sText_ReceiverAbilityTakeOver[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_SCR_ACTIVE_ABILITY}\nwas taken over!");
static const u8 sText_PkmnAbsorbingPower[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} is absorbing power!");
static const u8 sText_NoOneWillBeAbleToRun[] = _("No one will be able to run away\nduring the next turn!");
static const u8 sText_DestinyKnotActivates[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} fell in love\nfrom the {B_LAST_ITEM}!");
static const u8 sText_CloakedInAFreezingLight[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} became cloaked\nin a freezing light!");
static const u8 sText_StatWasNotLowered[] = _("{B_DEF_NAME_WITH_PREFIX}'s {B_BUFF1}\nwas not lowered!");
static const u8 sText_AuraFlaredToLife[] = _("{B_DEF_NAME_WITH_PREFIX}'s aura flared to life!");
static const u8 sText_AirLockActivates[] = _("The effects of weather\ndisappeared.");
static const u8 sText_PressureActivates[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} is exerting its\npressure!");
static const u8 sText_DarkAuraActivates[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} is radiating\na dark aura!");
static const u8 sText_FairyAuraActivates[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} is radiating\na fairy aura!");
static const u8 sText_AuraBreakActivates[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} reversed all\nother Pokémon's auras!");
static const u8 sText_ComatoseActivates[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} is drowsing!");
static const u8 sText_ScreenCleanerActivates[] = _("All screens on the field were\ncleansed!");
static const u8 sText_FetchedPokeBall[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} found\na {B_LAST_ITEM}!");
static const u8 sText_BattlerAbilityRaisedStat[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_SCR_ACTIVE_ABILITY}\nraised its {B_BUFF1}!");
static const u8 sText_ASandstormKickedUp[] = _("A sandstorm kicked up!");
static const u8 sText_PkmnsWillPerishIn3Turns[] = _("Both Pokémon will perish\nin three turns!");
static const u8 sText_AbilityRaisedStatDrastically[] = _("{B_DEF_ABILITY} raised {B_DEF_NAME_WITH_PREFIX}'s\n{B_BUFF1} drastically!");
static const u8 sText_AsOneEnters[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} has two Abilities!");
static const u8 sText_CuriousMedicineEnters[] = _("{B_EFF_NAME_WITH_PREFIX}'s\nstat changes were reset!");
static const u8 sText_CanActFaster[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} can act faster,\nthanks to {B_BUFF1}!");
static const u8 sText_MicleBerryActivates[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} boosted the accuracy of its\nnext move using {B_LAST_ITEM}!");
static const u8 sText_PkmnShookOffTheTaunt[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} shook off\nthe taunt!");
static const u8 sText_PkmnGotOverItsInfatuation[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} got over\nits infatuation!");
static const u8 sText_ItemCannotBeRemoved[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s item cannot be removed!");
static const u8 sText_StickyBarbTransfer[] = _("The {B_LAST_ITEM} attached itself to\n{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}!");
static const u8 sText_PkmnBurnHealed[] = _("{B_DEF_NAME_WITH_PREFIX}'s\nburn was healed.");
static const u8 sText_RedCardActivate[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} held up its {B_LAST_ITEM}\nagainst {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}!");
static const u8 sText_EjectButtonActivate[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} is switched\nout with the {B_LAST_ITEM}!");
static const u8 sText_AttackerGotOverInfatuation[] =_("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} got over\nits infatuation!");
static const u8 sText_TormentedNoMore[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} is\ntormented no more!");
static const u8 sText_HealBlockedNoMore[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} is cured of\nits heal block!");
static const u8 sText_AttackerBecameFullyCharged[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} became fully charged\ndue to its bond with its trainer!\p");
static const u8 sText_AttackerBecameAshSpecies[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} became Ash-{B_BUFF1}!\p");
static const u8 sText_ExtremelyHarshSunlight[] = _("The sunlight turned\nextremely harsh!");
static const u8 sText_ExtremeSunlightFaded[] = _("The extreme sunlight faded.{PAUSE 64}");
static const u8 sText_MoveEvaporatedInTheHarshSunlight[] = _("The Water-type attack evaporated\nin the harsh sunlight!");
static const u8 sText_ExtremelyHarshSunlightWasNotLessened[] = _("The extremely harsh sunlight\nwas not lessened at all!");
static const u8 sText_HeavyRain[] = _("A heavy rain began to fall!");
static const u8 sText_HeavyRainLifted[] = _("The heavy rain has lifted!{PAUSE 64}");
static const u8 sText_MoveFizzledOutInTheHeavyRain[] = _("The Fire-type attack fizzled out\nin the heavy rain!");
static const u8 sText_NoReliefFromHeavyRain[] = _("There is no relief from\nthis heavy rain!");
static const u8 sText_MysteriousAirCurrent[] = _("A mysterious air current is\nprotecting Flying-type Pokémon!");
static const u8 sText_StrongWindsDissipated[] = _("The mysterious strong winds\nhave dissipated!{PAUSE 64}");
static const u8 sText_MysteriousAirCurrentBlowsOn[] = _("The mysterious air current\nblows on regardless!");
static const u8 sText_AttackWeakenedByStrongWinds[] = _("The mysterious strong winds\nweakened the attack!");
static const u8 sText_StuffCheeksCantSelect[] = _("Stuff Cheeks cannot be\nselected without a Berry!\p");
static const u8 sText_PkmnRevertedToPrimal[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1}'s Primal Reversion!\nIt reverted to its primal form!");
static const u8 sText_ButPokemonCantUseTheMove[] = _("But {COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} can't\nuse the move!");
static const u8 sText_ButHoopaCantUseIt[] = _("But Hoopa can't use it\nthe way it is now!");
static const u8 sText_BrokeThroughProtection[] = _("It broke through the\n{B_DEF_NAME_WITH_PREFIX}'s protection!");
static const u8 sText_AbilityAllowsOnlyMove[] = _("{B_ATK_ABILITY} allows the\nuse of only {B_CURRENT_MOVE}!\p");
static const u8 sText_SwappedAbilities[] = _("{B_DEF_NAME_WITH_PREFIX} swapped Abilities\nwith its target!");
static const u8 sText_PastelVeilProtected[] = _("{B_DEF_NAME_WITH_PREFIX} is protected\nby a pastel veil!");
static const u8 sText_PastelVeilEnters[] = _("{B_DEF_NAME_WITH_PREFIX} was cured\nof its poisoning!");
static const u8 sText_BattlerTypeChangedTo[] = _("{B_BUFF1}'s type\nchanged to {B_BUFF2}!");
static const u8 sText_BothCanNoLongerEscape[] = _("Neither Pokémon can run away!");
static const u8 sText_CantEscapeDueToUsedMove[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} can no longer escape\nbecause it used {B_CURRENT_MOVE}!");
static const u8 sText_PkmnBecameWeakerToFire[] = _("{B_DEF_NAME_WITH_PREFIX} became\nweaker to fire!");
static const u8 sText_PkmnAboutToBeAttackedByItsItem[] = _("{B_DEF_NAME_WITH_PREFIX} is about\nto be attacked by its {B_BUFF1}!");
static const u8 sText_CantEscapeBecauseOfCurrentMove[] = _("{B_DEF_NAME_WITH_PREFIX} can no longer escape\nbecause of {B_CURRENT_MOVE}!");
static const u8 sText_NeutralizingGasEnters[] = _("Neutralizing Gas filled the area!");
static const u8 sText_NeutralizingGasOver[] = _("The effects of Neutralizing\nGas wore off!");
static const u8 sText_MeteorBeamCharging[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} is overflowing\nwith space energy!");
static const u8 sText_HeatingUpBeak[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} started\nheating up its beak!");
static const u8 sText_CourtChange[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} swapped the battle\neffects affecting each side!");

const u8 *const gBattleStringsTable[BATTLESTRINGS_COUNT] =
{
    [STRINGID_NEUTRALIZINGGASOVER - BATTLESTRINGS_TABLE_START] = sText_NeutralizingGasOver,
    [STRINGID_NEUTRALIZINGGASENTERS - BATTLESTRINGS_TABLE_START] = sText_NeutralizingGasEnters,
    [STRINGID_BATTLERTYPECHANGEDTO - BATTLESTRINGS_TABLE_START] = sText_BattlerTypeChangedTo,
    [STRINGID_PASTELVEILENTERS - BATTLESTRINGS_TABLE_START] = sText_PastelVeilEnters,
    [STRINGID_PASTELVEILPROTECTED -BATTLESTRINGS_TABLE_START] = sText_PastelVeilProtected,
    [STRINGID_SWAPPEDABILITIES - BATTLESTRINGS_TABLE_START] = sText_SwappedAbilities,
    [STRINGID_ABILITYALLOWSONLYMOVE - BATTLESTRINGS_TABLE_START] = sText_AbilityAllowsOnlyMove,
    [STRINGID_BROKETHROUGHPROTECTION - BATTLESTRINGS_TABLE_START] = sText_BrokeThroughProtection,
    [STRINGID_BUTPOKEMONCANTUSETHEMOVE - BATTLESTRINGS_TABLE_START] = sText_ButPokemonCantUseTheMove,
    [STRINGID_BUTHOOPACANTUSEIT - BATTLESTRINGS_TABLE_START] = sText_ButHoopaCantUseIt,
    [STRINGID_PKMNREVERTEDTOPRIMAL - BATTLESTRINGS_TABLE_START] = sText_PkmnRevertedToPrimal,
    [STRINGID_STUFFCHEEKSCANTSELECT - BATTLESTRINGS_TABLE_START] = sText_StuffCheeksCantSelect,
    [STRINGID_ATTACKWEAKENEDBSTRONGWINDS - BATTLESTRINGS_TABLE_START] = sText_AttackWeakenedByStrongWinds,
    [STRINGID_MYSTERIOUSAIRCURRENTBLOWSON - BATTLESTRINGS_TABLE_START] = sText_MysteriousAirCurrentBlowsOn,
    [STRINGID_STRONGWINDSDISSIPATED - BATTLESTRINGS_TABLE_START] = sText_StrongWindsDissipated,
    [STRINGID_MYSTERIOUSAIRCURRENT - BATTLESTRINGS_TABLE_START] = sText_MysteriousAirCurrent,
    [STRINGID_NORELIEFROMHEAVYRAIN - BATTLESTRINGS_TABLE_START] = sText_NoReliefFromHeavyRain,
    [STRINGID_MOVEFIZZLEDOUTINTHEHEAVYRAIN - BATTLESTRINGS_TABLE_START] = sText_MoveFizzledOutInTheHeavyRain,
    [STRINGID_HEAVYRAINLIFTED - BATTLESTRINGS_TABLE_START] = sText_HeavyRainLifted,
    [STRINGID_HEAVYRAIN - BATTLESTRINGS_TABLE_START] = sText_HeavyRain,
    [STRINGID_EXTREMELYHARSHSUNLIGHTWASNOTLESSENED - BATTLESTRINGS_TABLE_START] = sText_ExtremelyHarshSunlightWasNotLessened,
    [STRINGID_MOVEEVAPORATEDINTHEHARSHSUNLIGHT - BATTLESTRINGS_TABLE_START] = sText_MoveEvaporatedInTheHarshSunlight,
    [STRINGID_EXTREMESUNLIGHTFADED - BATTLESTRINGS_TABLE_START] = sText_ExtremeSunlightFaded,
    [STRINGID_EXTREMELYHARSHSUNLIGHT - BATTLESTRINGS_TABLE_START] = sText_ExtremelyHarshSunlight,
    [STRINGID_ATTACKERBECAMEASHSPECIES - BATTLESTRINGS_TABLE_START] = sText_AttackerBecameAshSpecies,
    [STRINGID_ATTACKERBECAMEFULLYCHARGED - BATTLESTRINGS_TABLE_START] = sText_AttackerBecameFullyCharged,
    [STRINGID_HEALBLOCKEDNOMORE - BATTLESTRINGS_TABLE_START] = sText_HealBlockedNoMore,
    [STRINGID_TORMENTEDNOMORE - BATTLESTRINGS_TABLE_START] = sText_TormentedNoMore,
    [STRINGID_ATKGOTOVERINFATUATION - BATTLESTRINGS_TABLE_START] = sText_AttackerGotOverInfatuation,
    [STRINGID_EJECTBUTTONACTIVATE - BATTLESTRINGS_TABLE_START] = sText_EjectButtonActivate,
    [STRINGID_REDCARDACTIVATE - BATTLESTRINGS_TABLE_START] = sText_RedCardActivate,
    [STRINGID_PKMNBURNHEALED - BATTLESTRINGS_TABLE_START] = sText_PkmnBurnHealed,
    [STRINGID_STICKYBARBTRANSFER - BATTLESTRINGS_TABLE_START] = sText_StickyBarbTransfer,
    [STRINGID_ITEMCANNOTBEREMOVED - BATTLESTRINGS_TABLE_START] = sText_ItemCannotBeRemoved,
    [STRINGID_PKMNGOTOVERITSINFATUATION - BATTLESTRINGS_TABLE_START] = sText_PkmnGotOverItsInfatuation,
    [STRINGID_PKMNSHOOKOFFTHETAUNT - BATTLESTRINGS_TABLE_START] = sText_PkmnShookOffTheTaunt,
    [STRINGID_MICLEBERRYACTIVATES - BATTLESTRINGS_TABLE_START] = sText_MicleBerryActivates,
    [STRINGID_CANACTFASTERTHANKSTO - BATTLESTRINGS_TABLE_START] = sText_CanActFaster,
    [STRINGID_CURIOUSMEDICINEENTERS - BATTLESTRINGS_TABLE_START] = sText_CuriousMedicineEnters,
    [STRINGID_ASONEENTERS - BATTLESTRINGS_TABLE_START] = sText_AsOneEnters,
    [STRINGID_ABILITYRAISEDSTATDRASTICALLY - BATTLESTRINGS_TABLE_START] = sText_AbilityRaisedStatDrastically,
    [STRINGID_PKMNSWILLPERISHIN3TURNS - BATTLESTRINGS_TABLE_START] = sText_PkmnsWillPerishIn3Turns,
    [STRINGID_ASANDSTORMKICKEDUP - BATTLESTRINGS_TABLE_START] = sText_ASandstormKickedUp,
    [STRINGID_BATTLERABILITYRAISEDSTAT - BATTLESTRINGS_TABLE_START] = sText_BattlerAbilityRaisedStat,
    [STRINGID_FETCHEDPOKEBALL - BATTLESTRINGS_TABLE_START] = sText_FetchedPokeBall,
    [STRINGID_STATWASNOTLOWERED - BATTLESTRINGS_TABLE_START] = sText_StatWasNotLowered,
    [STRINGID_CLOAKEDINAFREEZINGLIGHT - BATTLESTRINGS_TABLE_START] = sText_CloakedInAFreezingLight,
    [STRINGID_DESTINYKNOTACTIVATES - BATTLESTRINGS_TABLE_START] = sText_DestinyKnotActivates,
    [STRINGID_NOONEWILLBEABLETORUNAWAY - BATTLESTRINGS_TABLE_START] = sText_NoOneWillBeAbleToRun,
    [STRINGID_PKNMABSORBINGPOWER - BATTLESTRINGS_TABLE_START] = sText_PkmnAbsorbingPower,
    [STRINGID_RECEIVERABILITYTAKEOVER - BATTLESTRINGS_TABLE_START] = sText_ReceiverAbilityTakeOver,
    [STRINGID_SCRIPTINGABILITYSTATRAISE - BATTLESTRINGS_TABLE_START] = sText_ScriptingAbilityRaisedStat,
    [STRINGID_HEALERCURE - BATTLESTRINGS_TABLE_START] = sText_HealerCure,
    [STRINGID_ATTACKERLOSTFIRETYPE - BATTLESTRINGS_TABLE_START] = sText_AttackerLostFireType,
    [STRINGID_ATTACKERCUREDTARGETSTATUS - BATTLESTRINGS_TABLE_START] = sText_AttackerCuredTargetStatus,
    [STRINGID_ILLUSIONWOREOFF - BATTLESTRINGS_TABLE_START] = sText_IllusionWoreOff,
    [STRINGID_BUGBITE - BATTLESTRINGS_TABLE_START] = sText_BugBite,
    [STRINGID_INCINERATEBURN - BATTLESTRINGS_TABLE_START] = sText_IncinerateBurn,
    [STRINGID_AIRBALLOONPOP - BATTLESTRINGS_TABLE_START] = sText_AirBalloonPop,
    [STRINGID_AIRBALLOONFLOAT - BATTLESTRINGS_TABLE_START] = sText_AirBalloonFloat,
    [STRINGID_TARGETATEITEM - BATTLESTRINGS_TABLE_START] = sText_TargetAteItem,
    [STRINGID_BERRYDMGREDUCES - BATTLESTRINGS_TABLE_START] = sText_BerryDmgReducing,
    [STRINGID_GEMACTIVATES - BATTLESTRINGS_TABLE_START] = sText_GemActivates,
    [STRINGID_LASERFOCUS - BATTLESTRINGS_TABLE_START] = sText_LaserFocusMessage,
    [STRINGID_THROATCHOPENDS - BATTLESTRINGS_TABLE_START] = sText_ThroatChopEnds,
    [STRINGID_PKMNCANTUSEMOVETHROATCHOP - BATTLESTRINGS_TABLE_START] = sText_PkmnCantUseMoveThroatChop,
    [STRINGID_USEDINSTRUCTEDMOVE - BATTLESTRINGS_TABLE_START] = sText_UsedInstructedMove,
    [STRINGID_CELEBRATEMESSAGE - BATTLESTRINGS_TABLE_START] = sText_CelebrateMessage,
    [STRINGID_AROMAVEILPROTECTED - BATTLESTRINGS_TABLE_START] = sText_AromaVeilProtected,
    [STRINGID_SWEETVEILPROTECTED - BATTLESTRINGS_TABLE_START] = sText_SweetVeilProtected,
    [STRINGID_FLOWERVEILPROTECTED - BATTLESTRINGS_TABLE_START] = sText_FlowerVeilProtected,
    [STRINGID_SAFETYGOGGLESPROTECTED - BATTLESTRINGS_TABLE_START] = sText_SafetyGogglesProtected,
    [STRINGID_SPECTRALTHIEFSTEAL - BATTLESTRINGS_TABLE_START] = sText_SpectralThiefSteal,
    [STRINGID_BELCHCANTSELECT - BATTLESTRINGS_TABLE_START] = sText_BelchCantUse,
    [STRINGID_TRAINER1LOSETEXT - BATTLESTRINGS_TABLE_START] = sText_Trainer1LoseText,
    [STRINGID_PKMNGAINEDEXP - BATTLESTRINGS_TABLE_START] = sText_PkmnGainedEXP,
    [STRINGID_PKMNGREWTOLV - BATTLESTRINGS_TABLE_START] = sText_PkmnGrewToLv,
    [STRINGID_PKMNLEARNEDMOVE - BATTLESTRINGS_TABLE_START] = sText_PkmnLearnedMove,
    [STRINGID_TRYTOLEARNMOVE1 - BATTLESTRINGS_TABLE_START] = sText_TryToLearnMove1,
    [STRINGID_TRYTOLEARNMOVE2 - BATTLESTRINGS_TABLE_START] = sText_TryToLearnMove2,
    [STRINGID_TRYTOLEARNMOVE3 - BATTLESTRINGS_TABLE_START] = sText_TryToLearnMove3,
    [STRINGID_PKMNFORGOTMOVE - BATTLESTRINGS_TABLE_START] = sText_PkmnForgotMove,
    [STRINGID_STOPLEARNINGMOVE - BATTLESTRINGS_TABLE_START] = sText_StopLearningMove,
    [STRINGID_DIDNOTLEARNMOVE - BATTLESTRINGS_TABLE_START] = sText_DidNotLearnMove,
    [STRINGID_PKMNLEARNEDMOVE2 - BATTLESTRINGS_TABLE_START] = sText_PkmnLearnedMove2,
    [STRINGID_ATTACKMISSED - BATTLESTRINGS_TABLE_START] = sText_AttackMissed,
	[STRINGID_123POOF - BATTLESTRINGS_TABLE_START] = sText_123Poof,
    [STRINGID_PKMNPROTECTEDITSELF - BATTLESTRINGS_TABLE_START] = sText_PkmnProtectedItself,
    [STRINGID_STATSWONTINCREASE2 - BATTLESTRINGS_TABLE_START] = sText_StatsWontIncrease2,
    [STRINGID_AVOIDEDDAMAGE - BATTLESTRINGS_TABLE_START] = sText_AvoidedDamage,
    [STRINGID_ITDOESNTAFFECT - BATTLESTRINGS_TABLE_START] = sText_ItDoesntAffect,
    [STRINGID_ATTACKERFAINTED - BATTLESTRINGS_TABLE_START] = sText_AttackerFainted,
    [STRINGID_TARGETFAINTED - BATTLESTRINGS_TABLE_START] = sText_TargetFainted,
    [STRINGID_PLAYERGOTMONEY - BATTLESTRINGS_TABLE_START] = sText_PlayerGotMoney,
    [STRINGID_PLAYERLOSTAGAINSTENEMYTRAINER - BATTLESTRINGS_TABLE_START] = sText_PlayerLostAgainstEnemyTrainer,
    [STRINGID_PLAYERWHITEOUT - BATTLESTRINGS_TABLE_START] = sText_PlayerWhiteout,
    [STRINGID_PLAYERWHITEOUT2 - BATTLESTRINGS_TABLE_START] = sText_PlayerWhiteout2,
    [STRINGID_PREVENTSESCAPE - BATTLESTRINGS_TABLE_START] = sText_PreventsEscape,
    [STRINGID_HITXTIMES - BATTLESTRINGS_TABLE_START] = sText_HitXTimes,
    [STRINGID_PKMNFELLASLEEP - BATTLESTRINGS_TABLE_START] = sText_PkmnFellAsleep,
    [STRINGID_PKMNMADESLEEP - BATTLESTRINGS_TABLE_START] = sText_PkmnMadeSleep,
    [STRINGID_PKMNALREADYASLEEP - BATTLESTRINGS_TABLE_START] = sText_PkmnAlreadyAsleep,
    [STRINGID_PKMNALREADYASLEEP2 - BATTLESTRINGS_TABLE_START] = sText_PkmnAlreadyAsleep2,
    [STRINGID_PKMNWASNTAFFECTED - BATTLESTRINGS_TABLE_START] = sText_PkmnWasntAffected,
    [STRINGID_PKMNWASPOISONED - BATTLESTRINGS_TABLE_START] = sText_PkmnWasPoisoned,
    [STRINGID_PKMNPOISONEDBY - BATTLESTRINGS_TABLE_START] = sText_PkmnPoisonedBy,
    [STRINGID_PKMNHURTBYPOISON - BATTLESTRINGS_TABLE_START] = sText_PkmnHurtByPoison,
    [STRINGID_PKMNALREADYPOISONED - BATTLESTRINGS_TABLE_START] = sText_PkmnAlreadyPoisoned,
    [STRINGID_PKMNBADLYPOISONED - BATTLESTRINGS_TABLE_START] = sText_PkmnBadlyPoisoned,
    [STRINGID_PKMNENERGYDRAINED - BATTLESTRINGS_TABLE_START] = sText_PkmnEnergyDrained,
    [STRINGID_PKMNWASBURNED - BATTLESTRINGS_TABLE_START] = sText_PkmnWasBurned,
    [STRINGID_PKMNBURNEDBY - BATTLESTRINGS_TABLE_START] = sText_PkmnBurnedBy,
    [STRINGID_PKMNHURTBYBURN - BATTLESTRINGS_TABLE_START] = sText_PkmnHurtByBurn,
    [STRINGID_PKMNWASFROZEN - BATTLESTRINGS_TABLE_START] = sText_PkmnWasFrozen,
    [STRINGID_PKMNFROZENBY - BATTLESTRINGS_TABLE_START] = sText_PkmnFrozenBy,
    [STRINGID_PKMNISFROZEN - BATTLESTRINGS_TABLE_START] = sText_PkmnIsFrozen,
    [STRINGID_PKMNWASDEFROSTED - BATTLESTRINGS_TABLE_START] = sText_PkmnWasDefrosted,
    [STRINGID_PKMNWASDEFROSTED2 - BATTLESTRINGS_TABLE_START] = sText_PkmnWasDefrosted2,
    [STRINGID_PKMNWASDEFROSTEDBY - BATTLESTRINGS_TABLE_START] = sText_PkmnWasDefrostedBy,
    [STRINGID_PKMNWASPARALYZED - BATTLESTRINGS_TABLE_START] = sText_PkmnWasParalyzed,
    [STRINGID_PKMNWASPARALYZEDBY - BATTLESTRINGS_TABLE_START] = sText_PkmnWasParalyzedBy,
    [STRINGID_PKMNISPARALYZED - BATTLESTRINGS_TABLE_START] = sText_PkmnIsParalyzed,
    [STRINGID_PKMNISALREADYPARALYZED - BATTLESTRINGS_TABLE_START] = sText_PkmnIsAlreadyParalyzed,
    [STRINGID_PKMNHEALEDPARALYSIS - BATTLESTRINGS_TABLE_START] = sText_PkmnHealedParalysis,
    [STRINGID_PKMNDREAMEATEN - BATTLESTRINGS_TABLE_START] = sText_PkmnDreamEaten,
    [STRINGID_STATSWONTINCREASE - BATTLESTRINGS_TABLE_START] = sText_StatsWontIncrease,
    [STRINGID_STATSWONTDECREASE - BATTLESTRINGS_TABLE_START] = sText_StatsWontDecrease,
    [STRINGID_TEAMSTOPPEDWORKING - BATTLESTRINGS_TABLE_START] = sText_TeamStoppedWorking,
    [STRINGID_FOESTOPPEDWORKING - BATTLESTRINGS_TABLE_START] = sText_FoeStoppedWorking,
    [STRINGID_PKMNISCONFUSED - BATTLESTRINGS_TABLE_START] = sText_PkmnIsConfused,
    [STRINGID_PKMNHEALEDCONFUSION - BATTLESTRINGS_TABLE_START] = sText_PkmnHealedConfusion,
    [STRINGID_PKMNWASCONFUSED - BATTLESTRINGS_TABLE_START] = sText_PkmnWasConfused,
    [STRINGID_PKMNALREADYCONFUSED - BATTLESTRINGS_TABLE_START] = sText_PkmnAlreadyConfused,
    [STRINGID_PKMNFELLINLOVE - BATTLESTRINGS_TABLE_START] = sText_PkmnFellInLove,
    [STRINGID_PKMNINLOVE - BATTLESTRINGS_TABLE_START] = sText_PkmnInLove,
    [STRINGID_PKMNIMMOBILIZEDBYLOVE - BATTLESTRINGS_TABLE_START] = sText_PkmnImmobilizedByLove,
    [STRINGID_PKMNBLOWNAWAY - BATTLESTRINGS_TABLE_START] = sText_PkmnBlownAway,
    [STRINGID_PKMNCHANGEDTYPE - BATTLESTRINGS_TABLE_START] = sText_PkmnChangedType,
    [STRINGID_PKMNFLINCHED - BATTLESTRINGS_TABLE_START] = sText_PkmnFlinched,
    [STRINGID_PKMNREGAINEDHEALTH - BATTLESTRINGS_TABLE_START] = sText_PkmnRegainedHealth,
    [STRINGID_PKMNHPFULL - BATTLESTRINGS_TABLE_START] = sText_PkmnHPFull,
    [STRINGID_PKMNRAISEDSPDEF - BATTLESTRINGS_TABLE_START] = sText_PkmnRaisedSpDef,
    [STRINGID_PKMNRAISEDDEF - BATTLESTRINGS_TABLE_START] = sText_PkmnRaisedDef,
    [STRINGID_PKMNCOVEREDBYVEIL - BATTLESTRINGS_TABLE_START] = sText_PkmnCoveredByVeil,
    [STRINGID_PKMNUSEDSAFEGUARD - BATTLESTRINGS_TABLE_START] = sText_PkmnUsedSafeguard,
    [STRINGID_PKMNSAFEGUARDEXPIRED - BATTLESTRINGS_TABLE_START] = sText_PkmnSafeguardExpired,
    [STRINGID_PKMNWENTTOSLEEP - BATTLESTRINGS_TABLE_START] = sText_PkmnWentToSleep,
    [STRINGID_PKMNSLEPTHEALTHY - BATTLESTRINGS_TABLE_START] = sText_PkmnSleptHealthy,
    [STRINGID_PKMNWHIPPEDWHIRLWIND - BATTLESTRINGS_TABLE_START] = sText_PkmnWhippedWhirlwind,
    [STRINGID_PKMNTOOKSUNLIGHT - BATTLESTRINGS_TABLE_START] = sText_PkmnTookSunlight,
    [STRINGID_PKMNLOWEREDHEAD - BATTLESTRINGS_TABLE_START] = sText_PkmnLoweredHead,
    [STRINGID_PKMNISGLOWING - BATTLESTRINGS_TABLE_START] = sText_PkmnIsGlowing,
    [STRINGID_PKMNFLEWHIGH - BATTLESTRINGS_TABLE_START] = sText_PkmnFlewHigh,
    [STRINGID_PKMNDUGHOLE - BATTLESTRINGS_TABLE_START] = sText_PkmnDugHole,
    [STRINGID_PKMNSQUEEZEDBYBIND - BATTLESTRINGS_TABLE_START] = sText_PkmnSqueezedByBind,
    [STRINGID_PKMNTRAPPEDINVORTEX - BATTLESTRINGS_TABLE_START] = sText_PkmnTrappedInVortex,
    [STRINGID_PKMNWRAPPEDBY - BATTLESTRINGS_TABLE_START] = sText_PkmnWrappedBy,
    [STRINGID_PKMNCLAMPED - BATTLESTRINGS_TABLE_START] = sText_PkmnClamped,
    [STRINGID_PKMNHURTBY - BATTLESTRINGS_TABLE_START] = sText_PkmnHurtBy,
    [STRINGID_PKMNFREEDFROM - BATTLESTRINGS_TABLE_START] = sText_PkmnFreedFrom,
    [STRINGID_PKMNCRASHED - BATTLESTRINGS_TABLE_START] = sText_PkmnCrashed,
    [STRINGID_PKMNSHROUDEDINMIST - BATTLESTRINGS_TABLE_START] = gText_PkmnShroudedInMist,
    [STRINGID_PKMNPROTECTEDBYMIST - BATTLESTRINGS_TABLE_START] = sText_PkmnProtectedByMist,
    [STRINGID_PKMNGETTINGPUMPED - BATTLESTRINGS_TABLE_START] = gText_PkmnGettingPumped,
    [STRINGID_PKMNHITWITHRECOIL - BATTLESTRINGS_TABLE_START] = sText_PkmnHitWithRecoil,
    [STRINGID_PKMNPROTECTEDITSELF2 - BATTLESTRINGS_TABLE_START] = sText_PkmnProtectedItself2,
    [STRINGID_PKMNBUFFETEDBYSANDSTORM - BATTLESTRINGS_TABLE_START] = sText_PkmnBuffetedBySandstorm,
    [STRINGID_PKMNPELTEDBYHAIL - BATTLESTRINGS_TABLE_START] = sText_PkmnPeltedByHail,
    [STRINGID_PKMNSEEDED - BATTLESTRINGS_TABLE_START] = sText_PkmnSeeded,
    [STRINGID_PKMNEVADEDATTACK - BATTLESTRINGS_TABLE_START] = sText_PkmnEvadedAttack,
    [STRINGID_PKMNSAPPEDBYLEECHSEED - BATTLESTRINGS_TABLE_START] = sText_PkmnSappedByLeechSeed,
    [STRINGID_PKMNFASTASLEEP - BATTLESTRINGS_TABLE_START] = sText_PkmnFastAsleep,
    [STRINGID_PKMNWOKEUP - BATTLESTRINGS_TABLE_START] = sText_PkmnWokeUp,
    [STRINGID_PKMNUPROARKEPTAWAKE - BATTLESTRINGS_TABLE_START] = sText_PkmnUproarKeptAwake,
    [STRINGID_PKMNWOKEUPINUPROAR - BATTLESTRINGS_TABLE_START] = sText_PkmnWokeUpInUproar,
    [STRINGID_PKMNCAUSEDUPROAR - BATTLESTRINGS_TABLE_START] = sText_PkmnCausedUproar,
    [STRINGID_PKMNMAKINGUPROAR - BATTLESTRINGS_TABLE_START] = sText_PkmnMakingUproar,
    [STRINGID_PKMNCALMEDDOWN - BATTLESTRINGS_TABLE_START] = sText_PkmnCalmedDown,
    [STRINGID_PKMNCANTSLEEPINUPROAR - BATTLESTRINGS_TABLE_START] = sText_PkmnCantSleepInUproar,
    [STRINGID_PKMNSTOCKPILED - BATTLESTRINGS_TABLE_START] = sText_PkmnStockpiled,
    [STRINGID_PKMNCANTSTOCKPILE - BATTLESTRINGS_TABLE_START] = sText_PkmnCantStockpile,
    [STRINGID_PKMNCANTSLEEPINUPROAR2 - BATTLESTRINGS_TABLE_START] = sText_PkmnCantSleepInUproar2,
    [STRINGID_UPROARKEPTPKMNAWAKE - BATTLESTRINGS_TABLE_START] = sText_UproarKeptPkmnAwake,
    [STRINGID_PKMNSTAYEDAWAKEUSING - BATTLESTRINGS_TABLE_START] = sText_PkmnStayedAwakeUsing,
    [STRINGID_PKMNSTORINGENERGY - BATTLESTRINGS_TABLE_START] = sText_PkmnStoringEnergy,
    [STRINGID_PKMNUNLEASHEDENERGY - BATTLESTRINGS_TABLE_START] = sText_PkmnUnleashedEnergy,
    [STRINGID_PKMNFATIGUECONFUSION - BATTLESTRINGS_TABLE_START] = sText_PkmnFatigueConfusion,
    [STRINGID_PLAYERPICKEDUPMONEY - BATTLESTRINGS_TABLE_START] = sText_PlayerPickedUpMoney,
    [STRINGID_PKMNUNAFFECTED - BATTLESTRINGS_TABLE_START] = sText_PkmnUnaffected,
    [STRINGID_PKMNTRANSFORMEDINTO - BATTLESTRINGS_TABLE_START] = sText_PkmnTransformedInto,
    [STRINGID_PKMNMADESUBSTITUTE - BATTLESTRINGS_TABLE_START] = sText_PkmnMadeSubstitute,
    [STRINGID_PKMNHASSUBSTITUTE - BATTLESTRINGS_TABLE_START] = sText_PkmnHasSubstitute,
    [STRINGID_SUBSTITUTEDAMAGED - BATTLESTRINGS_TABLE_START] = sText_SubstituteDamaged,
    [STRINGID_PKMNSUBSTITUTEFADED - BATTLESTRINGS_TABLE_START] = sText_PkmnSubstituteFaded,
    [STRINGID_PKMNMUSTRECHARGE - BATTLESTRINGS_TABLE_START] = sText_PkmnMustRecharge,
    [STRINGID_PKMNRAGEBUILDING - BATTLESTRINGS_TABLE_START] = sText_PkmnRageBuilding,
    [STRINGID_PKMNMOVEWASDISABLED - BATTLESTRINGS_TABLE_START] = sText_PkmnMoveWasDisabled,
    [STRINGID_PKMNMOVEISDISABLED - BATTLESTRINGS_TABLE_START] = sText_PkmnMoveIsDisabled,
    [STRINGID_PKMNMOVEDISABLEDNOMORE - BATTLESTRINGS_TABLE_START] = sText_PkmnMoveDisabledNoMore,
    [STRINGID_PKMNGOTENCORE - BATTLESTRINGS_TABLE_START] = sText_PkmnGotEncore,
    [STRINGID_PKMNENCOREENDED - BATTLESTRINGS_TABLE_START] = sText_PkmnEncoreEnded,
    [STRINGID_PKMNTOOKAIM - BATTLESTRINGS_TABLE_START] = sText_PkmnTookAim,
    [STRINGID_PKMNSKETCHEDMOVE - BATTLESTRINGS_TABLE_START] = sText_PkmnSketchedMove,
    [STRINGID_PKMNTRYINGTOTAKEFOE - BATTLESTRINGS_TABLE_START] = sText_PkmnTryingToTakeFoe,
    [STRINGID_PKMNTOOKFOE - BATTLESTRINGS_TABLE_START] = sText_PkmnTookFoe,
    [STRINGID_PKMNREDUCEDPP - BATTLESTRINGS_TABLE_START] = sText_PkmnReducedPP,
    [STRINGID_PKMNSTOLEITEM - BATTLESTRINGS_TABLE_START] = sText_PkmnStoleItem,
    [STRINGID_TARGETCANTESCAPENOW - BATTLESTRINGS_TABLE_START] = sText_TargetCantEscapeNow,
    [STRINGID_PKMNFELLINTONIGHTMARE - BATTLESTRINGS_TABLE_START] = sText_PkmnFellIntoNightmare,
    [STRINGID_PKMNLOCKEDINNIGHTMARE - BATTLESTRINGS_TABLE_START] = sText_PkmnLockedInNightmare,
    [STRINGID_PKMNLAIDCURSE - BATTLESTRINGS_TABLE_START] = sText_PkmnLaidCurse,
    [STRINGID_PKMNAFFLICTEDBYCURSE - BATTLESTRINGS_TABLE_START] = sText_PkmnAfflictedByCurse,
    [STRINGID_SPIKESSCATTERED - BATTLESTRINGS_TABLE_START] = sText_SpikesScattered,
    [STRINGID_PKMNHURTBYSPIKES - BATTLESTRINGS_TABLE_START] = sText_PkmnHurtBySpikes,
    [STRINGID_PKMNIDENTIFIED - BATTLESTRINGS_TABLE_START] = sText_PkmnIdentified,
    [STRINGID_PKMNPERISHCOUNTFELL - BATTLESTRINGS_TABLE_START] = sText_PkmnPerishCountFell,
    [STRINGID_PKMNBRACEDITSELF - BATTLESTRINGS_TABLE_START] = sText_PkmnBracedItself,
    [STRINGID_PKMNENDUREDHIT - BATTLESTRINGS_TABLE_START] = sText_PkmnEnduredHit,
    [STRINGID_MAGNITUDESTRENGTH - BATTLESTRINGS_TABLE_START] = sText_MagnitudeStrength,
    [STRINGID_PKMNCUTHPMAXEDATTACK - BATTLESTRINGS_TABLE_START] = sText_PkmnCutHPMaxedAttack,
    [STRINGID_PKMNCOPIEDSTATCHANGES - BATTLESTRINGS_TABLE_START] = sText_PkmnCopiedStatChanges,
    [STRINGID_PKMNGOTFREE - BATTLESTRINGS_TABLE_START] = sText_PkmnGotFree,
    [STRINGID_PKMNSHEDLEECHSEED - BATTLESTRINGS_TABLE_START] = sText_PkmnShedLeechSeed,
    [STRINGID_PKMNBLEWAWAYSPIKES - BATTLESTRINGS_TABLE_START] = sText_PkmnBlewAwaySpikes,
    [STRINGID_PKMNFLEDFROMBATTLE - BATTLESTRINGS_TABLE_START] = sText_PkmnFledFromBattle,
    [STRINGID_PKMNFORESAWATTACK - BATTLESTRINGS_TABLE_START] = sText_PkmnForesawAttack,
    [STRINGID_PKMNTOOKATTACK - BATTLESTRINGS_TABLE_START] = sText_PkmnTookAttack,
    [STRINGID_PKMNATTACK - BATTLESTRINGS_TABLE_START] = sText_PkmnAttack,
    [STRINGID_PKMNCENTERATTENTION - BATTLESTRINGS_TABLE_START] = sText_PkmnCenterAttention,
    [STRINGID_PKMNCHARGINGPOWER - BATTLESTRINGS_TABLE_START] = sText_PkmnChargingPower,
    [STRINGID_NATUREPOWERTURNEDINTO - BATTLESTRINGS_TABLE_START] = sText_NaturePowerTurnedInto,
    [STRINGID_PKMNSTATUSNORMAL - BATTLESTRINGS_TABLE_START] = sText_PkmnStatusNormal,
    [STRINGID_PKMNHASNOMOVESLEFT - BATTLESTRINGS_TABLE_START] = sText_PkmnHasNoMovesLeft,
    [STRINGID_PKMNSUBJECTEDTOTORMENT - BATTLESTRINGS_TABLE_START] = sText_PkmnSubjectedToTorment,
    [STRINGID_PKMNCANTUSEMOVETORMENT - BATTLESTRINGS_TABLE_START] = sText_PkmnCantUseMoveTorment,
    [STRINGID_PKMNTIGHTENINGFOCUS - BATTLESTRINGS_TABLE_START] = sText_PkmnTighteningFocus,
    [STRINGID_PKMNFELLFORTAUNT - BATTLESTRINGS_TABLE_START] = sText_PkmnFellForTaunt,
    [STRINGID_PKMNCANTUSEMOVETAUNT - BATTLESTRINGS_TABLE_START] = sText_PkmnCantUseMoveTaunt,
    [STRINGID_PKMNREADYTOHELP - BATTLESTRINGS_TABLE_START] = sText_PkmnReadyToHelp,
    [STRINGID_PKMNSWITCHEDITEMS - BATTLESTRINGS_TABLE_START] = sText_PkmnSwitchedItems,
    [STRINGID_PKMNCOPIEDFOE - BATTLESTRINGS_TABLE_START] = sText_PkmnCopiedFoe,
    [STRINGID_PKMNMADEWISH - BATTLESTRINGS_TABLE_START] = sText_PkmnMadeWish,
    [STRINGID_PKMNWISHCAMETRUE - BATTLESTRINGS_TABLE_START] = sText_PkmnWishCameTrue,
    [STRINGID_PKMNPLANTEDROOTS - BATTLESTRINGS_TABLE_START] = sText_PkmnPlantedRoots,
    [STRINGID_PKMNABSORBEDNUTRIENTS - BATTLESTRINGS_TABLE_START] = sText_PkmnAbsorbedNutrients,
    [STRINGID_PKMNANCHOREDITSELF - BATTLESTRINGS_TABLE_START] = sText_PkmnAnchoredItself,
    [STRINGID_PKMNWASMADEDROWSY - BATTLESTRINGS_TABLE_START] = sText_PkmnWasMadeDrowsy,
    [STRINGID_PKMNKNOCKEDOFF - BATTLESTRINGS_TABLE_START] = sText_PkmnKnockedOff,
    [STRINGID_PKMNSWAPPEDABILITIES - BATTLESTRINGS_TABLE_START] = sText_PkmnSwappedAbilities,
    [STRINGID_PKMNSEALEDOPPONENTMOVE - BATTLESTRINGS_TABLE_START] = sText_PkmnSealedOpponentMove,
    [STRINGID_PKMNCANTUSEMOVESEALED - BATTLESTRINGS_TABLE_START] = sText_PkmnCantUseMoveSealed,
    [STRINGID_PKMNWANTSGRUDGE - BATTLESTRINGS_TABLE_START] = sText_PkmnWantsGrudge,
    [STRINGID_PKMNLOSTPPGRUDGE - BATTLESTRINGS_TABLE_START] = sText_PkmnLostPPGrudge,
    [STRINGID_PKMNSHROUDEDITSELF - BATTLESTRINGS_TABLE_START] = sText_PkmnShroudedItself,
    [STRINGID_PKMNMOVEBOUNCED - BATTLESTRINGS_TABLE_START] = sText_PkmnMoveBounced,
    [STRINGID_PKMNWAITSFORTARGET - BATTLESTRINGS_TABLE_START] = sText_PkmnWaitsForTarget,
    [STRINGID_PKMNSNATCHEDMOVE - BATTLESTRINGS_TABLE_START] = sText_PkmnSnatchedMove,
    [STRINGID_PKMNMADEITRAIN - BATTLESTRINGS_TABLE_START] = sText_PkmnMadeItRain,
    [STRINGID_PKMNRAISEDSPEED - BATTLESTRINGS_TABLE_START] = sText_PkmnRaisedSpeed,
    [STRINGID_PKMNPROTECTEDBY - BATTLESTRINGS_TABLE_START] = sText_PkmnProtectedBy,
    [STRINGID_PKMNPREVENTSUSAGE - BATTLESTRINGS_TABLE_START] = sText_PkmnPreventsUsage,
    [STRINGID_PKMNRESTOREDHPUSING - BATTLESTRINGS_TABLE_START] = sText_PkmnRestoredHPUsing,
    [STRINGID_PKMNCHANGEDTYPEWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnChangedTypeWith,
    [STRINGID_PKMNPREVENTSPARALYSISWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnPreventsParalysisWith,
    [STRINGID_PKMNPREVENTSROMANCEWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnPreventsRomanceWith,
    [STRINGID_PKMNPREVENTSPOISONINGWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnPreventsPoisoningWith,
    [STRINGID_PKMNPREVENTSCONFUSIONWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnPreventsConfusionWith,
    [STRINGID_PKMNRAISEDFIREPOWERWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnRaisedFirePowerWith,
    [STRINGID_PKMNANCHORSITSELFWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnAnchorsItselfWith,
    [STRINGID_PKMNCUTSATTACKWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnCutsAttackWith,
    [STRINGID_PKMNPREVENTSSTATLOSSWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnPreventsStatLossWith,
    [STRINGID_PKMNHURTSWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnHurtsWith,
    [STRINGID_PKMNTRACED - BATTLESTRINGS_TABLE_START] = sText_PkmnTraced,
    [STRINGID_STATSHARPLY - BATTLESTRINGS_TABLE_START] = gText_StatSharply,
    [STRINGID_STATROSE - BATTLESTRINGS_TABLE_START] = gText_StatRose,
    [STRINGID_STATNOTROSE - BATTLESTRINGS_TABLE_START] = sText_StatNOTRose,
    [STRINGID_STATHARSHLY - BATTLESTRINGS_TABLE_START] = sText_StatHarshly,
    [STRINGID_STATFELL - BATTLESTRINGS_TABLE_START] = sText_StatFell,
    [STRINGID_ATTACKERSSTATROSE - BATTLESTRINGS_TABLE_START] = sText_AttackersStatRose,
    [STRINGID_DEFENDERSSTATROSE - BATTLESTRINGS_TABLE_START] = gText_DefendersStatRose,
    [STRINGID_ATTACKERSSTATFELL - BATTLESTRINGS_TABLE_START] = sText_AttackersStatFell,
    [STRINGID_DEFENDERSSTATFELL - BATTLESTRINGS_TABLE_START] = sText_DefendersStatFell,
    [STRINGID_CRITICALHIT - BATTLESTRINGS_TABLE_START] = sText_CriticalHit,
    [STRINGID_ONEHITKO - BATTLESTRINGS_TABLE_START] = sText_OneHitKO,
    // [STRINGID_BATTLESTRINGS_TABLE_START3POOF - BATTLESTRINGS_TABLE_START] = sText_BATTLESTRINGS_TABLE_START3Poof,
    [STRINGID_ANDELLIPSIS - BATTLESTRINGS_TABLE_START] = sText_AndEllipsis,
    [STRINGID_NOTVERYEFFECTIVE - BATTLESTRINGS_TABLE_START] = sText_NotVeryEffective,
    [STRINGID_SUPEREFFECTIVE - BATTLESTRINGS_TABLE_START] = sText_SuperEffective,
    [STRINGID_GOTAWAYSAFELY - BATTLESTRINGS_TABLE_START] = sText_GotAwaySafely,
    [STRINGID_WILDPKMNFLED - BATTLESTRINGS_TABLE_START] = sText_WildPkmnFled,
    [STRINGID_NORUNNINGFROMTRAINERS - BATTLESTRINGS_TABLE_START] = sText_NoRunningFromTrainers,
    [STRINGID_CANTESCAPE - BATTLESTRINGS_TABLE_START] = sText_CantEscape,
    [STRINGID_DONTLEAVEBIRCH - BATTLESTRINGS_TABLE_START] = sText_DontLeaveBirch,
    [STRINGID_BUTNOTHINGHAPPENED - BATTLESTRINGS_TABLE_START] = sText_ButNothingHappened,
    [STRINGID_BUTITFAILED - BATTLESTRINGS_TABLE_START] = sText_ButItFailed,
    [STRINGID_ITHURTCONFUSION - BATTLESTRINGS_TABLE_START] = sText_ItHurtConfusion,
    [STRINGID_MIRRORMOVEFAILED - BATTLESTRINGS_TABLE_START] = sText_MirrorMoveFailed,
    [STRINGID_STARTEDTORAIN - BATTLESTRINGS_TABLE_START] = sText_StartedToRain,
    [STRINGID_DOWNPOURSTARTED - BATTLESTRINGS_TABLE_START] = sText_DownpourStarted,
    [STRINGID_RAINCONTINUES - BATTLESTRINGS_TABLE_START] = sText_RainContinues,
    [STRINGID_DOWNPOURCONTINUES - BATTLESTRINGS_TABLE_START] = sText_DownpourContinues,
    [STRINGID_RAINSTOPPED - BATTLESTRINGS_TABLE_START] = sText_RainStopped,
    [STRINGID_SANDSTORMBREWED - BATTLESTRINGS_TABLE_START] = sText_SandstormBrewed,
    [STRINGID_SANDSTORMRAGES - BATTLESTRINGS_TABLE_START] = sText_SandstormRages,
    [STRINGID_SANDSTORMSUBSIDED - BATTLESTRINGS_TABLE_START] = sText_SandstormSubsided,
    [STRINGID_SUNLIGHTGOTBRIGHT - BATTLESTRINGS_TABLE_START] = sText_SunlightGotBright,
    [STRINGID_SUNLIGHTSTRONG - BATTLESTRINGS_TABLE_START] = sText_SunlightStrong,
    [STRINGID_SUNLIGHTFADED - BATTLESTRINGS_TABLE_START] = sText_SunlightFaded,
    [STRINGID_STARTEDHAIL - BATTLESTRINGS_TABLE_START] = sText_StartedHail,
    [STRINGID_HAILCONTINUES - BATTLESTRINGS_TABLE_START] = sText_HailContinues,
    [STRINGID_HAILSTOPPED - BATTLESTRINGS_TABLE_START] = sText_HailStopped,
    [STRINGID_FAILEDTOSPITUP - BATTLESTRINGS_TABLE_START] = sText_FailedToSpitUp,
    [STRINGID_FAILEDTOSWALLOW - BATTLESTRINGS_TABLE_START] = sText_FailedToSwallow,
    [STRINGID_WINDBECAMEHEATWAVE - BATTLESTRINGS_TABLE_START] = sText_WindBecameHeatWave,
    [STRINGID_STATCHANGESGONE - BATTLESTRINGS_TABLE_START] = sText_StatChangesGone,
    [STRINGID_COINSSCATTERED - BATTLESTRINGS_TABLE_START] = sText_CoinsScattered,
    [STRINGID_TOOWEAKFORSUBSTITUTE - BATTLESTRINGS_TABLE_START] = sText_TooWeakForSubstitute,
    [STRINGID_SHAREDPAIN - BATTLESTRINGS_TABLE_START] = sText_SharedPain,
    [STRINGID_BELLCHIMED - BATTLESTRINGS_TABLE_START] = sText_BellChimed,
    [STRINGID_FAINTINTHREE - BATTLESTRINGS_TABLE_START] = sText_FaintInThree,
    [STRINGID_NOPPLEFT - BATTLESTRINGS_TABLE_START] = sText_NoPPLeft,
    [STRINGID_BUTNOPPLEFT - BATTLESTRINGS_TABLE_START] = sText_ButNoPPLeft,
    [STRINGID_PLAYERUSEDITEM - BATTLESTRINGS_TABLE_START] = sText_PlayerUsedItem,
    [STRINGID_WALLYUSEDITEM - BATTLESTRINGS_TABLE_START] = sText_WallyUsedItem,
    [STRINGID_TRAINERBLOCKEDBALL - BATTLESTRINGS_TABLE_START] = sText_TrainerBlockedBall,
    [STRINGID_DONTBEATHIEF - BATTLESTRINGS_TABLE_START] = sText_DontBeAThief,
    [STRINGID_ITDODGEDBALL - BATTLESTRINGS_TABLE_START] = sText_ItDodgedBall,
    [STRINGID_YOUMISSEDPKMN - BATTLESTRINGS_TABLE_START] = sText_YouMissedPkmn,
    [STRINGID_PKMNBROKEFREE - BATTLESTRINGS_TABLE_START] = sText_PkmnBrokeFree,
    [STRINGID_ITAPPEAREDCAUGHT - BATTLESTRINGS_TABLE_START] = sText_ItAppearedCaught,
    [STRINGID_AARGHALMOSTHADIT - BATTLESTRINGS_TABLE_START] = sText_AarghAlmostHadIt,
    [STRINGID_SHOOTSOCLOSE - BATTLESTRINGS_TABLE_START] = sText_ShootSoClose,
    [STRINGID_GOTCHAPKMNCAUGHT - BATTLESTRINGS_TABLE_START] = sText_GotchaPkmnCaught,
    [STRINGID_GOTCHAPKMNCAUGHT2 - BATTLESTRINGS_TABLE_START] = sText_GotchaPkmnCaught2,
    [STRINGID_GIVENICKNAMECAPTURED - BATTLESTRINGS_TABLE_START] = sText_GiveNicknameCaptured,
    [STRINGID_PKMNSENTTOPC - BATTLESTRINGS_TABLE_START] = sText_PkmnSentToPC,
    [STRINGID_PKMNDATAADDEDTODEX - BATTLESTRINGS_TABLE_START] = sText_PkmnDataAddedToDex,
    [STRINGID_ITISRAINING - BATTLESTRINGS_TABLE_START] = sText_ItIsRaining,
    [STRINGID_SANDSTORMISRAGING - BATTLESTRINGS_TABLE_START] = sText_SandstormIsRaging,
    [STRINGID_CANTESCAPE2 - BATTLESTRINGS_TABLE_START] = sText_CantEscape2,
    [STRINGID_PKMNIGNORESASLEEP - BATTLESTRINGS_TABLE_START] = sText_PkmnIgnoresAsleep,
    [STRINGID_PKMNIGNOREDORDERS - BATTLESTRINGS_TABLE_START] = sText_PkmnIgnoredOrders,
    [STRINGID_PKMNBEGANTONAP - BATTLESTRINGS_TABLE_START] = sText_PkmnBeganToNap,
    [STRINGID_PKMNLOAFING - BATTLESTRINGS_TABLE_START] = sText_PkmnLoafing,
    [STRINGID_PKMNWONTOBEY - BATTLESTRINGS_TABLE_START] = sText_PkmnWontObey,
    [STRINGID_PKMNTURNEDAWAY - BATTLESTRINGS_TABLE_START] = sText_PkmnTurnedAway,
    [STRINGID_PKMNPRETENDNOTNOTICE - BATTLESTRINGS_TABLE_START] = sText_PkmnPretendNotNotice,
    [STRINGID_ENEMYABOUTTOSWITCHPKMN - BATTLESTRINGS_TABLE_START] = sText_EnemyAboutToSwitchPkmn,
    [STRINGID_CREPTCLOSER - BATTLESTRINGS_TABLE_START] = sText_CreptCloser,
    [STRINGID_CANTGETCLOSER - BATTLESTRINGS_TABLE_START] = sText_CantGetCloser,
    [STRINGID_PKMNWATCHINGCAREFULLY - BATTLESTRINGS_TABLE_START] = sText_PkmnWatchingCarefully,
    [STRINGID_PKMNCURIOUSABOUTX - BATTLESTRINGS_TABLE_START] = sText_PkmnCuriousAboutX,
    [STRINGID_PKMNENTHRALLEDBYX - BATTLESTRINGS_TABLE_START] = sText_PkmnEnthralledByX,
    [STRINGID_PKMNIGNOREDX - BATTLESTRINGS_TABLE_START] = sText_PkmnIgnoredX,
    [STRINGID_THREWPOKEBLOCKATPKMN - BATTLESTRINGS_TABLE_START] = sText_ThrewPokeblockAtPkmn,
    [STRINGID_OUTOFSAFARIBALLS - BATTLESTRINGS_TABLE_START] = sText_OutOfSafariBalls,
    [STRINGID_PKMNSITEMCUREDPARALYSIS - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemCuredParalysis,
    [STRINGID_PKMNSITEMCUREDPOISON - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemCuredPoison,
    [STRINGID_PKMNSITEMHEALEDBURN - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemHealedBurn,
    [STRINGID_PKMNSITEMDEFROSTEDIT - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemDefrostedIt,
    [STRINGID_PKMNSITEMWOKEIT - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemWokeIt,
    [STRINGID_PKMNSITEMSNAPPEDOUT - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemSnappedOut,
    [STRINGID_PKMNSITEMCUREDPROBLEM - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemCuredProblem,
    [STRINGID_PKMNSITEMRESTOREDHEALTH - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemRestoredHealth,
    [STRINGID_PKMNSITEMRESTOREDPP - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemRestoredPP,
    [STRINGID_PKMNSITEMRESTOREDSTATUS - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemRestoredStatus,
    [STRINGID_PKMNSITEMRESTOREDHPALITTLE - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemRestoredHPALittle,
    [STRINGID_ITEMALLOWSONLYYMOVE - BATTLESTRINGS_TABLE_START] = sText_ItemAllowsOnlyYMove,
    [STRINGID_PKMNHUNGONWITHX - BATTLESTRINGS_TABLE_START] = sText_PkmnHungOnWithX,
	[STRINGID_PKMNSITEMREVIVED - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemRevived,
    [STRINGID_EMPTYSTRING3 - BATTLESTRINGS_TABLE_START] = gText_EmptyString3,
    [STRINGID_PKMNSXPREVENTSBURNS - BATTLESTRINGS_TABLE_START] = sText_PkmnsXPreventsBurns,
    [STRINGID_PKMNSXBLOCKSY - BATTLESTRINGS_TABLE_START] = sText_PkmnsXBlocksY,
    [STRINGID_PKMNSXRESTOREDHPALITTLE2 - BATTLESTRINGS_TABLE_START] = sText_PkmnsXRestoredHPALittle2,
    [STRINGID_PKMNSXWHIPPEDUPSANDSTORM - BATTLESTRINGS_TABLE_START] = sText_PkmnsXWhippedUpSandstorm,
    [STRINGID_PKMNSXPREVENTSYLOSS - BATTLESTRINGS_TABLE_START] = sText_PkmnsXPreventsYLoss,
    [STRINGID_PKMNSXINFATUATEDY - BATTLESTRINGS_TABLE_START] = sText_PkmnsXInfatuatedY,
    [STRINGID_PKMNSXMADEYINEFFECTIVE - BATTLESTRINGS_TABLE_START] = sText_PkmnsXMadeYIneffective,
    [STRINGID_PKMNSXCUREDYPROBLEM - BATTLESTRINGS_TABLE_START] = sText_PkmnsXCuredYProblem,
    [STRINGID_ITSUCKEDLIQUIDOOZE - BATTLESTRINGS_TABLE_START] = sText_ItSuckedLiquidOoze,
    [STRINGID_PKMNTRANSFORMED - BATTLESTRINGS_TABLE_START] = sText_PkmnTransformed,
    [STRINGID_ELECTRICITYWEAKENED - BATTLESTRINGS_TABLE_START] = sText_ElectricityWeakened,
    [STRINGID_FIREWEAKENED - BATTLESTRINGS_TABLE_START] = sText_FireWeakened,
    [STRINGID_PKMNHIDUNDERWATER - BATTLESTRINGS_TABLE_START] = sText_PkmnHidUnderwater,
    [STRINGID_PKMNSPRANGUP - BATTLESTRINGS_TABLE_START] = sText_PkmnSprangUp,
    [STRINGID_HMMOVESCANTBEFORGOTTEN - BATTLESTRINGS_TABLE_START] = sText_HMMovesCantBeForgotten,
    [STRINGID_XFOUNDONEY - BATTLESTRINGS_TABLE_START] = sText_XFoundOneY,
    [STRINGID_PLAYERDEFEATEDTRAINER1 - BATTLESTRINGS_TABLE_START] = sText_PlayerDefeatedLinkTrainerTrainer1,
    [STRINGID_SOOTHINGAROMA - BATTLESTRINGS_TABLE_START] = sText_SoothingAroma,
    [STRINGID_ITEMSCANTBEUSEDNOW - BATTLESTRINGS_TABLE_START] = sText_ItemsCantBeUsedNow,
    [STRINGID_FORXCOMMAYZ - BATTLESTRINGS_TABLE_START] = sText_ForXCommaYZ,
    [STRINGID_USINGITEMSTATOFPKMNROSE - BATTLESTRINGS_TABLE_START] = sText_UsingItemTheStatOfPkmnRose,
    [STRINGID_PKMNUSEDXTOGETPUMPED - BATTLESTRINGS_TABLE_START] = sText_PkmnUsedXToGetPumped,
    [STRINGID_PKMNSXMADEYUSELESS - BATTLESTRINGS_TABLE_START] = sText_PkmnsXMadeYUseless,
    [STRINGID_PKMNTRAPPEDBYSANDTOMB - BATTLESTRINGS_TABLE_START] = sText_PkmnTrappedBySandTomb,
    [STRINGID_EMPTYSTRING4 - BATTLESTRINGS_TABLE_START] = sText_EmptyString4,
    [STRINGID_ABOOSTED - BATTLESTRINGS_TABLE_START] = sText_ABoosted,
    [STRINGID_PKMNSXINTENSIFIEDSUN - BATTLESTRINGS_TABLE_START] = sText_PkmnsXIntensifiedSun,
    [STRINGID_PKMNMAKESGROUNDMISS - BATTLESTRINGS_TABLE_START] = sText_PkmnMakesGroundMiss,
    [STRINGID_YOUTHROWABALLNOWRIGHT - BATTLESTRINGS_TABLE_START] = sText_YouThrowABallNowRight,
    [STRINGID_PKMNSXTOOKATTACK - BATTLESTRINGS_TABLE_START] = sText_PkmnsXTookAttack,
    [STRINGID_PKMNCHOSEXASDESTINY - BATTLESTRINGS_TABLE_START] = sText_PkmnChoseXAsDestiny,
    [STRINGID_PKMNLOSTFOCUS - BATTLESTRINGS_TABLE_START] = sText_PkmnLostFocus,
    [STRINGID_USENEXTPKMN - BATTLESTRINGS_TABLE_START] = sText_UseNextPkmn,
    [STRINGID_PKMNFLEDUSINGITS - BATTLESTRINGS_TABLE_START] = sText_PkmnFledUsingIts,
    [STRINGID_PKMNFLEDUSING - BATTLESTRINGS_TABLE_START] = sText_PkmnFledUsing,
    [STRINGID_PKMNWASDRAGGEDOUT - BATTLESTRINGS_TABLE_START] = sText_PkmnWasDraggedOut,
    [STRINGID_PREVENTEDFROMWORKING - BATTLESTRINGS_TABLE_START] = sText_PreventedFromWorking,
    [STRINGID_PKMNSITEMNORMALIZEDSTATUS - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemNormalizedStatus,
    [STRINGID_TRAINER1USEDITEM - BATTLESTRINGS_TABLE_START] = sText_Trainer1UsedItem,
    [STRINGID_BOXISFULL - BATTLESTRINGS_TABLE_START] = sText_BoxIsFull,
    [STRINGID_PKMNAVOIDEDATTACK - BATTLESTRINGS_TABLE_START] = sText_PkmnAvoidedAttack,
    [STRINGID_PKMNSXMADEITINEFFECTIVE - BATTLESTRINGS_TABLE_START] = sText_PkmnsXMadeItIneffective,
    [STRINGID_PKMNSXPREVENTSFLINCHING - BATTLESTRINGS_TABLE_START] = sText_PkmnsXPreventsFlinching,
    [STRINGID_PKMNALREADYHASBURN - BATTLESTRINGS_TABLE_START] = sText_PkmnAlreadyHasBurn,
    [STRINGID_STATSWONTDECREASE2 - BATTLESTRINGS_TABLE_START] = sText_StatsWontDecrease2,
    [STRINGID_PKMNSXBLOCKSY2 - BATTLESTRINGS_TABLE_START] = sText_PkmnsXBlocksY2,
    [STRINGID_PKMNSXWOREOFF - BATTLESTRINGS_TABLE_START] = sText_PkmnsXWoreOff,
    [STRINGID_PKMNRAISEDDEFALITTLE - BATTLESTRINGS_TABLE_START] = sText_PkmnRaisedDefALittle,
    [STRINGID_PKMNRAISEDSPDEFALITTLE - BATTLESTRINGS_TABLE_START] = sText_PkmnRaisedSpDefALittle,
    [STRINGID_THEWALLSHATTERED - BATTLESTRINGS_TABLE_START] = sText_TheWallShattered,
    [STRINGID_PKMNSXPREVENTSYSZ - BATTLESTRINGS_TABLE_START] = sText_PkmnsXPreventsYsZ,
    [STRINGID_PKMNSXCUREDITSYPROBLEM - BATTLESTRINGS_TABLE_START] = sText_PkmnsXCuredItsYProblem,
    [STRINGID_ATTACKERCANTESCAPE - BATTLESTRINGS_TABLE_START] = sText_AttackerCantEscape,
    [STRINGID_PKMNOBTAINEDX - BATTLESTRINGS_TABLE_START] = sText_PkmnObtainedX,
    [STRINGID_PKMNOBTAINEDX2 - BATTLESTRINGS_TABLE_START] = sText_PkmnObtainedX2,
    [STRINGID_PKMNOBTAINEDXYOBTAINEDZ - BATTLESTRINGS_TABLE_START] = sText_PkmnObtainedXYObtainedZ,
    [STRINGID_BUTNOEFFECT - BATTLESTRINGS_TABLE_START] = sText_ButNoEffect,
    [STRINGID_PKMNSXHADNOEFFECTONY - BATTLESTRINGS_TABLE_START] = sText_PkmnsXHadNoEffectOnY,
    [STRINGID_TWOENEMIESDEFEATED - BATTLESTRINGS_TABLE_START] = sText_TwoInGameTrainersDefeated,
    [STRINGID_TRAINER2LOSETEXT - BATTLESTRINGS_TABLE_START] = sText_Trainer2LoseText,
    [STRINGID_PKMNINCAPABLEOFPOWER - BATTLESTRINGS_TABLE_START] = sText_PkmnIncapableOfPower,
    [STRINGID_GLINTAPPEARSINEYE - BATTLESTRINGS_TABLE_START] = sText_GlintAppearsInEye,
    [STRINGID_PKMNGETTINGINTOPOSITION - BATTLESTRINGS_TABLE_START] = sText_PkmnGettingIntoPosition,
    [STRINGID_PKMNBEGANGROWLINGDEEPLY - BATTLESTRINGS_TABLE_START] = sText_PkmnBeganGrowlingDeeply,
    [STRINGID_PKMNEAGERFORMORE - BATTLESTRINGS_TABLE_START] = sText_PkmnEagerForMore,
    [STRINGID_DEFEATEDOPPONENTBYREFEREE - BATTLESTRINGS_TABLE_START] = sText_DefeatedOpponentByReferee,
    [STRINGID_LOSTTOOPPONENTBYREFEREE - BATTLESTRINGS_TABLE_START] = sText_LostToOpponentByReferee,
    [STRINGID_TIEDOPPONENTBYREFEREE - BATTLESTRINGS_TABLE_START] = sText_TiedOpponentByReferee,
    [STRINGID_QUESTIONFORFEITMATCH - BATTLESTRINGS_TABLE_START] = sText_QuestionForfeitMatch,
    [STRINGID_FORFEITEDMATCH - BATTLESTRINGS_TABLE_START] = sText_ForfeitedMatch,
    [STRINGID_PKMNTRANSFERREDSOMEONESPC - BATTLESTRINGS_TABLE_START] = gText_PkmnTransferredSomeonesPC,
    [STRINGID_PKMNTRANSFERREDLANETTESPC - BATTLESTRINGS_TABLE_START] = gText_PkmnTransferredLanettesPC,
    [STRINGID_PKMNBOXSOMEONESPCFULL - BATTLESTRINGS_TABLE_START] = gText_PkmnTransferredSomeonesPCBoxFull,
    [STRINGID_PKMNBOXLANETTESPCFULL - BATTLESTRINGS_TABLE_START] = gText_PkmnTransferredLanettesPCBoxFull,
    [STRINGID_TRAINER1WINTEXT - BATTLESTRINGS_TABLE_START] = sText_Trainer1WinText,
    [STRINGID_TRAINER2WINTEXT - BATTLESTRINGS_TABLE_START] = sText_Trainer2WinText,
    [STRINGID_ENDUREDSTURDY - BATTLESTRINGS_TABLE_START] = sText_EnduredViaSturdy,
    [STRINGID_POWERHERB - BATTLESTRINGS_TABLE_START] = sText_PowerHerbActivation,
    [STRINGID_HURTBYITEM - BATTLESTRINGS_TABLE_START] = sText_HurtByItem,
    [STRINGID_PSNBYITEM - BATTLESTRINGS_TABLE_START] = sText_BadlyPoisonedByItem,
    [STRINGID_BRNBYITEM - BATTLESTRINGS_TABLE_START] = sText_BurnedByItem,
    [STRINGID_DEFABILITYIN - BATTLESTRINGS_TABLE_START] = sText_TargetAbilityActivates,
    [STRINGID_GRAVITYINTENSIFIED - BATTLESTRINGS_TABLE_START] = sText_GravityIntensified,
    [STRINGID_TARGETIDENTIFIED - BATTLESTRINGS_TABLE_START] = sText_TargetIdentified,
    [STRINGID_TARGETWOKEUP - BATTLESTRINGS_TABLE_START] = sText_TargetWokeUp,
    [STRINGID_PKMNSTOLEANDATEITEM - BATTLESTRINGS_TABLE_START] = sText_PkmnStoleAndAteItem,
    [STRINGID_TAILWINDBLEW - BATTLESTRINGS_TABLE_START] = sText_TailWindBlew,
    [STRINGID_PKMNWENTBACK - BATTLESTRINGS_TABLE_START] = sText_PkmnWentBack,
    [STRINGID_PKMNCANTUSEITEMSANYMORE - BATTLESTRINGS_TABLE_START] = sText_PkmnCantUseItemsAnymore,
    [STRINGID_PKMNFLUNG - BATTLESTRINGS_TABLE_START] = sText_PkmnFlung,
    [STRINGID_PKMNPREVENTEDFROMHEALING - BATTLESTRINGS_TABLE_START] = sText_PkmnPreventedFromHealing,
    [STRINGID_PKMNSWITCHEDATKANDDEF - BATTLESTRINGS_TABLE_START] = sText_PkmnSwitchedAtkAndDef,
    [STRINGID_PKMNSABILITYSUPPRESSED - BATTLESTRINGS_TABLE_START] = sText_PkmnsAbilitySuppressed,
    [STRINGID_SHIELDEDFROMCRITICALHITS - BATTLESTRINGS_TABLE_START] = sText_ShieldedFromCriticalHits,
    [STRINGID_SWITCHEDATKANDSPATK - BATTLESTRINGS_TABLE_START] = sText_SwitchedAtkAndSpAtk,
    [STRINGID_SWITCHEDDEFANDSPDEF - BATTLESTRINGS_TABLE_START] = sText_SwitchedDefAndSpDef,
    [STRINGID_PKMNACQUIREDABILITY - BATTLESTRINGS_TABLE_START] = sText_PkmnAcquiredAbility,
    [STRINGID_POISONSPIKESSCATTERED - BATTLESTRINGS_TABLE_START] = sText_PoisonSpikesScattered,
    [STRINGID_PKMNSWITCHEDSTATCHANGES - BATTLESTRINGS_TABLE_START] = sText_PkmnSwitchedStatChanges,
    [STRINGID_PKMNSURROUNDEDWITHVEILOFWATER - BATTLESTRINGS_TABLE_START] = sText_PkmnSurroundedWithVeilOfWater,
    [STRINGID_PKMNLEVITATEDONELECTROMAGNETISM - BATTLESTRINGS_TABLE_START] = sText_PkmnLevitatedOnElectromagnetism,
    [STRINGID_PKMNTWISTEDDIMENSIONS - BATTLESTRINGS_TABLE_START] = sText_PkmnTwistedDimensions,
    [STRINGID_POINTEDSTONESFLOAT - BATTLESTRINGS_TABLE_START] = sText_PointedStonesFloat,
    [STRINGID_CLOAKEDINMYSTICALMOONLIGHT - BATTLESTRINGS_TABLE_START] = sText_CloakedInMysticalMoonlight,
    [STRINGID_TRAPPEDBYSWIRLINGMAGMA - BATTLESTRINGS_TABLE_START] = sText_TrappedBySwirlingMagma,
    [STRINGID_VANISHEDINSTANTLY - BATTLESTRINGS_TABLE_START] = sText_VanishedInstantly,
    [STRINGID_PROTECTEDTEAM - BATTLESTRINGS_TABLE_START] = sText_ProtectedTeam,
    [STRINGID_SHAREDITSGUARD - BATTLESTRINGS_TABLE_START] = sText_SharedItsGuard,
    [STRINGID_SHAREDITSPOWER - BATTLESTRINGS_TABLE_START] = sText_SharedItsPower,
    [STRINGID_SWAPSDEFANDSPDEFOFALLPOKEMON - BATTLESTRINGS_TABLE_START] = sText_SwapsDefAndSpDefOfAllPkmn,
    [STRINGID_BECAMENIMBLE - BATTLESTRINGS_TABLE_START] = sText_BecameNimble,
    [STRINGID_HURLEDINTOTHEAIR - BATTLESTRINGS_TABLE_START] = sText_HurledIntoTheAir,
    [STRINGID_HELDITEMSLOSEEFFECTS - BATTLESTRINGS_TABLE_START] = sText_HeldItemsLoseEffects,
    [STRINGID_FELLSTRAIGHTDOWN - BATTLESTRINGS_TABLE_START] = sText_FellStraightDown,
    [STRINGID_TARGETCHANGEDTYPE  - BATTLESTRINGS_TABLE_START] = sText_TargetChangedType,
    [STRINGID_PKMNACQUIREDSIMPLE - BATTLESTRINGS_TABLE_START] = sText_PkmnAcquiredSimple,
    [STRINGID_EMPTYSTRING5 - BATTLESTRINGS_TABLE_START] = sText_EmptyString4,
    [STRINGID_KINDOFFER - BATTLESTRINGS_TABLE_START] = sText_KindOffer,
    [STRINGID_RESETSTARGETSSTATLEVELS - BATTLESTRINGS_TABLE_START] = sText_ResetsTargetsStatLevels,
    [STRINGID_EMPTYSTRING6 - BATTLESTRINGS_TABLE_START] = sText_EmptyString4,
    [STRINGID_ALLYSWITCHPOSITION - BATTLESTRINGS_TABLE_START] = sText_AllySwitchPosition,
    [STRINGID_RESTORETARGETSHEALTH - BATTLESTRINGS_TABLE_START] = sText_RestoreTargetsHealth,
    [STRINGID_TOOKPJMNINTOTHESKY - BATTLESTRINGS_TABLE_START] = sText_TookPkmnIntoTheSky,
    [STRINGID_FREEDFROMSKYDROP - BATTLESTRINGS_TABLE_START] = sText_FreedFromSkyDrop,
    [STRINGID_POSTPONETARGETMOVE - BATTLESTRINGS_TABLE_START] = sText_PostponeTargetMove,
    [STRINGID_REFLECTTARGETSTYPE - BATTLESTRINGS_TABLE_START] = sText_ReflectTargetsType,
    [STRINGID_TRANSFERHELDITEM - BATTLESTRINGS_TABLE_START] = sText_TransferHeldItem,
    [STRINGID_EMBARGOENDS - BATTLESTRINGS_TABLE_START] = sText_EmbargoEnds,
    [STRINGID_ELECTROMAGNETISM - BATTLESTRINGS_TABLE_START] = sText_Electromagnetism,
    [STRINGID_BUFFERENDS - BATTLESTRINGS_TABLE_START] = sText_BufferEnds,
    [STRINGID_TELEKINESISENDS - BATTLESTRINGS_TABLE_START] = sText_TelekinesisEnds,
    [STRINGID_TAILWINDENDS - BATTLESTRINGS_TABLE_START] = sText_TailwindEnds,
    [STRINGID_LUCKYCHANTENDS - BATTLESTRINGS_TABLE_START] = sText_LuckyChantEnds,
    [STRINGID_TRICKROOMENDS - BATTLESTRINGS_TABLE_START] = sText_TrickRoomEnds,
    [STRINGID_WONDERROOMENDS - BATTLESTRINGS_TABLE_START] = sText_WonderRoomEnds,
    [STRINGID_MAGICROOMENDS - BATTLESTRINGS_TABLE_START] = sText_MagicRoomEnds,
    [STRINGID_MUDSPORTENDS - BATTLESTRINGS_TABLE_START] = sText_MudSportEnds,
    [STRINGID_WATERSPORTENDS - BATTLESTRINGS_TABLE_START] = sText_WaterSportEnds,
    [STRINGID_GRAVITYENDS - BATTLESTRINGS_TABLE_START] = sText_GravityEnds,
    [STRINGID_AQUARINGHEAL - BATTLESTRINGS_TABLE_START] = sText_AquaRingHeal,
    [STRINGID_AURORAVEILENDS - BATTLESTRINGS_TABLE_START] = sText_AuroraVeilEnds,
    [STRINGID_ELECTRICTERRAINENDS - BATTLESTRINGS_TABLE_START] = sText_ElectricTerrainEnds,
    [STRINGID_MISTYTERRAINENDS - BATTLESTRINGS_TABLE_START] = sText_MistyTerrainEnds,
    [STRINGID_PSYCHICTERRAINENDS - BATTLESTRINGS_TABLE_START] = sText_PsychicTerrainEnds,
    [STRINGID_GRASSYTERRAINENDS - BATTLESTRINGS_TABLE_START] = sText_GrassyTerrainEnds,
    [STRINGID_TARGETABILITYSTATRAISE - BATTLESTRINGS_TABLE_START] = sText_TargetAbilityRaisedStat,
    [STRINGID_TARGETSSTATWASMAXEDOUT - BATTLESTRINGS_TABLE_START] = sText_TargetsStatWasMaxedOut,
    [STRINGID_ATTACKERABILITYSTATRAISE - BATTLESTRINGS_TABLE_START] = sText_AttackerAbilityRaisedStat,
    [STRINGID_POISONHEALHPUP - BATTLESTRINGS_TABLE_START] = sText_PoisonHealHpUp,
    [STRINGID_BADDREAMSDMG - BATTLESTRINGS_TABLE_START] = sText_BadDreamsDmg,
    [STRINGID_MOLDBREAKERENTERS - BATTLESTRINGS_TABLE_START] = sText_MoldBreakerEnters,
    [STRINGID_TERAVOLTENTERS - BATTLESTRINGS_TABLE_START] = sText_TeravoltEnters,
    [STRINGID_TURBOBLAZEENTERS - BATTLESTRINGS_TABLE_START] = sText_TurboblazeEnters,
    [STRINGID_SLOWSTARTENTERS - BATTLESTRINGS_TABLE_START] = sText_SlowStartEnters,
    [STRINGID_SLOWSTARTEND - BATTLESTRINGS_TABLE_START] = sText_SlowStartEnd,
    [STRINGID_SOLARPOWERHPDROP - BATTLESTRINGS_TABLE_START] = sText_SolarPowerHpDrop,
    [STRINGID_AFTERMATHDMG - BATTLESTRINGS_TABLE_START] = sText_AftermathDmg,
    [STRINGID_ANTICIPATIONACTIVATES - BATTLESTRINGS_TABLE_START] = sText_AnticipationActivates,
    [STRINGID_FOREWARNACTIVATES - BATTLESTRINGS_TABLE_START] = sText_ForewarnActivates,
    [STRINGID_ICEBODYHPGAIN - BATTLESTRINGS_TABLE_START] = sText_IceBodyHpGain,
    [STRINGID_SNOWWARNINGHAIL - BATTLESTRINGS_TABLE_START] = sText_SnowWarningHail,
    [STRINGID_FRISKACTIVATES - BATTLESTRINGS_TABLE_START] = sText_FriskActivates,
    [STRINGID_UNNERVEENTERS - BATTLESTRINGS_TABLE_START] = sText_UnnerveEnters,
    [STRINGID_HARVESTBERRY - BATTLESTRINGS_TABLE_START] = sText_HarvestBerry,
    [STRINGID_LASTABILITYRAISEDSTAT - BATTLESTRINGS_TABLE_START] = sText_LastAbilityRaisedBuff1,
    [STRINGID_MAGICBOUNCEACTIVATES - BATTLESTRINGS_TABLE_START] = sText_MagicBounceActivates,
    [STRINGID_PROTEANTYPECHANGE - BATTLESTRINGS_TABLE_START] = sText_ProteanTypeChange,
    [STRINGID_SYMBIOSISITEMPASS - BATTLESTRINGS_TABLE_START] = sText_SymbiosisItemPass,
    [STRINGID_STEALTHROCKDMG - BATTLESTRINGS_TABLE_START] = sText_StealthRockDmg,
    [STRINGID_TOXICSPIKESABSORBED - BATTLESTRINGS_TABLE_START] = sText_ToxicSpikesAbsorbed,
    [STRINGID_TOXICSPIKESPOISONED - BATTLESTRINGS_TABLE_START] = sText_ToxicSpikesPoisoned,
    [STRINGID_STICKYWEBSWITCHIN - BATTLESTRINGS_TABLE_START] = sText_StickyWebSwitchIn,
    [STRINGID_HEALINGWISHCAMETRUE - BATTLESTRINGS_TABLE_START] = sText_HealingWishCameTrue,
    [STRINGID_HEALINGWISHHEALED - BATTLESTRINGS_TABLE_START] = sText_HealingWishHealed,
    [STRINGID_LUNARDANCECAMETRUE - BATTLESTRINGS_TABLE_START] = sText_LunarDanceCameTrue,
    [STRINGID_CUSEDBODYDISABLED - BATTLESTRINGS_TABLE_START] = sText_CursedBodyDisabled,
    [STRINGID_ATTACKERACQUIREDABILITY - BATTLESTRINGS_TABLE_START] = sText_AttackerAquiredAbility,
    [STRINGID_TARGETABILITYSTATLOWER - BATTLESTRINGS_TABLE_START] = sText_TargetAbilityLoweredStat,
    [STRINGID_TARGETSTATWONTGOHIGHER - BATTLESTRINGS_TABLE_START] = sText_TargetStatWontGoHigher,
    [STRINGID_PKMNMOVEBOUNCEDABILITY - BATTLESTRINGS_TABLE_START] = sText_PkmnMoveBouncedViaAbility,
    [STRINGID_IMPOSTERTRANSFORM - BATTLESTRINGS_TABLE_START] = sText_ImposterTransform,
    [STRINGID_ASSAULTVESTDOESNTALLOW - BATTLESTRINGS_TABLE_START] = sText_AssaultVestDoesntAllow,
    [STRINGID_GRAVITYPREVENTSUSAGE - BATTLESTRINGS_TABLE_START] = sText_GravityPreventsUsage,
    [STRINGID_HEALBLOCKPREVENTSUSAGE - BATTLESTRINGS_TABLE_START] = sText_HealBlockPreventsUsage,
    [STRINGID_NOTDONEYET - BATTLESTRINGS_TABLE_START] = sText_NotDoneYet,
    [STRINGID_STICKYWEBUSED - BATTLESTRINGS_TABLE_START] = sText_StickyWebUsed,
    [STRINGID_QUASHSUCCESS - BATTLESTRINGS_TABLE_START] = sText_QuashSuccess,
    [STRINGID_PKMNBLEWAWAYTOXICSPIKES - BATTLESTRINGS_TABLE_START] = sText_PkmnBlewAwayToxicSpikes,
    [STRINGID_PKMNBLEWAWAYSTICKYWEB - BATTLESTRINGS_TABLE_START] = sText_PkmnBlewAwayStickyWeb,
    [STRINGID_PKMNBLEWAWAYSTEALTHROCK - BATTLESTRINGS_TABLE_START] = sText_PkmnBlewAwayStealthRock,
    [STRINGID_IONDELUGEON - BATTLESTRINGS_TABLE_START] = sText_IonDelugeOn,
    [STRINGID_TOPSYTURVYSWITCHEDSTATS - BATTLESTRINGS_TABLE_START] = sText_TopsyTurvySwitchedStats,
    [STRINGID_TERRAINBECOMESMISTY - BATTLESTRINGS_TABLE_START] = sText_TerrainBecomesMisty,
    [STRINGID_TERRAINBECOMESGRASSY - BATTLESTRINGS_TABLE_START] = sText_TerrainBecomesGrassy,
    [STRINGID_TERRAINBECOMESELECTRIC - BATTLESTRINGS_TABLE_START] = sText_TerrainBecomesElectric,
    [STRINGID_TERRAINBECOMESPSYCHIC - BATTLESTRINGS_TABLE_START] = sText_TerrainBecomesPsychic,
    [STRINGID_TARGETELECTRIFIED - BATTLESTRINGS_TABLE_START] = sText_TargetElectrified,
    [STRINGID_MEGAEVOREACTING - BATTLESTRINGS_TABLE_START] = sText_MegaEvoReacting,
    [STRINGID_FERVENTWISHREACHED - BATTLESTRINGS_TABLE_START] = sText_FerventWishReached,
    [STRINGID_MEGAEVOEVOLVED - BATTLESTRINGS_TABLE_START] = sText_MegaEvoEvolved,
    [STRINGID_DRASTICALLY - BATTLESTRINGS_TABLE_START] = sText_drastically,
    [STRINGID_SEVERELY - BATTLESTRINGS_TABLE_START] = sText_severely,
    [STRINGID_INFESTATION - BATTLESTRINGS_TABLE_START] = sText_Infestation,
    [STRINGID_NOEFFECTONTARGET - BATTLESTRINGS_TABLE_START] = sText_NoEffectOnTarget,
    [STRINGID_BURSTINGFLAMESHIT - BATTLESTRINGS_TABLE_START] = sText_BurstingFlames,
    [STRINGID_BESTOWITEMGIVING - BATTLESTRINGS_TABLE_START] = sText_BestowItemGiving,
    [STRINGID_THIRDTYPEADDED - BATTLESTRINGS_TABLE_START] = sText_ThirdTypeAdded,
    [STRINGID_FELLFORFEINT - BATTLESTRINGS_TABLE_START] = sText_FellForFeint,
    [STRINGID_POKEMONCANNOTUSEMOVE - BATTLESTRINGS_TABLE_START] = sText_PokemonCannotUseMove,
    [STRINGID_COVEREDINPOWDER - BATTLESTRINGS_TABLE_START] = sText_CoveredInPowder,
    [STRINGID_POWDEREXPLODES - BATTLESTRINGS_TABLE_START] = sText_PowderExplodes,
    [STRINGID_GRAVITYGROUNDING - BATTLESTRINGS_TABLE_START] = sText_GravityGrounding,
    [STRINGID_MISTYTERRAINPREVENTS - BATTLESTRINGS_TABLE_START] = sText_MistyTerrainPreventsStatus,
    [STRINGID_GRASSYTERRAINHEALS - BATTLESTRINGS_TABLE_START] = sText_GrassyTerrainHeals,
    [STRINGID_ELECTRICTERRAINPREVENTS - BATTLESTRINGS_TABLE_START] = sText_ElectricTerrainPreventsSleep,
    [STRINGID_PSYCHICTERRAINPREVENTS - BATTLESTRINGS_TABLE_START] = sText_PsychicTerrainPreventsPriority,
    [STRINGID_AURAFLAREDTOLIFE - BATTLESTRINGS_TABLE_START] = sText_AuraFlaredToLife,
    [STRINGID_AIRLOCKACTIVATES - BATTLESTRINGS_TABLE_START] = sText_AirLockActivates,
    [STRINGID_PRESSUREENTERS - BATTLESTRINGS_TABLE_START] = sText_PressureActivates,
    [STRINGID_DARKAURAENTERS - BATTLESTRINGS_TABLE_START] = sText_DarkAuraActivates,
    [STRINGID_FAIRYAURAENTERS - BATTLESTRINGS_TABLE_START] = sText_FairyAuraActivates,
    [STRINGID_AURABREAKENTERS - BATTLESTRINGS_TABLE_START] = sText_AuraBreakActivates,
    [STRINGID_COMATOSEENTERS - BATTLESTRINGS_TABLE_START] = sText_ComatoseActivates,
    [STRINGID_SCREENCLEANERENTERS - BATTLESTRINGS_TABLE_START] = sText_ScreenCleanerActivates,
    [STRINGID_BOTHCANNOLONGERESCAPE - BATTLESTRINGS_TABLE_START] = sText_BothCanNoLongerEscape,
    [STRINGID_CANTESCAPEDUETOUSEDMOVE - BATTLESTRINGS_TABLE_START] = sText_CantEscapeDueToUsedMove,
    [STRINGID_PKMNBECAMEWEAKERTOFIRE - BATTLESTRINGS_TABLE_START] = sText_PkmnBecameWeakerToFire,
    [STRINGID_ABOUTTOUSEPOLTERGEIST - BATTLESTRINGS_TABLE_START] = sText_PkmnAboutToBeAttackedByItsItem,
    [STRINGID_CANTESCAPEBECAUSEOFCURRENTMOVE - BATTLESTRINGS_TABLE_START] = sText_CantEscapeBecauseOfCurrentMove,
    [STRINGID_PKMNTOOKTARGETHIGH - BATTLESTRINGS_TABLE_START] = sText_PkmnTookTargetHigh,
    [STRINGID_TARGETTOOHEAVY - BATTLESTRINGS_TABLE_START] = sText_TargetTooHeavy,
    [STRINGID_PKMNSXPREVENTSFREEZE - BATTLESTRINGS_TABLE_START] = sText_PkmnsXPreventsFreeze,
    [STRINGID_FREEZEDMG - BATTLESTRINGS_TABLE_START] = sText_FreezeDmg,
	[STRINGID_PLAYERLOSTTOENEMYTRAINER - BATTLESTRINGS_TABLE_START] = sText_PlayerLostToEnemyTrainer,
    [STRINGID_PLAYERPAIDPRIZEMONEY - BATTLESTRINGS_TABLE_START] = sText_PlayerPaidPrizeMoney,
    [STRINGID_COURTCHANGE - BATTLESTRINGS_TABLE_START] = sText_CourtChange,
    [STRINGID_HEATUPBEAK - BATTLESTRINGS_TABLE_START] = sText_HeatingUpBeak,
    [STRINGID_METEORBEAMCHARGING - BATTLESTRINGS_TABLE_START] = sText_MeteorBeamCharging,
	[STRINGID_PKMNINSNAPTRAP - BATTLESTRINGS_TABLE_START] = sText_PkmnInSnapTrap,
};

const u16 gMentalHerbCureStringIds[] = 
{
    [B_MSG_MENTALHERBCURE_INFATUATION] = STRINGID_ATKGOTOVERINFATUATION,
    [B_MSG_MENTALHERBCURE_TAUNT]       = STRINGID_BUFFERENDS,
    [B_MSG_MENTALHERBCURE_ENCORE]      = STRINGID_PKMNENCOREENDED,
    [B_MSG_MENTALHERBCURE_TORMENT]     = STRINGID_TORMENTEDNOMORE,
    [B_MSG_MENTALHERBCURE_HEALBLOCK]   = STRINGID_HEALBLOCKEDNOMORE,
    [B_MSG_MENTALHERBCURE_DISABLE]     = STRINGID_PKMNMOVEDISABLEDNOMORE,
};

const u16 gTerrainStringIds[] =
{
    STRINGID_TERRAINBECOMESMISTY, STRINGID_TERRAINBECOMESGRASSY, STRINGID_TERRAINBECOMESELECTRIC, STRINGID_TERRAINBECOMESPSYCHIC
};

const u16 gTerrainEndingStringIds[] = 
{
    STRINGID_MISTYTERRAINENDS, STRINGID_GRASSYTERRAINENDS, STRINGID_ELECTRICTERRAINENDS, STRINGID_PSYCHICTERRAINENDS
};

const u16 gTerrainPreventsStringIds[] =
{
    [B_MSG_TERRAINPREVENTS_MISTY]    = STRINGID_MISTYTERRAINPREVENTS,
    [B_MSG_TERRAINPREVENTS_ELECTRIC] = STRINGID_ELECTRICTERRAINPREVENTS,
    [B_MSG_TERRAINPREVENTS_PSYCHIC]  = STRINGID_PSYCHICTERRAINPREVENTS
};

const u16 gMagicCoatBounceStringIds[] =
{
    STRINGID_PKMNMOVEBOUNCED, STRINGID_PKMNMOVEBOUNCEDABILITY
};

const u16 gHealingWishStringIds[] =
{
    STRINGID_HEALINGWISHCAMETRUE, STRINGID_LUNARDANCECAMETRUE
};

const u16 gDmgHazardsStringIds[] =
{
    STRINGID_PKMNHURTBYSPIKES, STRINGID_STEALTHROCKDMG
};

const u16 gSwitchInAbilityStringIds[] =
{
    [B_MSG_SWITCHIN_MOLDBREAKER] = STRINGID_MOLDBREAKERENTERS,
    [B_MSG_SWITCHIN_TERAVOLT] = STRINGID_TERAVOLTENTERS,
    [B_MSG_SWITCHIN_TURBOBLAZE] = STRINGID_TURBOBLAZEENTERS,
    [B_MSG_SWITCHIN_SLOWSTART] = STRINGID_SLOWSTARTENTERS,
    [B_MSG_SWITCHIN_UNNERVE] = STRINGID_UNNERVEENTERS,
    [B_MSG_SWITCHIN_ANTICIPATION] = STRINGID_ANTICIPATIONACTIVATES,
    [B_MSG_SWITCHIN_FOREWARN] = STRINGID_FOREWARNACTIVATES,
    [B_MSG_SWITCHIN_PRESSURE] = STRINGID_PRESSUREENTERS,
    [B_MSG_SWITCHIN_DARKAURA] = STRINGID_DARKAURAENTERS,
    [B_MSG_SWITCHIN_FAIRYAURA] = STRINGID_FAIRYAURAENTERS,
    [B_MSG_SWITCHIN_AURABREAK] = STRINGID_AURABREAKENTERS,
    [B_MSG_SWITCHIN_COMATOSE] = STRINGID_COMATOSEENTERS,
    [B_MSG_SWITCHIN_SCREENCLEANER] = STRINGID_SCREENCLEANERENTERS,
    [B_MSG_SWITCHIN_ASONE] = STRINGID_ASONEENTERS,
    [B_MSG_SWITCHIN_CURIOUS_MEDICINE] = STRINGID_CURIOUSMEDICINEENTERS,
    [B_MSG_SWITCHIN_PASTEL_VEIL] = STRINGID_PASTELVEILENTERS,
    [B_MSG_SWITCHIN_NEUTRALIZING_GAS] = STRINGID_NEUTRALIZINGGASENTERS,
};

const u16 gMissStringIds[] =
{
    [B_MSG_MISSED]      = STRINGID_ATTACKMISSED,
    [B_MSG_PROTECTED]   = STRINGID_PKMNPROTECTEDITSELF,
    [B_MSG_AVOIDED_ATK] = STRINGID_PKMNAVOIDEDATTACK,
    [B_MSG_AVOIDED_DMG] = STRINGID_AVOIDEDDAMAGE,
    [B_MSG_GROUND_MISS] = STRINGID_PKMNMAKESGROUNDMISS
};

const u16 gNoEscapeStringIds[] =
{
    [B_MSG_CANT_ESCAPE]          = STRINGID_CANTESCAPE,
    [B_MSG_DONT_LEAVE_BIRCH]     = STRINGID_DONTLEAVEBIRCH,
    [B_MSG_PREVENTS_ESCAPE]      = STRINGID_PREVENTSESCAPE,
    [B_MSG_CANT_ESCAPE_2]        = STRINGID_CANTESCAPE2,
    [B_MSG_ATTACKER_CANT_ESCAPE] = STRINGID_ATTACKERCANTESCAPE
};

const u16 gMoveWeatherChangeStringIds[] =
{
    [B_MSG_STARTED_RAIN]      = STRINGID_STARTEDTORAIN,
    [B_MSG_STARTED_DOWNPOUR]  = STRINGID_DOWNPOURSTARTED, // Unused
    [B_MSG_WEATHER_FAILED]    = STRINGID_BUTITFAILED,
    [B_MSG_STARTED_SANDSTORM] = STRINGID_SANDSTORMBREWED,
    [B_MSG_STARTED_SUNLIGHT]  = STRINGID_SUNLIGHTGOTBRIGHT,
    [B_MSG_STARTED_HAIL]      = STRINGID_STARTEDHAIL,
};

const u16 gSandStormHailContinuesStringIds[] =
{
    [B_MSG_SANDSTORM] = STRINGID_SANDSTORMRAGES,
    [B_MSG_HAIL]      = STRINGID_HAILCONTINUES
};

const u16 gSandStormHailDmgStringIds[] =
{
    [B_MSG_SANDSTORM] = STRINGID_PKMNBUFFETEDBYSANDSTORM,
    [B_MSG_HAIL]      = STRINGID_PKMNPELTEDBYHAIL
};

const u16 gSandStormHailEndStringIds[] =
{
    [B_MSG_SANDSTORM] = STRINGID_SANDSTORMSUBSIDED,
    [B_MSG_HAIL]      = STRINGID_HAILSTOPPED
};

const u16 gRainContinuesStringIds[] =
{
    [B_MSG_RAIN_CONTINUES]     = STRINGID_RAINCONTINUES,
    [B_MSG_DOWNPOUR_CONTINUES] = STRINGID_DOWNPOURCONTINUES,
    [B_MSG_RAIN_STOPPED]       = STRINGID_RAINSTOPPED
};

const u16 gProtectLikeUsedStringIds[] =
{
    [B_MSG_PROTECTED_ITSELF] = STRINGID_PKMNPROTECTEDITSELF2,
    [B_MSG_BRACED_ITSELF]    = STRINGID_PKMNBRACEDITSELF,
    [B_MSG_PROTECT_FAILED]   = STRINGID_BUTITFAILED,
    [B_MSG_PROTECTED_TEAM]   = STRINGID_PROTECTEDTEAM,
};

const u16 gReflectLightScreenSafeguardStringIds[] =
{
    [B_MSG_SIDE_STATUS_FAILED]     = STRINGID_BUTITFAILED,
    [B_MSG_SET_REFLECT_SINGLE]     = STRINGID_PKMNRAISEDDEF,
    [B_MSG_SET_REFLECT_DOUBLE]     = STRINGID_PKMNRAISEDDEFALITTLE,
    [B_MSG_SET_LIGHTSCREEN_SINGLE] = STRINGID_PKMNRAISEDSPDEF,
    [B_MSG_SET_LIGHTSCREEN_DOUBLE] = STRINGID_PKMNRAISEDSPDEFALITTLE,
    [B_MSG_SET_SAFEGUARD]          = STRINGID_PKMNCOVEREDBYVEIL,
};

const u16 gLeechSeedStringIds[] =
{
    [B_MSG_LEECH_SEED_SET]   = STRINGID_PKMNSEEDED,
    [B_MSG_LEECH_SEED_MISS]  = STRINGID_PKMNEVADEDATTACK,
    [B_MSG_LEECH_SEED_FAIL]  = STRINGID_ITDOESNTAFFECT,
    [B_MSG_LEECH_SEED_DRAIN] = STRINGID_PKMNSAPPEDBYLEECHSEED,
    [B_MSG_LEECH_SEED_OOZE]  = STRINGID_ITSUCKEDLIQUIDOOZE,
};

const u16 gRestUsedStringIds[] =
{
    [B_MSG_REST]          = STRINGID_PKMNWENTTOSLEEP,
    [B_MSG_REST_STATUSED] = STRINGID_PKMNSLEPTHEALTHY
};

const u16 gUproarOverTurnStringIds[] =
{
    [B_MSG_UPROAR_CONTINUES] = STRINGID_PKMNMAKINGUPROAR,
    [B_MSG_UPROAR_ENDS]      = STRINGID_PKMNCALMEDDOWN
};

const u16 gStockpileUsedStringIds[] =
{
    [B_MSG_STOCKPILED]     = STRINGID_PKMNSTOCKPILED,
    [B_MSG_CANT_STOCKPILE] = STRINGID_PKMNCANTSTOCKPILE,
};

const u16 gWokeUpStringIds[] =
{
    [B_MSG_WOKE_UP]        = STRINGID_PKMNWOKEUP,
    [B_MSG_WOKE_UP_UPROAR] = STRINGID_PKMNWOKEUPINUPROAR
};

const u16 gSwallowFailStringIds[] =
{
    [B_MSG_SWALLOW_FAILED]  = STRINGID_FAILEDTOSWALLOW,
    [B_MSG_SWALLOW_FULL_HP] = STRINGID_PKMNHPFULL
};

const u16 gUproarAwakeStringIds[] =
{
    [B_MSG_CANT_SLEEP_UPROAR]  = STRINGID_PKMNCANTSLEEPINUPROAR2,
    [B_MSG_UPROAR_KEPT_AWAKE]  = STRINGID_UPROARKEPTPKMNAWAKE,
    [B_MSG_STAYED_AWAKE_USING] = STRINGID_PKMNSTAYEDAWAKEUSING,
};

const u16 gStatUpStringIds[] =
{
    [B_MSG_ATTACKER_STAT_ROSE] = STRINGID_ATTACKERSSTATROSE,
    [B_MSG_DEFENDER_STAT_ROSE] = STRINGID_DEFENDERSSTATROSE,
    [B_MSG_STAT_WONT_INCREASE] = STRINGID_STATSWONTINCREASE,
    [B_MSG_STAT_ROSE_EMPTY]    = STRINGID_EMPTYSTRING3,
    [B_MSG_STAT_ROSE_ITEM]     = STRINGID_USINGITEMSTATOFPKMNROSE,
    [B_MSG_USED_DIRE_HIT]     = STRINGID_PKMNUSEDXTOGETPUMPED,
};

const u16 gStatDownStringIds[] =
{
    [B_MSG_ATTACKER_STAT_FELL] = STRINGID_ATTACKERSSTATFELL,
    [B_MSG_DEFENDER_STAT_FELL] = STRINGID_DEFENDERSSTATFELL,
    [B_MSG_STAT_WONT_DECREASE] = STRINGID_STATSWONTDECREASE,
    [B_MSG_STAT_FELL_EMPTY]    = STRINGID_EMPTYSTRING3,
};

// Index read from sTWOTURN_STRINGID
const u16 gFirstTurnOfTwoStringIds[] =
{
    [B_MSG_TURN1_RAZOR_WIND]    = STRINGID_PKMNWHIPPEDWHIRLWIND,
    [B_MSG_TURN1_SOLAR_BEAM]    = STRINGID_PKMNTOOKSUNLIGHT,
    [B_MSG_TURN1_SKULL_BASH]    = STRINGID_PKMNLOWEREDHEAD,
    [B_MSG_TURN1_SKY_ATTACK]    = STRINGID_PKMNISGLOWING,
    [B_MSG_TURN1_FLY]           = STRINGID_PKMNFLEWHIGH,
    [B_MSG_TURN1_DIG]           = STRINGID_PKMNDUGHOLE,
    [B_MSG_TURN1_DIVE]          = STRINGID_PKMNHIDUNDERWATER,
    [B_MSG_TURN1_BOUNCE]        = STRINGID_PKMNSPRANGUP,
    [B_MSG_TURN1_PHANTOM_FORCE] = STRINGID_VANISHEDINSTANTLY,
    [B_MSG_TURN1_GEOMANCY]      = STRINGID_PKNMABSORBINGPOWER,
    [B_MSG_TURN1_FREEZE_SHOCK]  = STRINGID_CLOAKEDINAFREEZINGLIGHT,
    [B_MSG_TURN1_SKY_DROP]      = STRINGID_PKMNTOOKTARGETHIGH,
    [B_MSG_TURN1_METEOR_BEAM]   = STRINGID_METEORBEAMCHARGING,
};

// Index copied from move's index in sTrappingMoves
const u16 gWrappedStringIds[TRAPPING_MOVES_COUNT] =
{
    [B_MSG_WRAPPED_BIND]        = STRINGID_PKMNSQUEEZEDBYBIND,     // MOVE_BIND
    [B_MSG_WRAPPED_WRAP]        = STRINGID_PKMNWRAPPEDBY,          // MOVE_WRAP
    [B_MSG_WRAPPED_FIRE_SPIN]   = STRINGID_PKMNTRAPPEDINVORTEX,    // MOVE_FIRE_SPIN
    [B_MSG_WRAPPED_CLAMP]       = STRINGID_PKMNCLAMPED,            // MOVE_CLAMP
    [B_MSG_WRAPPED_WHIRLPOOL]   = STRINGID_PKMNTRAPPEDINVORTEX,    // MOVE_WHIRLPOOL
    [B_MSG_WRAPPED_SAND_TOMB]   = STRINGID_PKMNTRAPPEDBYSANDTOMB,  // MOVE_SAND_TOMB
    [B_MSG_WRAPPED_MAGMA_STORM] = STRINGID_TRAPPEDBYSWIRLINGMAGMA, // MOVE_MAGMA_STORM
    [B_MSG_WRAPPED_INFESTATION] = STRINGID_INFESTATION,            // MOVE_INFESTATION
    [B_MSG_WRAPPED_SNAP_TRAP]   = STRINGID_PKMNINSNAPTRAP,         // MOVE_SNAP_TRAP
};

const u16 gMistUsedStringIds[] =
{
    [B_MSG_SET_MIST]    = STRINGID_PKMNSHROUDEDINMIST,
    [B_MSG_MIST_FAILED] = STRINGID_BUTITFAILED
};

const u16 gFocusEnergyUsedStringIds[] =
{
    [B_MSG_GETTING_PUMPED]      = STRINGID_PKMNGETTINGPUMPED,
    [B_MSG_FOCUS_ENERGY_FAILED] = STRINGID_BUTITFAILED
};

const u16 gTransformUsedStringIds[] =
{
    [B_MSG_TRANSFORMED]      = STRINGID_PKMNTRANSFORMEDINTO,
    [B_MSG_TRANSFORM_FAILED] = STRINGID_BUTITFAILED
};

const u16 gSubstituteUsedStringIds[] =
{
    [B_MSG_SET_SUBSTITUTE]    = STRINGID_PKMNMADESUBSTITUTE,
    [B_MSG_SUBSTITUTE_FAILED] = STRINGID_TOOWEAKFORSUBSTITUTE
};

const u16 gGotPoisonedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASPOISONED,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNPOISONEDBY
};

const u16 gGotParalyzedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASPARALYZED,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNWASPARALYZEDBY
};

const u16 gFellAsleepStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNFELLASLEEP,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNMADESLEEP,
};

const u16 gGotBurnedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASBURNED,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNBURNEDBY
};

const u16 gGotFrozenStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASFROZEN,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNFROZENBY
};

const u16 gGotDefrostedStringIds[] =
{
    [B_MSG_DEFROSTED]         = STRINGID_PKMNWASDEFROSTED2,
    [B_MSG_DEFROSTED_BY_MOVE] = STRINGID_PKMNWASDEFROSTEDBY
};

const u16 gKOFailedStringIds[] =
{
    [B_MSG_KO_MISS]       = STRINGID_ATTACKMISSED,
    [B_MSG_KO_UNAFFECTED] = STRINGID_PKMNUNAFFECTED
};

const u16 gAttractUsedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNFELLINLOVE,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNSXINFATUATEDY
};

const u16 gAbsorbDrainStringIds[] =
{
    [B_MSG_ABSORB]      = STRINGID_PKMNENERGYDRAINED,
    [B_MSG_ABSORB_OOZE] = STRINGID_ITSUCKEDLIQUIDOOZE
};

const u16 gSportsUsedStringIds[] =
{
    [B_MSG_WEAKEN_ELECTRIC] = STRINGID_ELECTRICITYWEAKENED,
    [B_MSG_WEAKEN_FIRE]     = STRINGID_FIREWEAKENED
};

const u16 gPartyStatusHealStringIds[] =
{
    [B_MSG_BELL]                     = STRINGID_BELLCHIMED,
    [B_MSG_BELL_SOUNDPROOF_ATTACKER] = STRINGID_BELLCHIMED,
    [B_MSG_BELL_SOUNDPROOF_PARTNER]  = STRINGID_BELLCHIMED,
    [B_MSG_BELL_BOTH_SOUNDPROOF]     = STRINGID_BELLCHIMED,
    [B_MSG_SOOTHING_AROMA]           = STRINGID_SOOTHINGAROMA
};

const u16 gFutureMoveUsedStringIds[] =
{
    [B_MSG_FUTURE_SIGHT] = STRINGID_PKMNFORESAWATTACK,
    [B_MSG_DOOM_DESIRE]  = STRINGID_PKMNCHOSEXASDESTINY
};

const u16 gBallEscapeStringIds[] =
{
    [BALL_NO_SHAKES]     = STRINGID_PKMNBROKEFREE,
    [BALL_1_SHAKE]       = STRINGID_ITAPPEAREDCAUGHT,
    [BALL_2_SHAKES]      = STRINGID_AARGHALMOSTHADIT,
    [BALL_3_SHAKES_FAIL] = STRINGID_SHOOTSOCLOSE
};

// Overworld weathers that don't have an associated battle weather default to "It is raining."
const u16 gWeatherStartsStringIds[] =
{
    [WEATHER_NONE]               = STRINGID_ITISRAINING,
    [WEATHER_SUNNY_CLOUDS]       = STRINGID_ITISRAINING,
    [WEATHER_SUNNY]              = STRINGID_ITISRAINING,
    [WEATHER_RAIN]               = STRINGID_ITISRAINING,
    [WEATHER_SNOW]               = STRINGID_ITISRAINING,
    [WEATHER_RAIN_THUNDERSTORM]  = STRINGID_ITISRAINING,
    [WEATHER_FOG_HORIZONTAL]     = STRINGID_ITISRAINING,
    [WEATHER_VOLCANIC_ASH]       = STRINGID_ITISRAINING,
    [WEATHER_SANDSTORM]          = STRINGID_SANDSTORMISRAGING,
    [WEATHER_FOG_DIAGONAL]       = STRINGID_ITISRAINING,
    [WEATHER_UNDERWATER]         = STRINGID_ITISRAINING,
    [WEATHER_SHADE]              = STRINGID_ITISRAINING,
    [WEATHER_DROUGHT]            = STRINGID_SUNLIGHTSTRONG,
    [WEATHER_DOWNPOUR]           = STRINGID_ITISRAINING,
    [WEATHER_UNDERWATER_BUBBLES] = STRINGID_ITISRAINING,
    [WEATHER_ABNORMAL]           = STRINGID_ITISRAINING
};

const u16 gInobedientStringIds[] =
{
    [B_MSG_LOAFING]            = STRINGID_PKMNLOAFING,
    [B_MSG_WONT_OBEY]          = STRINGID_PKMNWONTOBEY,
    [B_MSG_TURNED_AWAY]        = STRINGID_PKMNTURNEDAWAY,
    [B_MSG_PRETEND_NOT_NOTICE] = STRINGID_PKMNPRETENDNOTNOTICE,
    [B_MSG_INCAPABLE_OF_POWER] = STRINGID_PKMNINCAPABLEOFPOWER
};

const u16 gSafariGetNearStringIds[] =
{
    [B_MSG_CREPT_CLOSER]    = STRINGID_CREPTCLOSER,
    [B_MSG_CANT_GET_CLOSER] = STRINGID_CANTGETCLOSER
};

const u16 gSafariPokeblockResultStringIds[] =
{
    [B_MSG_MON_CURIOUS]    = STRINGID_PKMNCURIOUSABOUTX,
    [B_MSG_MON_ENTHRALLED] = STRINGID_PKMNENTHRALLEDBYX,
    [B_MSG_MON_IGNORED]    = STRINGID_PKMNIGNOREDX
};

const u16 gTrainerItemCuredStatusStringIds[] =
{
    [AI_HEAL_CONFUSION] = STRINGID_PKMNSITEMSNAPPEDOUT,
    [AI_HEAL_PARALYSIS] = STRINGID_PKMNSITEMCUREDPARALYSIS,
    [AI_HEAL_FREEZE]    = STRINGID_PKMNSITEMDEFROSTEDIT,
    [AI_HEAL_BURN]      = STRINGID_PKMNSITEMHEALEDBURN,
    [AI_HEAL_POISON]    = STRINGID_PKMNSITEMCUREDPOISON,
    [AI_HEAL_SLEEP]     = STRINGID_PKMNSITEMWOKEIT
};

const u16 gBerryEffectStringIds[] =
{
    [B_MSG_CURED_PROBLEM]     = STRINGID_PKMNSITEMCUREDPROBLEM,
    [B_MSG_NORMALIZED_STATUS] = STRINGID_PKMNSITEMNORMALIZEDSTATUS
};

const u16 gBRNPreventionStringIds[] =
{
    [B_MSG_ABILITY_PREVENTS_MOVE_STATUS]    = STRINGID_PKMNSXPREVENTSBURNS,
    [B_MSG_ABILITY_PREVENTS_ABILITY_STATUS] = STRINGID_PKMNSXPREVENTSYSZ,
    [B_MSG_STATUS_HAD_NO_EFFECT]            = STRINGID_PKMNSXHADNOEFFECTONY
};

const u16 gFRNPreventionStringIds[] =
{
    [B_MSG_ABILITY_PREVENTS_MOVE_STATUS]    = STRINGID_PKMNSXPREVENTSFREEZE,
    [B_MSG_ABILITY_PREVENTS_ABILITY_STATUS] = STRINGID_PKMNSXPREVENTSYSZ,
    [B_MSG_STATUS_HAD_NO_EFFECT]            = STRINGID_PKMNSXHADNOEFFECTONY
};

const u16 gPRLZPreventionStringIds[] =
{
    [B_MSG_ABILITY_PREVENTS_MOVE_STATUS]    = STRINGID_PKMNPREVENTSPARALYSISWITH,
    [B_MSG_ABILITY_PREVENTS_ABILITY_STATUS] = STRINGID_PKMNSXPREVENTSYSZ,
    [B_MSG_STATUS_HAD_NO_EFFECT]            = STRINGID_PKMNSXHADNOEFFECTONY
};

const u16 gPSNPreventionStringIds[] =
{
    [B_MSG_ABILITY_PREVENTS_MOVE_STATUS]    = STRINGID_PKMNPREVENTSPOISONINGWITH,
    [B_MSG_ABILITY_PREVENTS_ABILITY_STATUS] = STRINGID_PKMNSXPREVENTSYSZ,
    [B_MSG_STATUS_HAD_NO_EFFECT]            = STRINGID_PKMNSXHADNOEFFECTONY
};

const u16 gItemSwapStringIds[] =
{
    [B_MSG_ITEM_SWAP_TAKEN] = STRINGID_PKMNOBTAINEDX,
    [B_MSG_ITEM_SWAP_GIVEN] = STRINGID_PKMNOBTAINEDX2,
    [B_MSG_ITEM_SWAP_BOTH]  = STRINGID_PKMNOBTAINEDXYOBTAINEDZ
};

const u16 gFlashFireStringIds[] =
{
    [B_MSG_FLASH_FIRE_BOOST]    = STRINGID_PKMNRAISEDFIREPOWERWITH,
    [B_MSG_FLASH_FIRE_NO_BOOST] = STRINGID_PKMNSXMADEYINEFFECTIVE
};

const u16 gCaughtMonStringIds[] =
{
    [B_MSG_SENT_SOMEONES_PC]  = STRINGID_PKMNTRANSFERREDSOMEONESPC,
    [B_MSG_SENT_LANETTES_PC]  = STRINGID_PKMNTRANSFERREDLANETTESPC,
    [B_MSG_SOMEONES_BOX_FULL] = STRINGID_PKMNBOXSOMEONESPCFULL,
    [B_MSG_LANETTES_BOX_FULL] = STRINGID_PKMNBOXLANETTESPCFULL,
};

const u16 gRoomsStringIds[] =
{
    STRINGID_PKMNTWISTEDDIMENSIONS, STRINGID_TRICKROOMENDS,
    STRINGID_SWAPSDEFANDSPDEFOFALLPOKEMON, STRINGID_WONDERROOMENDS,
    STRINGID_HELDITEMSLOSEEFFECTS, STRINGID_MAGICROOMENDS,
    STRINGID_EMPTYSTRING3
};

const u16 gStatusConditionsStringIds[] =
{
    STRINGID_PKMNWASPOISONED, STRINGID_PKMNBADLYPOISONED, STRINGID_PKMNWASBURNED, STRINGID_PKMNWASPARALYZED, STRINGID_PKMNFELLASLEEP
};

const u8 gText_PkmnIsEvolving[] = _("¿Qué?\n¡{COLOR 4}{STR_VAR_1}{COLOR 1} está evolucionando!");
const u8 gText_CongratsPkmnEvolved[] = _("¡Felicitaciones! ¡{COLOR 4}{STR_VAR_1}{COLOR 1}\nevolucionó a {COLOR 10}{STR_VAR_2}{COLOR 1}!{WAIT_SE}\p");
const u8 gText_PkmnStoppedEvolving[] = _("¿Qué……? ¡{COLOR 4}{STR_VAR_1}{COLOR 1}\ndejó de evolucionar!\p");
const u8 gText_EllipsisQuestionMark[] = _("¿……?\p");
const u8 gText_WhatWillPkmnDo[] = _("¿Qué hará\n{COLOR 4}{B_ACTIVE_NAME2}{COLOR 1}?");
const u8 gText_WhatWillPkmnDo2[] = _("¿Qué harás,\n{COLOR 4}{B_PLAYER_NAME}{COLOR WHITE}?");
const u8 gText_WhatWillWallyDo[] = _("¿Qué hará\nWally?");
const u8 gText_LinkStandby[] = _("{PAUSE 16}Por favor, espere…");
const u8 gText_BattleMenu[] = _("Luchar{CLEAR_TO 56}Mochila\nPokémon{CLEAR_TO 56}Huir");
const u8 gText_SafariZoneMenu[] = _("Ball{CLEAR_TO 56}{POKEBLOCK}\nIr Cerca{CLEAR_TO 56}Huir");
const u8 gText_MoveInterfacePP[] = _("PP ");
const u8 gText_MoveInterfaceType[] = _("Tipo/");
const u8 gText_MoveInterfacePpType[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}PP\nTipo/");
const u8 gText_MoveInterfaceDynamicColors[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}");
const u8 gText_WhichMoveToForget4[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}¿Qué debería olvidar?");
const u8 gText_BattleYesNoChoice[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}Sí\nNo");
const u8 gText_BattleSwitchWhich[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}¿Cambiar\nadónde?");
const u8 gText_BattleSwitchWhich2[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}");
const u8 gText_BattleSwitchWhich3[] = _("{UP_ARROW}");
const u8 gText_BattleSwitchWhich4[] = _("{ESCAPE 4}");
const u8 gText_BattleSwitchWhich5[] = _("-");

// Unused
static const u8 * const sStatNamesTable2[] =
{
    gText_HP3, gText_SpAtk, gText_Attack,
    gText_SpDef, gText_Defense, gText_Speed
};

const u8 gText_SafariBalls[] = _("SAFARI BALLS");
const u8 gText_SafariBallLeft[] = _("Quedan:$" "{HIGHLIGHT 1}");
const u8 gText_Sleep[] = _("sueño");
const u8 gText_Poison[] = _("veneno");
const u8 gText_Burn[] = _("quemaduras");
const u8 gText_Paralysis[] = _("parálisis");
const u8 gText_Ice[] = _("helado");
const u8 gText_Confusion[] = _("confusión");
const u8 gText_Love[] = _("amor");
const u8 gText_SpaceAndSpace[] = _(" y ");
const u8 gText_CommaSpace[] = _(", ");
const u8 gText_Space2[] = _(" ");
const u8 gText_LineBreak[] = _("\l");
const u8 gText_NewLine[] = _("\n");
const u8 gText_Are[] = _("are");
const u8 gText_Are2[] = _("are");
const u8 gText_BadEgg[] = _("Huevo Malo");
const u8 gText_BattleWallyName[] = _("Wally");
const u8 gText_Win[] = _("{HIGHLIGHT TRANSPARENT}Victoria");
const u8 gText_Loss[] = _("{HIGHLIGHT TRANSPARENT}Derrota");
const u8 gText_Draw[] = _("{HIGHLIGHT TRANSPARENT}Empate");
static const u8 sText_SpaceIs[] = _(" is");
static const u8 sText_ApostropheS[] = _("'s");

// For displaying names of invalid moves
static const u8 sATypeMove_Table[NUMBER_OF_MON_TYPES][17] =
{
    [TYPE_NORMAL]   = _("a NORMAL move"),
    [TYPE_FIGHTING] = _("a FIGHTING move"),
    [TYPE_FLYING]   = _("a FLYING move"),
    [TYPE_POISON]   = _("a POISON move"),
    [TYPE_GROUND]   = _("a GROUND move"),
    [TYPE_ROCK]     = _("a ROCK move"),
    [TYPE_BUG]      = _("a BUG move"),
    [TYPE_GHOST]    = _("a GHOST move"),
    [TYPE_STEEL]    = _("a STEEL move"),
    [TYPE_MYSTERY]  = _("a ??? move"),
    [TYPE_FIRE]     = _("a FIRE move"),
    [TYPE_WATER]    = _("a WATER move"),
    [TYPE_GRASS]    = _("a GRASS move"),
    [TYPE_ELECTRIC] = _("an ELECTRIC move"),
    [TYPE_PSYCHIC]  = _("a PSYCHIC move"),
    [TYPE_ICE]      = _("an ICE move"),
    [TYPE_DRAGON]   = _("a DRAGON move"),
    [TYPE_DARK]     = _("a DARK move"),
    [TYPE_FAIRY]    = _("a FAIRY move"),
};

const u8 gText_BattleTourney[] = _("BATTLE TOURNEY");
static const u8 sText_Round1[] = _("Round 1");
static const u8 sText_Round2[] = _("Round 2");
static const u8 sText_Semifinal[] = _("Semifinal");
static const u8 sText_Final[] = _("Final");

const u8 *const gRoundsStringTable[DOME_ROUNDS_COUNT] =
{
    [DOME_ROUND1]    = sText_Round1,
    [DOME_ROUND2]    = sText_Round2,
    [DOME_SEMIFINAL] = sText_Semifinal,
    [DOME_FINAL]     = sText_Final
};

const u8 gText_TheGreatNewHope[] = _("The great new hope!\p");
const u8 gText_WillChampionshipDreamComeTrue[] = _("Will the championship dream come true?!\p");
const u8 gText_AFormerChampion[] = _("A former CHAMPION!\p");
const u8 gText_ThePreviousChampion[] = _("The previous CHAMPION!\p");
const u8 gText_TheUnbeatenChampion[] = _("The unbeaten CHAMPION!\p");
const u8 gText_PlayerMon1Name[] = _("{B_PLAYER_MON1_NAME}");
const u8 gText_Vs[] = _("VS");
const u8 gText_OpponentMon1Name[] = _("{COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1}");
const u8 gText_Mind[] = _("Mind");
const u8 gText_Skill[] = _("Skill");
const u8 gText_Body[] = _("Body");
const u8 gText_Judgement[] = _("{B_BUFF1}{CLEAR 13}Judgment{CLEAR 13}{B_BUFF2}");
static const u8 sText_TwoTrainersSentPkmn[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME} sent\nout {COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1}!\p{B_TRAINER2_CLASS} {B_TRAINER2_NAME} sent\nout {COLOR 11}{B_OPPONENT_MON2_NAME}{COLOR 1}!");
static const u8 sText_Trainer2SentOutPkmn[] = _("{B_TRAINER2_CLASS} {B_TRAINER2_NAME} sent\nout {B_BUFF1}!");
static const u8 sText_TwoTrainersWantToBattle[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME} and\n{B_TRAINER2_CLASS} {B_TRAINER2_NAME}\lwant to battle!\p");
static const u8 sText_InGamePartnerSentOutZGoN[] = _("{B_PARTNER_CLASS} {B_PARTNER_NAME} sent\nout {B_PLAYER_MON2_NAME}!\lGo, {B_PLAYER_MON1_NAME}!");
static const u8 sText_TwoInGameTrainersDefeated[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME} and\n{B_TRAINER2_CLASS} {B_TRAINER2_NAME}\lwere defeated!\p");
static const u8 sText_Trainer2LoseText[] = _("{B_TRAINER2_LOSE_TEXT}");
static const u8 sText_PkmnIncapableOfPower[] = _("{COLOR 4}{B_ATK_NAME_WITH_PREFIX}{COLOR 1} appears incapable\nof using its power!");
static const u8 sText_GlintAppearsInEye[] = _("A glint appears in\n{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s eyes!");
static const u8 sText_PkmnGettingIntoPosition[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} is getting into\nposition!");
static const u8 sText_PkmnBeganGrowlingDeeply[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} began growling deeply!");
static const u8 sText_PkmnEagerForMore[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} is eager for more!");

const u16 gBattlePalaceFlavorTextTable[] =
{
    [B_MSG_GLINT_IN_EYE]   = STRINGID_GLINTAPPEARSINEYE,
    [B_MSG_GETTING_IN_POS] = STRINGID_PKMNGETTINGINTOPOSITION,
    [B_MSG_GROWL_DEEPLY]   = STRINGID_PKMNBEGANGROWLINGDEEPLY,
    [B_MSG_EAGER_FOR_MORE] = STRINGID_PKMNEAGERFORMORE,
};

static const u8 sText_RefIfNothingIsDecided[] = _("REFEREE: If nothing is decided in\n3 turns, we will go to judging!");
static const u8 sText_RefThatsIt[] = _("REFEREE: That's it! We will now go to\njudging to determine the winner!");
static const u8 sText_RefJudgeMind[] = _("REFEREE: Judging category 1, Mind!\nThe POKéMON showing the most guts!\p");
static const u8 sText_RefJudgeSkill[] = _("REFEREE: Judging category 2, Skill!\nThe POKéMON using moves the best!\p");
static const u8 sText_RefJudgeBody[] = _("REFEREE: Judging category 3, Body!\nThe POKéMON with the most vitality!\p");
static const u8 sText_RefPlayerWon[] = _("REFEREE: Judgment: {B_BUFF1} to {B_BUFF2}!\nThe winner is {COLOR_PLAYER}{B_PLAYER_NAME}{COLOR WHITE}'s {B_PLAYER_MON1_NAME}!\p");
static const u8 sText_RefOpponentWon[] = _("REFEREE: Judgment: {B_BUFF1} to {B_BUFF2}!\nThe winner is {B_TRAINER1_NAME}'s {COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1}!\p");
static const u8 sText_RefDraw[] = _("REFEREE: Judgment: 3 to 3!\nWe have a draw!\p");
static const u8 sText_DefeatedOpponentByReferee[] = _("{B_PLAYER_MON1_NAME} defeated the opponent\n{COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1} in a REFEREE's decision!");
static const u8 sText_LostToOpponentByReferee[] = _("{B_PLAYER_MON1_NAME} lost to the opponent\n{COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1} in a REFEREE's decision!");
static const u8 sText_TiedOpponentByReferee[] = _("{B_PLAYER_MON1_NAME} tied the opponent\n{COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1} in a REFEREE's decision!");
static const u8 sText_RefCommenceBattle[] = _("REFEREE: {B_PLAYER_MON1_NAME} VS {COLOR 4}{B_OPPONENT_MON1_NAME}{COLOR 1}!\nCommence battling!");

const u8 * const gRefereeStringsTable[] =
{
    [B_MSG_REF_NOTHING_IS_DECIDED] = sText_RefIfNothingIsDecided,
    [B_MSG_REF_THATS_IT]           = sText_RefThatsIt,
    [B_MSG_REF_JUDGE_MIND]         = sText_RefJudgeMind,
    [B_MSG_REF_JUDGE_SKILL]        = sText_RefJudgeSkill,
    [B_MSG_REF_JUDGE_BODY]         = sText_RefJudgeBody,
    [B_MSG_REF_PLAYER_WON]         = sText_RefPlayerWon,
    [B_MSG_REF_OPPONENT_WON]       = sText_RefOpponentWon,
    [B_MSG_REF_DRAW]               = sText_RefDraw,
    [B_MSG_REF_COMMENCE_BATTLE]    = sText_RefCommenceBattle,
};

static const u8 sText_QuestionForfeitMatch[] = _("Would you like to forfeit the match\nand quit now?");
static const u8 sText_ForfeitedMatch[] = _("{COLOR_PLAYER}{B_PLAYER_NAME}{COLOR WHITE} forfeited the match!");
static const u8 sText_Trainer1WinText[] = _("{B_TRAINER1_WIN_TEXT}");
static const u8 sText_Trainer2WinText[] = _("{B_TRAINER2_WIN_TEXT}");
static const u8 sText_Trainer1Fled[] = _( "{PLAY_SE SE_FLEE}{B_TRAINER1_CLASS} {B_TRAINER1_NAME} fled!");
static const u8 sText_PlayerLostAgainstTrainer1[] = _("Player lost against\n{B_TRAINER1_CLASS} {B_TRAINER1_NAME}!");
static const u8 sText_PlayerBattledToDrawTrainer1[] = _("Player battled to a draw against\n{B_TRAINER1_CLASS} {B_TRAINER1_NAME}!");
const u8 gText_RecordBattleToPass[] = _("Would you like to record your battle\non your FRONTIER PASS?");
const u8 gText_BattleRecordedOnPass[] = _("{COLOR_PLAYER}{B_PLAYER_NAME}{COLOR WHITE}'s battle result was recorded\non the FRONTIER PASS.");
static const u8 sText_LinkTrainerWantsToBattlePause[] = _("{B_LINK_OPPONENT1_NAME}\nwants to battle!{PAUSE 49}");
static const u8 sText_TwoLinkTrainersWantToBattlePause[] = _("{B_LINK_OPPONENT1_NAME} and {B_LINK_OPPONENT2_NAME}\nwant to battle!{PAUSE 49}");
static const u8 sText_Your1[] = _("Your");
static const u8 sText_Opposing1[] = _("The opposing");
static const u8 sText_Your2[] = _("your");
static const u8 sText_Opposing2[] = _("the opposing");

// This is four lists of moves which use a different attack string in Japanese
// to the default. See the documentation for ChooseTypeOfMoveUsedString for more detail.
static const u16 sGrammarMoveUsedTable[] =
{
    MOVE_SWORDS_DANCE, MOVE_STRENGTH, MOVE_GROWTH,
    MOVE_HARDEN, MOVE_MINIMIZE, MOVE_SMOKESCREEN,
    MOVE_WITHDRAW, MOVE_DEFENSE_CURL, MOVE_EGG_BOMB,
    MOVE_SMOG, MOVE_BONE_CLUB, MOVE_FLASH, MOVE_SPLASH,
    MOVE_ACID_ARMOR, MOVE_BONEMERANG, MOVE_REST, MOVE_SHARPEN,
    MOVE_SUBSTITUTE, MOVE_MIND_READER, MOVE_SNORE,
    MOVE_PROTECT, MOVE_SPIKES, MOVE_ENDURE, MOVE_ROLLOUT,
    MOVE_SWAGGER, MOVE_SLEEP_TALK, MOVE_HIDDEN_POWER,
    MOVE_PSYCH_UP, MOVE_EXTREME_SPEED, MOVE_FOLLOW_ME,
    MOVE_TRICK, MOVE_ASSIST, MOVE_INGRAIN, MOVE_KNOCK_OFF,
    MOVE_CAMOUFLAGE, MOVE_ASTONISH, MOVE_ODOR_SLEUTH,
    MOVE_GRASS_WHISTLE, MOVE_SHEER_COLD, MOVE_MUDDY_WATER,
    MOVE_IRON_DEFENSE, MOVE_BOUNCE, 0,

    MOVE_TELEPORT, MOVE_RECOVER, MOVE_BIDE, MOVE_AMNESIA,
    MOVE_FLAIL, MOVE_TAUNT, MOVE_BULK_UP, 0,

    MOVE_MEDITATE, MOVE_AGILITY, MOVE_MIMIC, MOVE_DOUBLE_TEAM,
    MOVE_BARRAGE, MOVE_TRANSFORM, MOVE_STRUGGLE, MOVE_SCARY_FACE,
    MOVE_CHARGE, MOVE_WISH, MOVE_BRICK_BREAK, MOVE_YAWN,
    MOVE_FEATHER_DANCE, MOVE_TEETER_DANCE, MOVE_MUD_SPORT,
    MOVE_FAKE_TEARS, MOVE_WATER_SPORT, MOVE_CALM_MIND, 0,

    MOVE_POUND, MOVE_SCRATCH, MOVE_VISE_GRIP,
    MOVE_WING_ATTACK, MOVE_FLY, MOVE_BIND, MOVE_SLAM,
    MOVE_HORN_ATTACK, MOVE_WRAP, MOVE_THRASH, MOVE_TAIL_WHIP,
    MOVE_LEER, MOVE_BITE, MOVE_GROWL, MOVE_ROAR,
    MOVE_SING, MOVE_PECK, MOVE_ABSORB, MOVE_STRING_SHOT,
    MOVE_EARTHQUAKE, MOVE_FISSURE, MOVE_DIG, MOVE_TOXIC,
    MOVE_SCREECH, MOVE_METRONOME, MOVE_LICK, MOVE_CLAMP,
    MOVE_CONSTRICT, MOVE_POISON_GAS, MOVE_BUBBLE,
    MOVE_SLASH, MOVE_SPIDER_WEB, MOVE_NIGHTMARE, MOVE_CURSE,
    MOVE_FORESIGHT, MOVE_CHARM, MOVE_ATTRACT, MOVE_ROCK_SMASH,
    MOVE_UPROAR, MOVE_SPIT_UP, MOVE_SWALLOW, MOVE_TORMENT,
    MOVE_FLATTER, MOVE_ROLE_PLAY, MOVE_ENDEAVOR, MOVE_TICKLE,
    MOVE_COVET, 0
};

static const u8 sDummyWeirdStatusString[] = {EOS, EOS, EOS, EOS, EOS, EOS, EOS, EOS, 0, 0};

static const struct BattleWindowText sTextOnWindowsInfo_Normal[] =
{
    [B_WIN_MSG] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 1,
        .fgColor = TEXT_COLOR_WHITE,
        .bgColor = TEXT_DYNAMIC_COLOR_6,
        .shadowColor = TEXT_COLOR_GREEN,
    },
    [B_WIN_ACTION_PROMPT] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 1,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_COLOR_WHITE,
        .bgColor = TEXT_DYNAMIC_COLOR_6,
        .shadowColor = TEXT_COLOR_GREEN,
    },
    [B_WIN_ACTION_MENU] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_MOVE_NAME_1] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_MOVE_NAME_2] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_MOVE_NAME_3] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_MOVE_NAME_4] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_PP] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_3,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_2,
    },
    [B_WIN_DUMMY] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_PP_REMAINING] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 2,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_3,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_2,
    },
    [B_WIN_MOVE_TYPE] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_SWITCH_PROMPT] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_YESNO] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_LEVEL_UP_BOX] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_LEVEL_UP_BANNER] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = 32,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_COLOR_WHITE,
        .bgColor = TEXT_COLOR_TRANSPARENT,
        .shadowColor = TEXT_COLOR_DARK_GRAY,
    },
    [B_WIN_VS_PLAYER] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_VS_OPPONENT] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_VS_MULTI_PLAYER_1] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_VS_MULTI_PLAYER_2] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_VS_MULTI_PLAYER_3] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_VS_MULTI_PLAYER_4] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_VS_OUTCOME_DRAW] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_COLOR_WHITE,
        .bgColor = TEXT_COLOR_TRANSPARENT,
        .shadowColor = TEXT_COLOR_GREEN,
    },
    [B_WIN_VS_OUTCOME_LEFT] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_COLOR_WHITE,
        .bgColor = TEXT_COLOR_TRANSPARENT,
        .shadowColor = TEXT_COLOR_GREEN,
    },
    [B_WIN_VS_OUTCOME_RIGHT] = {
        .fillValue = PIXEL_FILL(0x0),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_COLOR_WHITE,
        .bgColor = TEXT_COLOR_TRANSPARENT,
        .shadowColor = TEXT_COLOR_GREEN,
    },
};

static const struct BattleWindowText sTextOnWindowsInfo_Arena[] =
{
    [B_WIN_MSG] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 1,
        .fgColor = TEXT_COLOR_WHITE,
        .bgColor = TEXT_DYNAMIC_COLOR_6,
        .shadowColor = TEXT_COLOR_GREEN,
    },
    [B_WIN_ACTION_PROMPT] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 1,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_COLOR_WHITE,
        .bgColor = TEXT_DYNAMIC_COLOR_6,
        .shadowColor = TEXT_COLOR_GREEN,
    },
    [B_WIN_ACTION_MENU] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_MOVE_NAME_1] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_MOVE_NAME_2] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_MOVE_NAME_3] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_MOVE_NAME_4] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_PP] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_3,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_2,
    },
    [B_WIN_DUMMY] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_PP_REMAINING] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 2,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_3,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_2,
    },
    [B_WIN_MOVE_TYPE] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_SWITCH_PROMPT] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_YESNO] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_LEVEL_UP_BOX] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_LEVEL_UP_BANNER] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = 32,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_COLOR_WHITE,
        .bgColor = TEXT_COLOR_TRANSPARENT,
        .shadowColor = TEXT_COLOR_DARK_GRAY,
    },
    [ARENA_WIN_PLAYER_NAME] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_COLOR_WHITE,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [ARENA_WIN_VS] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [ARENA_WIN_OPPONENT_NAME] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [ARENA_WIN_MIND] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [ARENA_WIN_SKILL] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [ARENA_WIN_BODY] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [ARENA_WIN_JUDGEMENT_TITLE] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
    [ARENA_WIN_JUDGEMENT_TEXT] = {
        .fillValue = PIXEL_FILL(0x1),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 1,
        .fgColor = TEXT_COLOR_DARK_GRAY,
        .bgColor = TEXT_COLOR_WHITE,
        .shadowColor = TEXT_COLOR_LIGHT_GRAY,
    },
};

static const struct BattleWindowText *const sBattleTextOnWindowsInfo[] =
{
    [B_WIN_TYPE_NORMAL] = sTextOnWindowsInfo_Normal,
    [B_WIN_TYPE_ARENA]  = sTextOnWindowsInfo_Arena
};

static const u8 sRecordedBattleTextSpeeds[] = {8, 4, 1, 0};

void BufferStringBattle(u16 stringID)
{
    s32 i;
    const u8 *stringPtr = NULL;

    gBattleMsgDataPtr = (struct BattleMsgData*)(&gBattleResources->bufferA[gActiveBattler][4]);
    gLastUsedItem = gBattleMsgDataPtr->lastItem;
    gLastUsedAbility = gBattleMsgDataPtr->lastAbility;
    gBattleScripting.battler = gBattleMsgDataPtr->scrActive;
    gBattleStruct->field_52 = gBattleMsgDataPtr->unk1605E;
    gBattleStruct->hpScale = gBattleMsgDataPtr->hpScale;
    gPotentialItemEffectBattler = gBattleMsgDataPtr->itemEffectBattler;
    gBattleStruct->stringMoveType = gBattleMsgDataPtr->moveType;

    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
    {
        sBattlerAbilities[i] = gBattleMsgDataPtr->abilities[i];
    }
    for (i = 0; i < TEXT_BUFF_ARRAY_COUNT; i++)
    {
        gBattleTextBuff1[i] = gBattleMsgDataPtr->textBuffs[0][i];
        gBattleTextBuff2[i] = gBattleMsgDataPtr->textBuffs[1][i];
        gBattleTextBuff3[i] = gBattleMsgDataPtr->textBuffs[2][i];
    }

    switch (stringID)
    {
    case STRINGID_INTROMSG: // first battle msg
        if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
        {
            if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            {
                if (gBattleTypeFlags & BATTLE_TYPE_TOWER_LINK_MULTI)
                {
                    stringPtr = sText_TwoTrainersWantToBattle;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                {
                    if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
                        stringPtr = sText_TwoLinkTrainersWantToBattlePause;
                    else
                        stringPtr = sText_TwoLinkTrainersWantToBattle;
                }
                else
                {
                    if (gTrainerBattleOpponent_A == TRAINER_UNION_ROOM)
                        stringPtr = sText_Trainer1WantsToBattle;
                    else if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
                        stringPtr = sText_LinkTrainerWantsToBattlePause;
                    else
                        stringPtr = sText_LinkTrainerWantsToBattle;
                }
            }
            else
            {
                if (BATTLE_TWO_VS_ONE_OPPONENT)
                    stringPtr = sText_Trainer1WantsToBattle;
                else if (gBattleTypeFlags & (BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER))
                    stringPtr = sText_TwoTrainersWantToBattle;
                else if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                    stringPtr = sText_TwoTrainersWantToBattle;
                else
                    stringPtr = sText_Trainer1WantsToBattle;
            }
        }
        else
        {
            if (gBattleTypeFlags & BATTLE_TYPE_LEGENDARY)
                stringPtr = sText_LegendaryPkmnAppeared;
            else if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE && IsValidForBattle(&gEnemyParty[gBattlerPartyIndexes[gActiveBattler ^ BIT_FLANK]])) // interesting, looks like they had something planned for wild double battles
                stringPtr = sText_TwoWildPkmnAppeared;
            else if (gBattleTypeFlags & BATTLE_TYPE_WALLY_TUTORIAL)
                stringPtr = sText_WildPkmnAppearedPause;
            else
                stringPtr = sText_WildPkmnAppeared;
        }
        break;
    case STRINGID_INTROSENDOUT: // poke first send-out
        if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
        {
            if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE && IsValidForBattle(&gPlayerParty[gBattlerPartyIndexes[gActiveBattler ^ BIT_FLANK]]))
            {
                if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
                    stringPtr = sText_InGamePartnerSentOutZGoN;
                else if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                    stringPtr = sText_GoTwoPkmn;
                else if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                    stringPtr = sText_LinkPartnerSentOutPkmnGoPkmn;
                else
                    stringPtr = sText_GoTwoPkmn;
            }
            else
            {
                stringPtr = sText_GoPkmn;
            }
        }
        else
        {
            if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE && IsValidForBattle(&gEnemyParty[gBattlerPartyIndexes[gActiveBattler ^ BIT_FLANK]]))
            {
                if (BATTLE_TWO_VS_ONE_OPPONENT)
                    stringPtr = sText_Trainer1SentOutTwoPkmn;
                else if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                    stringPtr = sText_TwoTrainersSentPkmn;
                else if (gBattleTypeFlags & BATTLE_TYPE_TOWER_LINK_MULTI)
                    stringPtr = sText_TwoTrainersSentPkmn;
                else if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                    stringPtr = sText_TwoLinkTrainersSentOutPkmn;
                else if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
                    stringPtr = sText_LinkTrainerSentOutTwoPkmn;
                else
                    stringPtr = sText_Trainer1SentOutTwoPkmn;
            }
            else
            {
                if (!(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK)))
                    stringPtr = sText_Trainer1SentOutPkmn;
                else if (gTrainerBattleOpponent_A == TRAINER_UNION_ROOM)
                    stringPtr = sText_Trainer1SentOutPkmn;
                else
                    stringPtr = sText_LinkTrainerSentOutPkmn;
            }
        }
        break;
    case STRINGID_RETURNMON: // sending poke to ball msg
        if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
        {
            if (*(&gBattleStruct->hpScale) == 0)
                stringPtr = sText_PkmnThatsEnough;
            else if (*(&gBattleStruct->hpScale) == 1 || gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
                stringPtr = sText_PkmnComeBack;
            else if (*(&gBattleStruct->hpScale) == 2)
                stringPtr = sText_PkmnOkComeBack;
            else
                stringPtr = sText_PkmnGoodComeBack;
        }
        else
        {
            if (gTrainerBattleOpponent_A == TRAINER_LINK_OPPONENT || gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
            {
                if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                    stringPtr = sText_LinkTrainer2WithdrewPkmn;
                else
                    stringPtr = sText_LinkTrainer1WithdrewPkmn;
            }
            else
            {
                stringPtr = sText_Trainer1WithdrewPkmn;
            }
        }
        break;
    case STRINGID_SWITCHINMON: // switch-in msg
        if (GetBattlerSide(gBattleScripting.battler) == B_SIDE_PLAYER)
        {
            if (*(&gBattleStruct->hpScale) == 0 || gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
                stringPtr = sText_GoPkmn2;
            else if (*(&gBattleStruct->hpScale) == 1)
                stringPtr = sText_DoItPkmn;
            else if (*(&gBattleStruct->hpScale) == 2)
                stringPtr = sText_GoForItPkmn;
            else
                stringPtr = sText_YourFoesWeakGetEmPkmn;
        }
        else
        {
            if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            {
                if (gBattleTypeFlags & BATTLE_TYPE_TOWER_LINK_MULTI)
                {
                    if (gBattleScripting.battler == 1)
                        stringPtr = sText_Trainer1SentOutPkmn2;
                    else
                        stringPtr = sText_Trainer2SentOutPkmn;
                }
                else
                {
                    if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                        stringPtr = sText_LinkTrainerMultiSentOutPkmn;
                    else if (gTrainerBattleOpponent_A == TRAINER_UNION_ROOM)
                        stringPtr = sText_Trainer1SentOutPkmn2;
                    else
                        stringPtr = sText_LinkTrainerSentOutPkmn2;
                }
            }
            else
            {
                if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                {
                    if (gBattleScripting.battler == 1)
                        stringPtr = sText_Trainer1SentOutPkmn2;
                    else
                        stringPtr = sText_Trainer2SentOutPkmn;
                }
                else
                {
                    stringPtr = sText_Trainer1SentOutPkmn2;
                }
            }
        }
        break;
    case STRINGID_USEDMOVE: // pokemon used a move msg
        if (gBattleMsgDataPtr->currentMove >= MOVES_COUNT)
            StringCopy(gBattleTextBuff3, sATypeMove_Table[*(&gBattleStruct->stringMoveType)]);
        else
            StringCopy(gBattleTextBuff3, gLongMoveNames[gBattleMsgDataPtr->currentMove]);

        stringPtr = sText_AttackerUsedX;
        break;
    case STRINGID_BATTLEEND: // battle end
        if (gBattleTextBuff1[0] & B_OUTCOME_LINK_BATTLE_RAN)
        {
            gBattleTextBuff1[0] &= ~(B_OUTCOME_LINK_BATTLE_RAN);
            if (GetBattlerSide(gActiveBattler) == B_SIDE_OPPONENT && gBattleTextBuff1[0] != B_OUTCOME_DREW)
                gBattleTextBuff1[0] ^= (B_OUTCOME_LOST | B_OUTCOME_WON);

            if (gBattleTextBuff1[0] == B_OUTCOME_LOST || gBattleTextBuff1[0] == B_OUTCOME_DREW)
                stringPtr = sText_GotAwaySafely;
            else if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                stringPtr = sText_TwoWildFled;
            else
                stringPtr = sText_WildFled;
        }
        else
        {
            if (GetBattlerSide(gActiveBattler) == B_SIDE_OPPONENT && gBattleTextBuff1[0] != B_OUTCOME_DREW)
                gBattleTextBuff1[0] ^= (B_OUTCOME_LOST | B_OUTCOME_WON);

            if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
            {
                switch (gBattleTextBuff1[0])
                {
                case B_OUTCOME_WON:
                    if (gBattleTypeFlags & BATTLE_TYPE_TOWER_LINK_MULTI)
                        stringPtr = sText_TwoInGameTrainersDefeated;
                    else
                        stringPtr = sText_TwoLinkTrainersDefeated;
                    break;
                case B_OUTCOME_LOST:
                    stringPtr = sText_PlayerLostToTwo;
                    break;
                case B_OUTCOME_DREW:
                    stringPtr = sText_PlayerBattledToDrawVsTwo;
                    break;
                }
            }
            else if (gTrainerBattleOpponent_A == TRAINER_UNION_ROOM)
            {
                switch (gBattleTextBuff1[0])
                {
                case B_OUTCOME_WON:
                    stringPtr = sText_PlayerDefeatedLinkTrainerTrainer1;
                    break;
                case B_OUTCOME_LOST:
                    stringPtr = sText_PlayerLostAgainstTrainer1;
                    break;
                case B_OUTCOME_DREW:
                    stringPtr = sText_PlayerBattledToDrawTrainer1;
                    break;
                }
            }
            else
            {
                switch (gBattleTextBuff1[0])
                {
                case B_OUTCOME_WON:
                    stringPtr = sText_PlayerDefeatedLinkTrainer;
                    break;
                case B_OUTCOME_LOST:
                    stringPtr = sText_PlayerLostAgainstLinkTrainer;
                    break;
                case B_OUTCOME_DREW:
                    stringPtr = sText_PlayerBattledToDrawLinkTrainer;
                    break;
                }
            }
        }
        break;
    case STRINGID_TRAINERSLIDE:
        stringPtr = gBattleStruct->trainerSlideMsg;
        break;
    default: // load a string from the table
        if (stringID >= BATTLESTRINGS_COUNT)
        {
            gDisplayedStringBattle[0] = EOS;
            return;
        }
        else
        {
            stringPtr = gBattleStringsTable[stringID - BATTLESTRINGS_TABLE_START];
        }
        break;
    }

    BattleStringExpandPlaceholdersToDisplayedString(stringPtr);
}

u32 BattleStringExpandPlaceholdersToDisplayedString(const u8* src)
{
    BattleStringExpandPlaceholders(src, gDisplayedStringBattle);
}

static const u8* TryGetStatusString(u8 *src)
{
    u32 i;
    u8 status[8];
    u32 chars1, chars2;
    u8* statusPtr;

    memcpy(status, sDummyWeirdStatusString, 8);

    statusPtr = status;
    for (i = 0; i < 8; i++)
    {
        if (*src == EOS) break; // one line required to match -g
        *statusPtr = *src;
        src++;
        statusPtr++;
    }

    chars1 = *(u32*)(&status[0]);
    chars2 = *(u32*)(&status[4]);

    for (i = 0; i < ARRAY_COUNT(gStatusConditionStringsTable); i++)
    {
        if (chars1 == *(u32*)(&gStatusConditionStringsTable[i][0][0])
            && chars2 == *(u32*)(&gStatusConditionStringsTable[i][0][4]))
            return gStatusConditionStringsTable[i][1];
    }
    return NULL;
}

static void GetBattlerNick(u32 battlerId, u8 *dst)
{
    struct Pokemon *mon, *illusionMon;

    if (GET_BATTLER_SIDE(battlerId) == B_SIDE_PLAYER)
        mon = &gPlayerParty[gBattlerPartyIndexes[battlerId]];
    else
        mon = &gEnemyParty[gBattlerPartyIndexes[battlerId]];

    illusionMon = GetIllusionMonPtr(battlerId);
    if (illusionMon != NULL)
        mon = illusionMon;
    GetMonData(mon, MON_DATA_NICKNAME, dst);
    StringGet_Nickname(dst);
}

#define HANDLE_NICKNAME_STRING_CASE(battlerId, monIndex)                \
    if (GetBattlerSide(battlerId) != B_SIDE_PLAYER)                     \
    {                                                                   \
        GetMonData(&gEnemyParty[monIndex], MON_DATA_NICKNAME, text);    \
		GetBattlerNick(battlerId, text);											\
		toCpy = text;													\
        while (*toCpy != EOS)                                           \
        {                                                               \
            dst[dstID] = *toCpy;                                        \
            dstID++;                                                    \
            toCpy++;                                                    \
        }																\
		 if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)                    \
            toCpy = sText_FoePkmnPrefix;                                \
        else                                                            \
            toCpy = sText_WildPkmnPrefix;                               \
    }                                                                   \
    else                                                                \
    {                                                                   \
        GetMonData(&gPlayerParty[monIndex], MON_DATA_NICKNAME, text);   \
    GetBattlerNick(battlerId, text);                                               \
	toCpy = text;														\
	}



static const u8 *BattleStringGetOpponentNameByTrainerId(u16 trainerId, u8 *text, u8 multiplayerId, u8 battlerId)
{
    const u8 *toCpy;

    if (gBattleTypeFlags & BATTLE_TYPE_SECRET_BASE)
    {
        u32 i;
        for (i = 0; i < ARRAY_COUNT(gBattleResources->secretBase->trainerName); i++)
            text[i] = gBattleResources->secretBase->trainerName[i];
        text[i] = EOS;
        ConvertInternationalString(text, gBattleResources->secretBase->language);
        toCpy = text;
    }
    else if (trainerId == TRAINER_UNION_ROOM)
    {
        toCpy = gLinkPlayers[multiplayerId ^ BIT_SIDE].name;
    }
    else if (trainerId == TRAINER_LINK_OPPONENT)
    {
        if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
            toCpy = gLinkPlayers[GetBattlerMultiplayerId(battlerId)].name;
        else
            toCpy = gLinkPlayers[GetBattlerMultiplayerId(battlerId) & BIT_SIDE].name;
    }
    else if (trainerId == TRAINER_FRONTIER_BRAIN)
    {
        CopyFrontierBrainTrainerName(text);
        toCpy = text;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
    {
        GetFrontierTrainerName(text, trainerId);
        toCpy = text;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
    {
        GetTrainerHillTrainerName(text, trainerId);
        toCpy = text;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_EREADER_TRAINER)
    {
        GetEreaderTrainerName(text);
        toCpy = text;
    }
    else
    {
        toCpy = gTrainers[trainerId].trainerName;
    }

    return toCpy;
}

static const u8 *BattleStringGetOpponentName(u8 *text, u8 multiplayerId, u8 battlerId)
{
    const u8 *toCpy;

    switch (GetBattlerPosition(battlerId))
    {
    case B_POSITION_OPPONENT_LEFT:
        toCpy = BattleStringGetOpponentNameByTrainerId(gTrainerBattleOpponent_A, text, multiplayerId, battlerId);
        break;
    case B_POSITION_OPPONENT_RIGHT:
        if (gBattleTypeFlags & (BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_MULTI) && !BATTLE_TWO_VS_ONE_OPPONENT)
            toCpy = BattleStringGetOpponentNameByTrainerId(gTrainerBattleOpponent_B, text, multiplayerId, battlerId);
        else
            toCpy = BattleStringGetOpponentNameByTrainerId(gTrainerBattleOpponent_A, text, multiplayerId, battlerId);
        break;
    }

    return toCpy;
}

static const u8 *BattleStringGetPlayerName(u8 *text, u8 battlerId)
{
    const u8 *toCpy;

    switch (GetBattlerPosition(battlerId))
    {
    case B_POSITION_PLAYER_LEFT:
        if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
            toCpy = gLinkPlayers[0].name;
        else
            toCpy = gSaveBlock2Ptr->playerName;
        break;
    case B_POSITION_PLAYER_RIGHT:
        if (gBattleTypeFlags & BATTLE_TYPE_LINK && gBattleTypeFlags & (BATTLE_TYPE_RECORDED | BATTLE_TYPE_MULTI))
        {
            toCpy = gLinkPlayers[2].name;
        }
        else if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
        {
            GetFrontierTrainerName(text, gPartnerTrainerId);
            toCpy = text;
        }
        else
        {
            toCpy = gSaveBlock2Ptr->playerName;
        }
        break;
    }

    return toCpy;
}

static const u8 *BattleStringGetTrainerName(u8 *text, u8 multiplayerId, u8 battlerId)
{
    if (GetBattlerSide(battlerId) == B_SIDE_PLAYER)
        return BattleStringGetPlayerName(text, battlerId);
    else
        return BattleStringGetOpponentName(text, multiplayerId, battlerId);
}

static const u8 *BattleStringGetOpponentClassByTrainerId(u16 trainerId)
{
    const u8 *toCpy;

    if (gBattleTypeFlags & BATTLE_TYPE_SECRET_BASE)
        toCpy = gTrainerClassNames[GetSecretBaseTrainerClass()];
    else if (trainerId == TRAINER_UNION_ROOM)
        toCpy = gTrainerClassNames[GetUnionRoomTrainerClass()];
    else if (trainerId == TRAINER_FRONTIER_BRAIN)
        toCpy = gTrainerClassNames[GetFrontierBrainTrainerClass()];
    else if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
        toCpy = gTrainerClassNames[GetFrontierOpponentClass(trainerId)];
    else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
        toCpy = gTrainerClassNames[GetTrainerHillOpponentClass(trainerId)];
    else if (gBattleTypeFlags & BATTLE_TYPE_EREADER_TRAINER)
        toCpy = gTrainerClassNames[GetEreaderTrainerClassId()];
    else
        toCpy = gTrainerClassNames[gTrainers[trainerId].trainerClass];

    return toCpy;
}

u32 BattleStringExpandPlaceholders(const u8 *src, u8 *dst)
{
    u32 dstID = 0; // if they used dstID, why not use srcID as well?
    const u8 *toCpy = NULL;
    u8 text[30];
    u8 multiplayerId;
    s32 i;

    if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
        multiplayerId = gRecordedBattleMultiplayerId;
    else
        multiplayerId = GetMultiplayerId();

    while (*src != EOS)
    {
        toCpy = NULL;
        if (*src == PLACEHOLDER_BEGIN)
        {
            src++;
            switch (*src)
            {
            case B_TXT_BUFF1:
                if (gBattleTextBuff1[0] == B_BUFF_PLACEHOLDER_BEGIN)
                {
                    ExpandBattleTextBuffPlaceholders(gBattleTextBuff1, gStringVar1);
                    toCpy = gStringVar1;
                }
                else
                {
                    toCpy = TryGetStatusString(gBattleTextBuff1);
                    if (toCpy == NULL)
                        toCpy = gBattleTextBuff1;
                }
                break;
            case B_TXT_BUFF2:
                if (gBattleTextBuff2[0] == B_BUFF_PLACEHOLDER_BEGIN)
                {
                    ExpandBattleTextBuffPlaceholders(gBattleTextBuff2, gStringVar2);
                    toCpy = gStringVar2;
                }
                else
                    toCpy = gBattleTextBuff2;
                break;
            case B_TXT_BUFF3:
                if (gBattleTextBuff3[0] == B_BUFF_PLACEHOLDER_BEGIN)
                {
                    ExpandBattleTextBuffPlaceholders(gBattleTextBuff3, gStringVar3);
                    toCpy = gStringVar3;
                }
                else
                    toCpy = gBattleTextBuff3;
                break;
            case B_TXT_COPY_VAR_1:
                toCpy = gStringVar1;
                break;
            case B_TXT_COPY_VAR_2:
                toCpy = gStringVar2;
                break;
            case B_TXT_COPY_VAR_3:
                toCpy = gStringVar3;
                break;
            case B_TXT_PLAYER_MON1_NAME: // first player poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_PLAYER_LEFT), text);
                toCpy = text;
                break;
            case B_TXT_OPPONENT_MON1_NAME: // first enemy poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), text);
                toCpy = text;
                break;
            case B_TXT_PLAYER_MON2_NAME: // second player poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT), text);
                toCpy = text;
                break;
            case B_TXT_OPPONENT_MON2_NAME: // second enemy poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT), text);
                toCpy = text;
                break;
            case B_TXT_LINK_PLAYER_MON1_NAME: // link first player poke name
                GetBattlerNick(gLinkPlayers[multiplayerId].id, text);
                toCpy = text;
                break;
            case B_TXT_LINK_OPPONENT_MON1_NAME: // link first opponent poke name
                GetBattlerNick(gLinkPlayers[multiplayerId].id ^ 1, text);
                toCpy = text;
                break;
            case B_TXT_LINK_PLAYER_MON2_NAME: // link second player poke name
                GetBattlerNick(gLinkPlayers[multiplayerId].id ^ 2, text);
                toCpy = text;
                break;
            case B_TXT_LINK_OPPONENT_MON2_NAME: // link second opponent poke name
                GetBattlerNick(gLinkPlayers[multiplayerId].id ^ 3, text);
                toCpy = text;
                break;
            case B_TXT_ATK_NAME_WITH_PREFIX_MON1: // Unused, to change into sth else.
                break;
            case B_TXT_ATK_PARTNER_NAME: // attacker partner name
                GetBattlerNick(BATTLE_PARTNER(gBattlerAttacker), text);
                toCpy = text;
                break;
            case B_TXT_ATK_NAME_WITH_PREFIX: // attacker name with prefix
                HANDLE_NICKNAME_STRING_CASE(gBattlerAttacker, gBattlerPartyIndexes[gBattlerAttacker])
                break;
            case B_TXT_DEF_NAME_WITH_PREFIX: // target name with prefix
                HANDLE_NICKNAME_STRING_CASE(gBattlerTarget, gBattlerPartyIndexes[gBattlerTarget])
                break;
            case B_TXT_DEF_NAME: // target name
                GetBattlerNick(gBattlerTarget, text);
                toCpy = text;
                break;
            case B_TXT_ACTIVE_NAME: // active name
                GetBattlerNick(gActiveBattler, text);
                toCpy = text;
                break;
            case B_TXT_ACTIVE_NAME2: // active battlerId name with prefix, no illusion
                if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
                    GetMonData(&gPlayerParty[gBattlerPartyIndexes[gActiveBattler]], MON_DATA_NICKNAME, text);
                else
                    GetMonData(&gEnemyParty[gBattlerPartyIndexes[gActiveBattler]], MON_DATA_NICKNAME, text);
                StringGet_Nickname(text);
                toCpy = text;
                break;
            case B_TXT_EFF_NAME_WITH_PREFIX: // effect battlerId name with prefix
                HANDLE_NICKNAME_STRING_CASE(gEffectBattler, gBattlerPartyIndexes[gEffectBattler])
                break;
            case B_TXT_ACTIVE_NAME_WITH_PREFIX: // active battlerId name with prefix
                HANDLE_NICKNAME_STRING_CASE(gActiveBattler, gBattlerPartyIndexes[gActiveBattler])
                break;
            case B_TXT_SCR_ACTIVE_NAME_WITH_PREFIX: // scripting active battlerId name with prefix
                HANDLE_NICKNAME_STRING_CASE(gBattleScripting.battler, gBattlerPartyIndexes[gBattleScripting.battler])
                break;
			case B_TXT_TARGET_OF_REVIVE: 
	         toCpy = sText_FoePkmnPrefix;
	         while (*toCpy != EOS)
	         {
		        dst[dstID] = *toCpy;
				dstID++;
				toCpy++;
			}
			GetMonData(&gEnemyParty[gBattleStruct->wildVictorySong], MON_DATA_NICKNAME, text);
			gBattleStruct->wildVictorySong = 0;
			StringGet_Nickname(text);
					toCpy = text;
			break;

            case B_TXT_CURRENT_MOVE: // current move name
                if (gBattleMsgDataPtr->currentMove >= MOVES_COUNT)
                    toCpy = sATypeMove_Table[gBattleStruct->stringMoveType];
                else
                    toCpy = gLongMoveNames[gBattleMsgDataPtr->currentMove];
                break;
            case B_TXT_LAST_MOVE: // originally used move name
                if (gBattleMsgDataPtr->originallyUsedMove >= MOVES_COUNT)
                    toCpy = sATypeMove_Table[gBattleStruct->stringMoveType];
                else
                    toCpy = gLongMoveNames[gBattleMsgDataPtr->originallyUsedMove];
                break;
            case B_TXT_LAST_ITEM: // last used item
                if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
                {
                    if (gLastUsedItem == ITEM_ENIGMA_BERRY_E_READER)
                    {
                        if (!(gBattleTypeFlags & BATTLE_TYPE_MULTI))
                        {
                            if ((gBattleScripting.multiplayerId != 0 && (gPotentialItemEffectBattler & BIT_SIDE))
                                || (gBattleScripting.multiplayerId == 0 && !(gPotentialItemEffectBattler & BIT_SIDE)))
                            {
                                StringCopy(text, gEnigmaBerries[gPotentialItemEffectBattler].name);
                                StringAppend(text, sText_BerrySuffix);
                                toCpy = text;
                            }
                            else
                            {
                                toCpy = sText_EnigmaBerry;
                            }
                        }
                        else
                        {
                            if (gLinkPlayers[gBattleScripting.multiplayerId].id == gPotentialItemEffectBattler)
                            {
                                StringCopy(text, gEnigmaBerries[gPotentialItemEffectBattler].name);
                                StringAppend(text, sText_BerrySuffix);
                                toCpy = text;
                            }
                            else
                                toCpy = sText_EnigmaBerry;
                        }
                    }
                    else
                    {
                        CopyItemName(gLastUsedItem, text);
                        toCpy = text;
                    }
                }
                else
                {
                    CopyItemName(gLastUsedItem, text);
                    toCpy = text;
                }
                break;
            case B_TXT_LAST_ABILITY: // last used ability
                toCpy = gAbilityNames[gLastUsedAbility];
                break;
            case B_TXT_ATK_ABILITY: // attacker ability
                toCpy = gAbilityNames[sBattlerAbilities[gBattlerAttacker]];
                break;
            case B_TXT_DEF_ABILITY: // target ability
                toCpy = gAbilityNames[sBattlerAbilities[gBattlerTarget]];
                break;
            case B_TXT_SCR_ACTIVE_ABILITY: // scripting active ability
                toCpy = gAbilityNames[sBattlerAbilities[gBattleScripting.battler]];
                break;
            case B_TXT_EFF_ABILITY: // effect battlerId ability
                toCpy = gAbilityNames[sBattlerAbilities[gEffectBattler]];
                break;
            case B_TXT_TRAINER1_CLASS: // trainer class name
                toCpy = BattleStringGetOpponentClassByTrainerId(gTrainerBattleOpponent_A);
                break;
            case B_TXT_TRAINER1_NAME: // trainer1 name
                toCpy = BattleStringGetOpponentNameByTrainerId(gTrainerBattleOpponent_A, text, multiplayerId, GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT));
                break;
            case B_TXT_LINK_PLAYER_NAME: // link player name
                toCpy = gLinkPlayers[multiplayerId].name;
                break;
            case B_TXT_LINK_PARTNER_NAME: // link partner name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(BATTLE_PARTNER(gLinkPlayers[multiplayerId].id))].name;
                break;
            case B_TXT_LINK_OPPONENT1_NAME: // link opponent 1 name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(BATTLE_OPPOSITE(gLinkPlayers[multiplayerId].id))].name;
                break;
            case B_TXT_LINK_OPPONENT2_NAME: // link opponent 2 name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(BATTLE_PARTNER(BATTLE_OPPOSITE(gLinkPlayers[multiplayerId].id)))].name;
                break;
            case B_TXT_LINK_SCR_TRAINER_NAME: // link scripting active name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(gBattleScripting.battler)].name;
                break;
            case B_TXT_PLAYER_NAME: // player name
                toCpy = BattleStringGetPlayerName(text, GetBattlerAtPosition(B_POSITION_PLAYER_LEFT));
                break;
            case B_TXT_TRAINER1_LOSE_TEXT: // trainerA lose text
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_WON_TEXT, gTrainerBattleOpponent_A);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_WON, gTrainerBattleOpponent_A);
                    toCpy = gStringVar4;
                }
                else
                {
                    toCpy = GetTrainerALoseText();
                }
                break;
            case B_TXT_TRAINER1_WIN_TEXT: // trainerA win text
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_LOST_TEXT, gTrainerBattleOpponent_A);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_LOST, gTrainerBattleOpponent_A);
                    toCpy = gStringVar4;
                }
                break;
            case B_TXT_26: // ?
                if (GetBattlerSide(gBattleScripting.battler) != B_SIDE_PLAYER)
                {
                    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
                        toCpy = sText_FoePkmnPrefix;
                    else
                        toCpy = sText_WildPkmnPrefix;
                    while (*toCpy != EOS)
                    {
                        dst[dstID] = *toCpy;
                        dstID++;
                        toCpy++;
                    }
                    GetMonData(&gEnemyParty[gBattleStruct->field_52], MON_DATA_NICKNAME, text);
                }
                else
                {
                    GetMonData(&gPlayerParty[gBattleStruct->field_52], MON_DATA_NICKNAME, text);
                }
                StringGet_Nickname(text);
                toCpy = text;
                break;
            case B_TXT_PC_CREATOR_NAME: // lanette pc
                if (FlagGet(FLAG_SYS_PC_LANETTE))
                    toCpy = sText_Lanettes;
                else
                    toCpy = sText_Someones;
                break;
            case B_TXT_ATK_PREFIX2:
                if (GetBattlerSide(gBattlerAttacker) == B_SIDE_PLAYER)
                    toCpy = sText_AllyPkmnPrefix2;
                else
                    toCpy = sText_FoePkmnPrefix3;
                break;
            case B_TXT_DEF_PREFIX2:
                if (GetBattlerSide(gBattlerTarget) == B_SIDE_PLAYER)
                    toCpy = sText_AllyPkmnPrefix2;
                else
                    toCpy = sText_FoePkmnPrefix3;
                break;
            case B_TXT_ATK_PREFIX1:
                if (GetBattlerSide(gBattlerAttacker) == B_SIDE_PLAYER)
                    toCpy = sText_AllyPkmnPrefix;
                else
                    toCpy = sText_FoePkmnPrefix2;
                break;
            case B_TXT_DEF_PREFIX1:
                if (GetBattlerSide(gBattlerTarget) == B_SIDE_PLAYER)
                    toCpy = sText_AllyPkmnPrefix;
                else
                    toCpy = sText_FoePkmnPrefix2;
                break;
            case B_TXT_ATK_PREFIX3:
                if (GetBattlerSide(gBattlerAttacker) == B_SIDE_PLAYER)
                    toCpy = sText_AllyPkmnPrefix3;
                else
                    toCpy = sText_FoePkmnPrefix4;
                break;
            case B_TXT_DEF_PREFIX3:
                if (GetBattlerSide(gBattlerTarget) == B_SIDE_PLAYER)
                    toCpy = sText_AllyPkmnPrefix3;
                else
                    toCpy = sText_FoePkmnPrefix4;
                break;
            case B_TXT_TRAINER2_CLASS:
                toCpy = BattleStringGetOpponentClassByTrainerId(gTrainerBattleOpponent_B);
                break;
            case B_TXT_TRAINER2_NAME:
                toCpy = BattleStringGetOpponentNameByTrainerId(gTrainerBattleOpponent_B, text, multiplayerId, GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT));
                break;
            case B_TXT_TRAINER2_LOSE_TEXT:
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_WON_TEXT, gTrainerBattleOpponent_B);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_WON, gTrainerBattleOpponent_B);
                    toCpy = gStringVar4;
                }
                else
                {
                    toCpy = GetTrainerBLoseText();
                }
                break;
            case B_TXT_TRAINER2_WIN_TEXT:
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_LOST_TEXT, gTrainerBattleOpponent_B);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_LOST, gTrainerBattleOpponent_B);
                    toCpy = gStringVar4;
                }
                break;
            case B_TXT_PARTNER_CLASS:
                toCpy = gTrainerClassNames[GetFrontierOpponentClass(gPartnerTrainerId)];
                break;
            case B_TXT_PARTNER_NAME:
                toCpy = BattleStringGetPlayerName(text, GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT));
                break;
            case B_TXT_ATK_TRAINER_NAME:
                toCpy = BattleStringGetTrainerName(text, multiplayerId, gBattlerAttacker);
                break;
            case B_TXT_ATK_TRAINER_CLASS:
                switch (GetBattlerPosition(gBattlerAttacker))
                {
                case B_POSITION_PLAYER_RIGHT:
                    if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
                        toCpy = gTrainerClassNames[GetFrontierOpponentClass(gPartnerTrainerId)];
                    break;
                case B_POSITION_OPPONENT_LEFT:
                    toCpy = BattleStringGetOpponentClassByTrainerId(gTrainerBattleOpponent_A);
                    break;
                case B_POSITION_OPPONENT_RIGHT:
                    if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS && !BATTLE_TWO_VS_ONE_OPPONENT)
                        toCpy = BattleStringGetOpponentClassByTrainerId(gTrainerBattleOpponent_B);
                    else
                        toCpy = BattleStringGetOpponentClassByTrainerId(gTrainerBattleOpponent_A);
                    break;
                }
                break;
            case B_TXT_ATK_TEAM1:
                if (GetBattlerSide(gBattlerAttacker) == B_SIDE_PLAYER)
                    toCpy = sText_Your1;
                else
                    toCpy = sText_Opposing1;
                break;
            case B_TXT_ATK_TEAM2:
                if (GetBattlerSide(gBattlerAttacker) == B_SIDE_PLAYER)
                    toCpy = sText_Your2;
                else
                    toCpy = sText_Opposing2;
                break;
            case B_TXT_DEF_TEAM1:
                if (GetBattlerSide(gBattlerTarget) == B_SIDE_PLAYER)
                    toCpy = sText_Your1;
                else
                    toCpy = sText_Opposing1;
                break;
            case B_TXT_DEF_TEAM2:
                if (GetBattlerSide(gBattlerTarget) == B_SIDE_PLAYER)
                    toCpy = sText_Your2;
                else
                    toCpy = sText_Opposing2;
                break;
            }

            if (toCpy != NULL)
            {
                while (*toCpy != EOS)
                {
                    dst[dstID] = *toCpy;
                    dstID++;
                    toCpy++;
                }
            }

            if (*src == B_TXT_TRAINER1_LOSE_TEXT || *src == B_TXT_TRAINER2_LOSE_TEXT
                || *src == B_TXT_TRAINER1_WIN_TEXT || *src == B_TXT_TRAINER2_WIN_TEXT)
            {
                dst[dstID] = EXT_CTRL_CODE_BEGIN;
                dstID++;
                dst[dstID] = EXT_CTRL_CODE_PAUSE_UNTIL_PRESS;
                dstID++;
            }
        }
        else
        {
            dst[dstID] = *src;
            dstID++;
        }
        src++;
    }

    dst[dstID] = *src;
    dstID++;

    return dstID;
}

static void IllusionNickHack(u32 battlerId, u32 partyId, u8 *dst)
{
    s32 id, i;
    // we know it's gEnemyParty
    struct Pokemon *mon = &gEnemyParty[partyId], *partnerMon;

    if (GetMonAbility(mon) == ABILITY_ILLUSION)
    {
        if (IsBattlerAlive(BATTLE_PARTNER(battlerId)))
            partnerMon = &gEnemyParty[gBattlerPartyIndexes[BATTLE_PARTNER(battlerId)]];
        else
            partnerMon = mon;

        // Find last alive non-egg pokemon.
        for (i = PARTY_SIZE - 1; i >= 0; i--)
        {
            id = i;
            if (GetMonData(&gEnemyParty[id], MON_DATA_SANITY_HAS_SPECIES)
                && GetMonData(&gEnemyParty[id], MON_DATA_HP)
                && &gEnemyParty[id] != mon
                && &gEnemyParty[id] != partnerMon)
            {
                GetMonData(&gEnemyParty[id], MON_DATA_NICKNAME, dst);
                return;
            }
        }
    }

    GetMonData(mon, MON_DATA_NICKNAME, dst);
}

static void ExpandBattleTextBuffPlaceholders(const u8 *src, u8 *dst)
{
    u32 srcID = 1;
    u32 value = 0;
    u8 text[12];
    u16 hword;

    *dst = EOS;
    while (src[srcID] != B_BUFF_EOS)
    {
        switch (src[srcID])
        {
        case B_BUFF_STRING: // battle string
            hword = T1_READ_16(&src[srcID + 1]);
            StringAppend(dst, gBattleStringsTable[hword - BATTLESTRINGS_TABLE_START]);
            srcID += 3;
            break;
        case B_BUFF_NUMBER: // int to string
            switch (src[srcID + 1])
            {
            case 1:
                value = src[srcID + 3];
                break;
            case 2:
                value = T1_READ_16(&src[srcID + 3]);
                break;
            case 4:
                value = T1_READ_32(&src[srcID + 3]);
                break;
            }
            ConvertIntToDecimalStringN(dst, value, STR_CONV_MODE_LEFT_ALIGN, src[srcID + 2]);
            srcID += src[srcID + 1] + 3;
            break;
        case B_BUFF_MOVE: // move name
            StringAppend(dst, gMoveNames[T1_READ_16(&src[srcID + 1])]);
            srcID += 3;
            break;
        case B_BUFF_TYPE: // type name
            StringAppend(dst, gTypeNames[src[srcID + 1]]);
            srcID += 2;
            break;
        case B_BUFF_MON_NICK_WITH_PREFIX: // poke nick with prefix
            if (GetBattlerSide(src[srcID + 1]) == B_SIDE_PLAYER)
            {
                GetMonData(&gPlayerParty[src[srcID + 2]], MON_DATA_NICKNAME, text);
            }
            else
            {
                if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
                    StringAppend(dst, sText_FoePkmnPrefix);
                else
                    StringAppend(dst, sText_WildPkmnPrefix);

                GetMonData(&gEnemyParty[src[srcID + 2]], MON_DATA_NICKNAME, text);
            }
            StringGet_Nickname(text);
            StringAppend(dst, text);
            srcID += 3;
            break;
        case B_BUFF_STAT: // stats
            StringAppend(dst, gStatNamesTable[src[srcID + 1]]);
            srcID += 2;
            break;
        case B_BUFF_SPECIES: // species name
            GetSpeciesName(dst, T1_READ_16(&src[srcID + 1]));
            srcID += 3;
            break;
        case B_BUFF_MON_NICK: // poke nick without prefix
            if (src[srcID + 2] == gBattlerPartyIndexes[src[srcID + 1]])
            {
                GetBattlerNick(src[srcID + 1], dst);
            }
            else if (gBattleScripting.illusionNickHack) // for STRINGID_ENEMYABOUTTOSWITCHPKMN
            {
                gBattleScripting.illusionNickHack = 0;
                IllusionNickHack(src[srcID + 1], src[srcID + 2], dst);
                StringGet_Nickname(dst);
            }
            else
            {
                if (GetBattlerSide(src[srcID + 1]) == B_SIDE_PLAYER)
                    GetMonData(&gPlayerParty[src[srcID + 2]], MON_DATA_NICKNAME, dst);
                else
                    GetMonData(&gEnemyParty[src[srcID + 2]], MON_DATA_NICKNAME, dst);
                StringGet_Nickname(dst);
            }
            srcID += 3;
            break;
        case B_BUFF_NEGATIVE_FLAVOR: // flavor table
            StringAppend(dst, gPokeblockWasTooXStringTable[src[srcID + 1]]);
            srcID += 2;
            break;
        case B_BUFF_ABILITY: // ability names
            StringAppend(dst, gAbilityNames[T1_READ_16(&src[srcID + 1])]);
            srcID += 3;
            break;
        case B_BUFF_ITEM: // item name
            hword = T1_READ_16(&src[srcID + 1]);
            if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            {
                if (hword == ITEM_ENIGMA_BERRY_E_READER)
                {
                    if (gLinkPlayers[gBattleScripting.multiplayerId].id == gPotentialItemEffectBattler)
                    {
                        StringCopy(dst, gEnigmaBerries[gPotentialItemEffectBattler].name);
                        StringAppend(dst, sText_BerrySuffix);
                    }
                    else
                    {
                        StringAppend(dst, sText_EnigmaBerry);
                    }
                }
                else
                {
                    CopyItemName(hword, dst);
                }
            }
            else
            {
                CopyItemName(hword, dst);
            }
            srcID += 3;
            break;
        }
    }
}

// Loads one of two text strings into the provided buffer. This is functionally
// unused, since the value loaded into the buffer is not read; it loaded one of
// two particles (either "?" or "?") which works in tandem with ChooseTypeOfMoveUsedString
// below to effect changes in the meaning of the line.
static void ChooseMoveUsedParticle(u8* textBuff)
{
    s32 counter = 0;
    u32 i = 0;

    while (counter != MAX_MON_MOVES)
    {
        if (sGrammarMoveUsedTable[i] == 0)
            counter++;
        if (sGrammarMoveUsedTable[i++] == gBattleMsgDataPtr->currentMove)
            break;
    }

    if (counter >= 0)
    {
        if (counter <= 2)
            StringCopy(textBuff, sText_SpaceIs); // is
        else if (counter <= MAX_MON_MOVES)
            StringCopy(textBuff, sText_ApostropheS); // 's
    }
}

// Appends "!" to the text buffer `dst`. In the original Japanese this looked
// into the table of moves at sGrammarMoveUsedTable and varied the line accordingly.
//
// sText_ExclamationMark was a plain "!", used for any attack not on the list.
// It resulted in the translation "<NAME>'s <ATTACK>!".
//
// sText_ExclamationMark2 was "? ????!". This resulted in the translation
// "<NAME> used <ATTACK>!", which was used for all attacks in English.
//
// sText_ExclamationMark3 was "??!". This was used for those moves whose
// names were verbs, such as Recover, and resulted in translations like "<NAME>
// recovered itself!".
//
// sText_ExclamationMark4 was "? ??!" This resulted in a translation of
// "<NAME> did an <ATTACK>!".
//
// sText_ExclamationMark5 was " ????!" This resulted in a translation of
// "<NAME>'s <ATTACK> attack!".
static void ChooseTypeOfMoveUsedString(u8* dst)
{
    s32 counter = 0;
    s32 i = 0;

    while (*dst != EOS)
        dst++;

    while (counter != MAX_MON_MOVES)
    {
        if (sGrammarMoveUsedTable[i] == MOVE_NONE)
            counter++;
        if (sGrammarMoveUsedTable[i++] == gBattleMsgDataPtr->currentMove)
            break;
    }

    switch (counter)
    {
    case 0:
        StringCopy(dst, sText_ExclamationMark);
        break;
    case 1:
        StringCopy(dst, sText_ExclamationMark2);
        break;
    case 2:
        StringCopy(dst, sText_ExclamationMark3);
        break;
    case 3:
        StringCopy(dst, sText_ExclamationMark4);
        break;
    case 4:
        StringCopy(dst, sText_ExclamationMark5);
        break;
    }
}

void BattlePutTextOnWindow(const u8 *text, u8 windowId)
{
    const struct BattleWindowText *textInfo = sBattleTextOnWindowsInfo[gBattleScripting.windowsType];
    bool32 copyToVram;
    struct TextPrinterTemplate printerTemplate;
    u8 speed;

    if (windowId & B_WIN_COPYTOVRAM)
    {
        windowId &= ~B_WIN_COPYTOVRAM;
        copyToVram = FALSE;
    }
    else
    {
        FillWindowPixelBuffer(windowId, textInfo[windowId].fillValue);
        copyToVram = TRUE;
    }

    printerTemplate.currentChar = text;
    printerTemplate.windowId = windowId;
    printerTemplate.fontId = textInfo[windowId].fontId;
    printerTemplate.x = textInfo[windowId].x;
    printerTemplate.y = textInfo[windowId].y;
    printerTemplate.currentX = printerTemplate.x;
    printerTemplate.currentY = printerTemplate.y;
    printerTemplate.letterSpacing = textInfo[windowId].letterSpacing;
    printerTemplate.lineSpacing = textInfo[windowId].lineSpacing;
    printerTemplate.unk = 0;
    printerTemplate.fgColor = textInfo[windowId].fgColor;
    printerTemplate.bgColor = textInfo[windowId].bgColor;
    printerTemplate.shadowColor = textInfo[windowId].shadowColor;

    if (printerTemplate.x == 0xFF)
    {
        u32 width = GetBattleWindowTemplatePixelWidth(gBattleScripting.windowsType, windowId);
        s32 alignX = GetStringCenterAlignXOffsetWithLetterSpacing(printerTemplate.fontId, printerTemplate.currentChar, width, printerTemplate.letterSpacing);
        printerTemplate.x = printerTemplate.currentX = alignX;
    }

    if (windowId == ARENA_WIN_JUDGEMENT_TEXT)
        gTextFlags.useAlternateDownArrow = FALSE;
    else
        gTextFlags.useAlternateDownArrow = TRUE;

    if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED))
        gTextFlags.autoScroll = TRUE;
    else
        gTextFlags.autoScroll = FALSE;

    if (windowId == B_WIN_MSG || windowId == ARENA_WIN_JUDGEMENT_TEXT)
    {
        if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            speed = 1;
        else if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
            speed = sRecordedBattleTextSpeeds[GetTextSpeedInRecordedBattle()];
        else
            speed = GetPlayerTextSpeedDelay();

        gTextFlags.canABSpeedUpPrint = 1;
    }
    else
    {
        speed = textInfo[windowId].speed;
        gTextFlags.canABSpeedUpPrint = 0;
    }

    AddTextPrinter(&printerTemplate, speed, NULL);

    if (copyToVram)
    {
        PutWindowTilemap(windowId);
        CopyWindowToVram(windowId, COPYWIN_FULL);
    }
}

void SetPpNumbersPaletteInMoveSelection(void)
{
    struct ChooseMoveStruct *chooseMoveStruct = (struct ChooseMoveStruct*)(&gBattleResources->bufferA[gActiveBattler][4]);
    const u16 *palPtr = gPPTextPalette;
    u8 var = GetCurrentPpToMaxPpState(chooseMoveStruct->currentPp[gMoveSelectionCursor[gActiveBattler]],
                         chooseMoveStruct->maxPp[gMoveSelectionCursor[gActiveBattler]]);

    gPlttBufferUnfaded[92] = palPtr[(var * 2) + 0];
    gPlttBufferUnfaded[91] = palPtr[(var * 2) + 1];

    CpuCopy16(&gPlttBufferUnfaded[92], &gPlttBufferFaded[92], sizeof(u16));
    CpuCopy16(&gPlttBufferUnfaded[91], &gPlttBufferFaded[91], sizeof(u16));
}

u8 GetCurrentPpToMaxPpState(u8 currentPp, u8 maxPp)
{
    if (maxPp == currentPp)
    {
        return 3;
    }
    else if (maxPp <= 2)
    {
        if (currentPp > 1)
            return 3;
        else
            return 2 - currentPp;
    }
    else if (maxPp <= 7)
    {
        if (currentPp > 2)
            return 3;
        else
            return 2 - currentPp;
    }
    else
    {
        if (currentPp == 0)
            return 2;
        if (currentPp <= maxPp / 4)
            return 1;
        if (currentPp > maxPp / 2)
            return 3;
    }

    return 0;
}

struct TrainerSlide
{
    u16 trainerId;
    const u8 *msgLastSwitchIn;
    const u8 *msgLastLowHp;
    const u8 *msgFirstDown;
};

static const struct TrainerSlide sTrainerSlides[] =
{
    /* Put any trainer slide-in messages inside this array.
    Example:
    {
        .trainerId = TRAINER_WALLY_VR_2,
        .msgLastSwitchIn = sText_AarghAlmostHadIt,
        .msgLastLowHp = sText_BoxIsFull,
        .msgFirstDown = sText_123Poof,
    },
    */
};

static u32 GetEnemyMonCount(bool32 onlyAlive)
{
    u32 i, count = 0;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        u32 species = GetMonData(&gEnemyParty[i], MON_DATA_SPECIES2, NULL);
        if (species != SPECIES_NONE
            && species != SPECIES_EGG
            && (!onlyAlive || GetMonData(&gEnemyParty[i], MON_DATA_HP, NULL)))
            count++;
    }

    return count;
}

static bool32 IsBattlerHpLow(u32 battler)
{
    if ((gBattleMons[battler].hp * 100) / gBattleMons[battler].maxHP < 25)
        return TRUE;
    else
        return FALSE;
}

bool32 ShouldDoTrainerSlide(u32 battlerId, u32 trainerId, u32 which)
{
    s32 i;

    if (!(gBattleTypeFlags & BATTLE_TYPE_TRAINER) || GetBattlerSide(battlerId) != B_SIDE_OPPONENT)
        return FALSE;

    for (i = 0; i < ARRAY_COUNT(sTrainerSlides); i++)
    {
        if (trainerId == sTrainerSlides[i].trainerId)
        {
            gBattleScripting.battler = battlerId;
            switch (which)
            {
            case TRAINER_SLIDE_LAST_SWITCHIN:
                if (sTrainerSlides[i].msgLastSwitchIn != NULL && GetEnemyMonCount(TRUE) == 1)
                {
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[i].msgLastSwitchIn;
                    return TRUE;
                }
                break;
            case TRAINER_SLIDE_LAST_LOW_HP:
                if (sTrainerSlides[i].msgLastLowHp != NULL
                    && GetEnemyMonCount(TRUE) == 1
                    && IsBattlerHpLow(battlerId)
                    && !gBattleStruct->trainerSlideLowHpMsgDone)
                {
                    gBattleStruct->trainerSlideLowHpMsgDone = TRUE;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[i].msgLastLowHp;
                    return TRUE;
                }
                break;
            case TRAINER_SLIDE_FIRST_DOWN:
                if (sTrainerSlides[i].msgFirstDown != NULL && GetEnemyMonCount(TRUE) == GetEnemyMonCount(FALSE) - 1)
                {
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[i].msgFirstDown;
                    return TRUE;
                }
                break;
            }
            break;
        }
    }

    return FALSE;
}
