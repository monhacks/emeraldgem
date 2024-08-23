
#if B_BINDING_TURNS >= GEN_5
#define BINDING_TURNS "4-5"
#else
#define BINDING_TURNS "2-5"
#endif

static const u8 sNullDescription[] = _(
    "");

#if GAME_LANGUAGE==LANGUAGE_SPANISH
static const u8 sPoundDescription[] = _(
    "Golpea con las patas\n"
    "o la cola.");

static const u8 sKarateChopDescription[] = _(
    "Da un golpe cortante.\n"
    "Suele ser crítico.");

static const u8 sDoubleSlapDescription[] = _(
    "Abofetea de 2 a 5\n"
    "veces seguidas.");

static const u8 sCometPunchDescription[] = _(
    "Pega de 2 a 5\n"
    "veces seguidas.");

static const u8 sMegaPunchDescription[] = _(
    "Un puñetazo de gran\n"
    "potencia.");

static const u8 sPayDayDescription[] = _(
    "Arroja monedas\n"
    "que luego recupera.");

static const u8 sFirePunchDescription[] = _(
    "Puñetazo ardiente.\n"
    "Puede quemar.");

static const u8 sIcePunchDescription[] = _(
    "Puñetazo helado.\n"
    "Puede congelar.");

static const u8 sThunderPunchDescription[] = _(
    "Puñetazo eléctrico.\n"
    "Puede paralizar.");

static const u8 sScratchDescription[] = _(
    "Araña con afiladas\n"
    "garras.");

static const u8 sViseGripDescription[] = _(
    "Atrapa con potentes\n"
    "pinzas.");

static const u8 sGuillotineDescription[] = _(
    "Pinzas que pueden\n"
    "derribar de un golpe.");

static const u8 sRazorWindDescription[] = _(
    "1.{SUPER_ER} turno: prepara.\n"
    "2.º: ataca.");

static const u8 sSwordsDanceDescription[] = _(
    "Baile que mejora\n"
    "el Ataque.");

static const u8 sCutDescription[] = _(
    "Corta con garras,\n"
    "guadañas, etc.");

static const u8 sGustDescription[] = _(
    "Crea un tornado\n"
    "con las alas.");

static const u8 sWingAttackDescription[] = _(
    "Golpea al objetivo\n"
    "con las alas.");

static const u8 sWhirlwindDescription[] = _(
    "Se lleva al rival\n"
    "y termina el combate.");

static const u8 sFlyDescription[] = _(
    "1.{SUPER_ER} turno: vuela.\n"
    "2.º: ataca.");

static const u8 sBindDescription[] = _(
    "Ata y oprime\n"
    "de 2 a 5 turnos.");

static const u8 sSlamDescription[] = _(
    "Golpea con brillos\n"
    "y baja la Defensa.");

static const u8 sVineWhipDescription[] = _(
    "Azota al enemigo\n"
    "con ramas finas.");

static const u8 sStompDescription[] = _(
    "Tremendo pisotón\n"
    "que puede causar retroceso.");

static const u8 sDoubleKickDescription[] = _(
    "Una patada doble.\n"
    "Golpea 2 veces.");

static const u8 sMegaKickDescription[] = _(
    "Patada de extrema\n"
    "fuerza.");

static const u8 sJumpKickDescription[] = _(
    "Si falla, dañará\n"
    "a quien lo usa.");

static const u8 sRollingKickDescription[] = _(
    "Una patada rápida\n"
    "y circular.");

static const u8 sSandAttackDescription[] = _(
    "Arroja arena a la cara\n"
    "y baja la Precisión.");

static const u8 sHeadbuttDescription[] = _(
    "Cabezazo que puede\n"
    "hacer retroceder al rival.");

static const u8 sHornAttackDescription[] = _(
    "Ataca al enemigo\n"
    "con afilados cuernos.");

static const u8 sFuryAttackDescription[] = _(
    "Cornea al enemigo\n"
    "de 2 a 5 veces.");

static const u8 sHornDrillDescription[] = _(
    "Ataque taladro.\n"
    "Fulmina en 1 golpe.");

static const u8 sTackleDescription[] = _(
    "Embiste con todo\n"
    "el cuerpo.");

static const u8 sBodySlamDescription[] = _(
    "Ataque corporal\n"
    "que puede paralizar.");

static const u8 sWrapDescription[] = _(
    "Oprime de 2 a 5\n"
    "turnos con ramas, etc.");

static const u8 sTakeDownDescription[] = _(
    "Carga desmedida que\n"
    "también hiere al agresor.");

static const u8 sThrashDescription[] = _(
    "Dura de 2 a 3 turnos\n"
    "y acaba confundiéndote.");

static const u8 sDoubleEdgeDescription[] = _(
    "Ataque arriesgado que\n"
    "también hiere al agresor.");

static const u8 sTailWhipDescription[] = _(
    "Agita la cola para bajar\n"
    "la Defensa del otro.");

static const u8 sPoisonStingDescription[] = _(
    "Puede envenenar al\n"
    "enemigo con púas, etc.");

static const u8 sTwineedleDescription[] = _(
    "Clava aguijones al\n"
    "rival 2 veces.");

static const u8 sPinMissileDescription[] = _(
    "Lanza finas púas que\n"
    "hieren de 2 a 5 veces.");

static const u8 sLeerDescription[] = _(
    "Asusta al enemigo\n"
    "para bajar su Defensa.");

static const u8 sBiteDescription[] = _(
    "Un voraz bocado\n"
    "que puede causar retroceso.");

static const u8 sGrowlDescription[] = _(
    "Dulce gruñido que reduce\n"
    "el Ataque del otro.");

static const u8 sRoarDescription[] = _(
    "Ahuyenta al rival\n"
    "y finaliza el combate.");

static const u8 sSingDescription[] = _(
    "Cancioncilla que puede\n"
    "dormir al enemigo.");

static const u8 sSupersonicDescription[] = _(
    "Raras ondas sónicas\n"
    "que pueden confundir.");

static const u8 sSonicBoomDescription[] = _(
    "Lanza ondas de choque\n"
    "que restan 20 PS.");

static const u8 sDisableDescription[] = _(
    "Desactiva un ataque\n"
    "del contrincante.");

static const u8 sAcidDescription[] = _(
    "Rocía corrosivo ácido.\n"
    "Puede bajar la Defensa.");

static const u8 sEmberDescription[] = _(
    "Ligero ataque que puede\n"
    "causar quemaduras.");

static const u8 sFlamethrowerDescription[] = _(
    "Fuerte ataque que puede\n"
    "causar quemaduras.");

static const u8 sMistDescription[] = _(
    "Te rodea de fina niebla\n"
    "y protege tus habilidades.");

static const u8 sWaterGunDescription[] = _(
    "Rocía agua para atacar.");

static const u8 sHydroPumpDescription[] = _(
    "Lanza agua a chorros\n"
    "para atacar.");

static const u8 sSurfDescription[] = _(
    "Crea una ola enorme y\n"
    "se la lanza al enemigo.");

static const u8 sIceBeamDescription[] = _(
    "Rayo de hielo que\n"
    "puede llegar a congelar.");

static const u8 sBlizzardDescription[] = _(
    "Tormenta de hielo que\n"
    "puede llegar a congelar.");

static const u8 sPsybeamDescription[] = _(
    "Extraño rayo que puede\n"
    "causar confusión.");

static const u8 sBubbleBeamDescription[] = _(
    "Diluvio de burbujas que\n"
    "puede bajar la Velocidad.");

static const u8 sAuroraBeamDescription[] = _(
    "Rayo multicolor que\n"
    "puede reducir el Ataque.");

static const u8 sHyperBeamDescription[] = _(
    "Es eficaz, pero deja inmóvil\n"
    "al atacante 1 turno.");

static const u8 sPeckDescription[] = _(
    "Ataca con un punzante\n"
    "pico.");

static const u8 sDrillPeckDescription[] = _(
    "Picotazo giratorio y\n"
    "perforador muy potente.");

static const u8 sSubmissionDescription[] = _(
    "Golpe desmedido que\n"
    "también hiere al agresor.");

static const u8 sLowKickDescription[] = _(
    "Cuanto más pesa el\n"
    "enemigo, más daño causa.");

static const u8 sCounterDescription[] = _(
    "Devuelve un golpe físico\n"
    "por duplicado.");

static const u8 sSeismicTossDescription[] = _(
    "Resta los mismos PS que\n"
    "nivel tenga el agresor.");

static const u8 sStrengthDescription[] = _(
    "Potente ataque físico.");

static const u8 sAbsorbDescription[] = _(
    "Absorbe la mitad del daño\n"
    "producido.");

static const u8 sMegaDrainDescription[] = _(
    "Absorbe la mitad del daño\n"
    "producido.");

static const u8 sLeechSeedDescription[] = _(
    "Planta tres semillas que\n"
    "quitan PS en cada turno.");

static const u8 sGrowthDescription[] = _(
    "Crece a marchas forzadas\n"
    "y aumenta el At. Esp.");

static const u8 sRazorLeafDescription[] = _(
    "Corta con hojas.\n"
    "Suele ser crítico.");

static const u8 sSolarBeamDescription[] = _(
    "1.{SUPER_ER} turno: absorbe luz.\n"
    "2.º: ataca.");

static const u8 sPoisonPowderDescription[] = _(
    "Polvo tóxico que puede\n"
    "envenenar al enemigo.");

static const u8 sStunSporeDescription[] = _(
    "Esparce polvo que puede\n"
    "paralizar al enemigo.");

static const u8 sSleepPowderDescription[] = _(
    "Esparce polvo que puede\n"
    "dormir al enemigo.");

static const u8 sPetalDanceDescription[] = _(
    "Dura de 2 a 3 turnos\n"
    "y acaba confundiéndote.");

static const u8 sStringShotDescription[] = _(
    "Baja la Velocidad\n"
    "del enemigo.");

static const u8 sDragonRageDescription[] = _(
    "Cadena de ondas de\n"
    "choque que quitan 40 PS.");

static const u8 sFireSpinDescription[] = _(
    "Un aro de fuego que\n"
    "atrapa de 2 a 5 veces.");

static const u8 sThunderShockDescription[] = _(
    "Ataque eléctrico que\n"
    "puede paralizar al enemigo.");

static const u8 sThunderboltDescription[] = _(
    "Duro ataque eléctrico que\n"
    "puede paralizar al enemigo.");

static const u8 sThunderWaveDescription[] = _(
    "Una descarga que puede\n"
    "paralizar al enemigo.");

static const u8 sThunderDescription[] = _(
    "Un estruendo que puede\n"
    "paralizar al enemigo.");

static const u8 sRockThrowDescription[] = _(
    "Tira pequeñas rocas\n"
    "al enemigo.");

static const u8 sEarthquakeDescription[] = _(
    "Fuerte, pero inútil\n"
    "contra voladores.");

static const u8 sFissureDescription[] = _(
    "Ataque de tierra.\n"
    "Fulmina en 1 golpe.");

static const u8 sDigDescription[] = _(
    "1.{SUPER_ER} turno: cava.\n"
    "2.º: ataca.");

static const u8 sToxicDescription[] = _(
    "Envenena al rival\n"
    "de forma progresiva.");

static const u8 sConfusionDescription[] = _(
    "Ataque psíquico que\n"
    "puede causar confusión.");

static const u8 sPsychicDescription[] = _(
    "Fuerte ataque psíquico que\n"
    "puede bajar la Def. Esp.");

static const u8 sHypnosisDescription[] = _(
    "Ataque hipnótico que\n"
    "puede dormir al enemigo.");

static const u8 sMeditateDescription[] = _(
    "Reposa y medita para\n"
    "aumentar el Ataque.");

static const u8 sAgilityDescription[] = _(
    "Relaja el cuerpo\n"
    "para ganar Velocidad.");

static const u8 sQuickAttackDescription[] = _(
    "Ataque rápido que permite\n"
    "golpear en 1.{SUPER_ER} lugar.");

static const u8 sRageDescription[] = _(
    "Mejora tu Ataque cada\n"
    "vez que te golpean.");

static const u8 sTeleportDescription[] = _(
    "Movimiento psíquico que\n"
    "permite huir al instante.");

static const u8 sNightShadeDescription[] = _(
    "Se restarán tantos PS\n"
    "como nivel tenga el agresor.");

static const u8 sMimicDescription[] = _(
    "Copia un ataque usado\n"
    "por el enemigo.");

static const u8 sScreechDescription[] = _(
    "Ruido agudo que baja mucho\n"
    "la Defensa del rival.");

static const u8 sDoubleTeamDescription[] = _(
    "Crea espejismos para \n"
    "mejorar la Evasión.");

static const u8 sRecoverDescription[] = _(
    "Restaura hasta la mitad\n"
    "de los PS máximos.");

static const u8 sHardenDescription[] = _(
    "Tensa la musculatura para\n"
    "aumentar la Defensa.");

static const u8 sMinimizeDescription[] = _(
    "El agresor mengua para\n"
    "aumentar la Evasión.");

static const u8 sSmokescreenDescription[] = _(
    "Baja la Precisión del\n"
    "enemigo con humo, etc.");

static const u8 sConfuseRayDescription[] = _(
    "Rayo siniestro que\n"
    "confunde al enemigo.");

static const u8 sWithdrawDescription[] = _(
    "El agresor se protege en su\n"
    "coraza y sube la Defensa.");

static const u8 sDefenseCurlDescription[] = _(
    "Oculta su punto débil al\n"
    "rizarse. Sube la Defensa.");

static const u8 sBarrierDescription[] = _(
    "Crea una barrera para subir\n"
    "mucho la Defensa.");

static const u8 sLightScreenDescription[] = _(
    "Reduce el daño que causa\n"
    "el At. Esp. del rival.");

static const u8 sHazeDescription[] = _(
    "Nube negra que elimina\n"
    "los cambios de caracterís.");

static const u8 sReflectDescription[] = _(
    "Pared de luz que debilita\n"
    "los ataques físicos.");

static const u8 sFocusEnergyDescription[] = _(
    "Concentra energía para\n"
    "asegurar un golpe crítico.");

static const u8 sBideDescription[] = _(
    "Espera 2 turnos para\n"
    "atacar con doble potencia.");

static const u8 sMetronomeDescription[] = _(
    "Usa al azar un\n"
    "ataque Pokémon.");

static const u8 sMirrorMoveDescription[] = _(
    "Contraataca con\n"
    "el mismo movimiento.");

static const u8 sSelfDestructDescription[] = _(
    "Potente, pero hace\n"
    "que te debilites.");

static const u8 sEggBombDescription[] = _(
    "Arroja un huevo\n"
    "al enemigo.");

static const u8 sLickDescription[] = _(
    "Usa la lengua para atacar.\n"
    "Puede causar parálisis.");

static const u8 sSmogDescription[] = _(
    "Gases de escape que pueden\n"
    "llegar a envenenar.");

static const u8 sSludgeDescription[] = _(
    "Arroja residuos al rival.\n"
    "Puede llegar a envenenar.");

static const u8 sBoneClubDescription[] = _(
    "Aporrea con un hueso.\n"
    "Puede causar retroceso.");

static const u8 sFireBlastDescription[] = _(
    "Llama que lo chamusca todo\n"
    "y suele causar quemadura.");

static const u8 sWaterfallDescription[] = _(
    "Embiste con impulso para\n"
    "remontar una cascada.");

static const u8 sClampDescription[] = _(
    "Atrapa y atenaza con\n"
    "fuerza de 2 a 5 turnos.");

static const u8 sSwiftDescription[] = _(
    "Lanza rayos en forma de\n"
    "estrella que no fallan.");

static const u8 sSkullBashDescription[] = _(
    "1.{SUPER_ER} turno: se prepara.\n"
    "2.º: da el cabezazo.");

static const u8 sSpikeCannonDescription[] = _(
    "Lanza finas púas que\n"
    "hieren de 2 a 5 veces.");

static const u8 sConstrictDescription[] = _(
    "Constriñe para herir y\n"
    "puede bajar la Velocidad.");

static const u8 sAmnesiaDescription[] = _(
    "Olvida algo y aumenta mucho\n"
    "la Defensa Esp.");

static const u8 sKinesisDescription[] = _(
    "Distrae al rival y baja\n"
    "su nivel de Precisión.");

static const u8 sSoftBoiledDescription[] = _(
    "Restaura hasta la mitad\n"
    "de tus PS máximos.");

static const u8 sHighJumpKickDescription[] = _(
    "Si fallas esta patada,\n"
    "puedes autolesionarte.");

static const u8 sGlareDescription[] = _(
    "Intimida y asusta al rival\n"
    "hasta dejarlo paralizado.");

static const u8 sDreamEaterDescription[] = _(
    "Roba la mitad del daño\n"
    "causado a un rival dormido.");

static const u8 sPoisonGasDescription[] = _(
    "Envuelve al enemigo en gas\n"
    "tóxico y venenoso.");

static const u8 sBarrageDescription[] = _(
    "Arroja esferas al rival\n"
    "de 2 a 5 veces.");

static const u8 sLeechLifeDescription[] = _(
    "Absorbe la mitad del\n"
    "daño producido.");

static const u8 sLovelyKissDescription[] = _(
    "Pide un beso con una cara\n"
    "que asusta y adormece.");

static const u8 sSkyAttackDescription[] = _(
    "1.º: busca punto flaco.\n"
    "2.º: va a por él.");

static const u8 sTransformDescription[] = _(
    "Modifica las células\n"
    "del rival y lo clona.");

static const u8 sBubbleDescription[] = _(
    "Usa burbujas para intentar\n"
    "bajar la Velocidad.");

static const u8 sDizzyPunchDescription[] = _(
    "Puño repetitivo que puede\n"
    "causar confusión.");

static const u8 sSporeDescription[] = _(
    "Esparce esporas\n"
    "que inducen al sueño.");

static const u8 sFlashDescription[] = _(
    "Ciega con un fogonazo de\n"
    "luz y baja la Precisión.");

static const u8 sPsywaveDescription[] = _(
    "Ataque con onda psíquica\n"
    "de intensidad variable.");

static const u8 sSplashDescription[] = _(
    "No tiene ningún efecto.\n"
    "Sólo salpica.");

static const u8 sAcidArmorDescription[] = _(
    "Te hace líquido y aumenta\n"
    "bastante tu Defensa.");

static const u8 sCrabhammerDescription[] = _(
    "Pinza con fuerza y suele\n"
    "dar un golpe crítico.");

static const u8 sExplosionDescription[] = _(
    "Causa mucho daño, pero\n"
    "te debilita.");

static const u8 sFurySwipesDescription[] = _(
    "Araña rápidamente\n"
    "de 2 a 5 veces.");

static const u8 sBonemerangDescription[] = _(
    "Lanza un hueso a modo de\n"
    "bumerán, que da 2 veces.");

static const u8 sRestDescription[] = _(
    "Te duerme durante 2 turnos\n"
    "para curarte totalmente.");

static const u8 sRockSlideDescription[] = _(
    "Lanza grandes pedruscos.\n"
    "Puede causar retroceso.");

static const u8 sHyperFangDescription[] = _(
    "Ataque con finos colmillos.\n"
    "Puede causar retroceso.");

static const u8 sSharpenDescription[] = _(
    "Mejora el Ataque\n"
    "de quien lo usa.");

static const u8 sConversionDescription[] = _(
    "Cambia tu tipo por el tipo\n"
    "de un ataque conocido.");

static const u8 sTriAttackDescription[] = _(
    "Dispara 3 tipos\n"
    "de rayos a la vez.");

static const u8 sSuperFangDescription[] = _(
    "Finos colmillos que bajan\n"
    "a la mitad los PS del rival.");

static const u8 sSlashDescription[] = _(
    "Acuchilla con pinzas, etc.\n"
    "Suele dar un golpe crítico.");

static const u8 sSubstituteDescription[] = _(
    "Crea un señuelo con\n"
    "1/4 de tus PS máximos.");

static const u8 sStruggleDescription[] = _(
    "Sólo se usa al acabarse\n"
    "los PP. Te hiere un poco.");

static const u8 sSketchDescription[] = _(
    "Copia siempre el último\n"
    "ataque del rival.");

static const u8 sTripleKickDescription[] = _(
    "Patea 3 veces seguidas\n"
    "y cada vez más fuerte.");

static const u8 sThiefDescription[] = _(
    "Puede quitarle al rival\n"
    "el objeto que lleve.");

static const u8 sSpiderWebDescription[] = _(
    "Enreda al rival para evitar\n"
    "que huya o pida el relevo.");

static const u8 sMindReaderDescription[] = _(
    "Adivina el ataque del otro\n"
    "y actúa en consecuencia.");

static const u8 sNightmareDescription[] = _(
    "El rival dormido pierde\n"
    "1/4 de PS por turno.");

static const u8 sFlameWheelDescription[] = _(
    "Ataque de fuego que puede\n"
    "causar quemaduras.");

static const u8 sSnoreDescription[] = _(
    "Fuerte ronquido que puede\n"
    "usarse estando dormido.");

static const u8 sCurseDescription[] = _(
    "En el tipo Fantasma\n"
    "tiene un efecto distinto.");

static const u8 sFlailDescription[] = _(
    "Causa un daño mayor\n"
    "si tienes pocos PS.");

static const u8 sConversion2Description[] = _(
    "Tu tipo se hace resistente\n"
    "al último tipo de ataque.");

static const u8 sAeroblastDescription[] = _(
    "Lanza un chorro de aire que\n"
    "suele dar un golpe crítico.");

static const u8 sCottonSporeDescription[] = _(
    "Le pega esporas al rival\n"
    "para reducir su Velocidad.");

static const u8 sReversalDescription[] = _(
    "Si tienes pocos PS, el daño\n"
    "que causa es mucho mayor.");

static const u8 sSpiteDescription[] = _(
    "Baja con rencor PP del\n"
    "último ataque recibido.");

static const u8 sPowderSnowDescription[] = _(
    "Lanza una nevada que puede\n"
    "llegar a congelar.");

static const u8 sProtectDescription[] = _(
    "Frena ataques, pero puede\n"
    "fallar si se usa sin cesar.");

static const u8 sMachPunchDescription[] = _(
    "Puñetazo que se da rápido\n"
    "para golpear primero.");

static const u8 sScaryFaceDescription[] = _(
    "Asusta al enemigo para\n"
    "bajarle Velocidad.");

static const u8 sFeintAttackDescription[] = _(
    "Acerca al enemigo para que\n"
    "el golpe no falle.");

static const u8 sSweetKissDescription[] = _(
    "Pide un beso con dulzura\n"
    "y suele causar confusión.");

static const u8 sBellyDrumDescription[] = _(
    "Reduce tus PS para\n"
    "mejorar el Ataque.");

static const u8 sSludgeBombDescription[] = _(
    "Explosión de lodo que puede\n"
    "llegar a envenenar.");

static const u8 sMudSlapDescription[] = _(
    "Echa lodo en la cara\n"
    "para bajar la Precisión.");

static const u8 sOctazookaDescription[] = _(
    "Dispara tinta para atacar\n"
    "y bajar la Precisión.");

static const u8 sSpikesDescription[] = _(
    "Riega púas que hieren\n"
    "si el rival pide el relevo.");

static const u8 sZapCannonDescription[] = _(
    "No es certero, pero causa\n"
    "parálisis si atina.");

static const u8 sForesightDescription[] = _(
    "Anula los intentos del rival\n"
    "de aumentar la Evasión.");

static const u8 sDestinyBondDescription[] = _(
    "Si te debilitas, el enemigo\n"
    "se debilita contigo.");

static const u8 sPerishSongDescription[] = _(
    "A los 3 turnos del canto,\n"
    "caen rival y atacante.");

static const u8 sIcyWindDescription[] = _(
    "Ataque helado que\n"
    "baja la Velocidad.");

static const u8 sDetectDescription[] = _(
    "Frena ataques, pero puede\n"
    "fallar si se usa sin parar.");

static const u8 sBoneRushDescription[] = _(
    "Hueso en ristre, aporrea\n"
    "al enemigo de 2 a 5 veces.");

static const u8 sLockOnDescription[] = _(
    "Fija el blanco para que el\n"
    "siguiente ataque no falle.");

static const u8 sOutrageDescription[] = _(
    "Embestida que dura 2 ó 3\n"
    "turnos y te confunde.");

static const u8 sSandstormDescription[] = _(
    "Tormenta de arena\n"
    "que dura varios turnos.");

static const u8 sGigaDrainDescription[] = _(
    "Absorbe la mitad\n"
    "del daño producido.");

static const u8 sEndureDescription[] = _(
    "Resiste el ataque de 1\n"
    "turno y deja al menos 1 PS.");

static const u8 sCharmDescription[] = _(
    "Engatusa al rival y reduce\n"
    "bastante su Ataque.");

static const u8 sRolloutDescription[] = _(
    "Ataque de 5 turnos,\n"
    "con fuerza cada vez mayor.");

static const u8 sFalseSwipeDescription[] = _(
    "Deja al enemigo\n"
    "con al menos 1 PS.");

static const u8 sSwaggerDescription[] = _(
    "Provoca confusión, pero\n"
    "también sube el Ataque.");

static const u8 sMilkDrinkDescription[] = _(
    "Restaura hasta la mitad\n"
    "de tus PS máximos.");

static const u8 sSparkDescription[] = _(
    "Ataque eléctrico que puede\n"
    "llegar a paralizar.");

static const u8 sFuryCutterDescription[] = _(
    "Crece en intensidad\n"
    "si se usa repetidas veces.");

static const u8 sSteelWingDescription[] = _(
    "Alas rígidas que\n"
    "golpean al rival.");

static const u8 sMeanLookDescription[] = _(
    "Mal de ojo que impide al\n"
    "rival huir o pedir el relevo.");

static const u8 sAttractDescription[] = _(
    "Reduce la posibilidad\n"
    "de que el enemigo ataque.");

static const u8 sSleepTalkDescription[] = _(
    "Mientras duerme, usa\n"
    "un ataque elegido al azar.");

static const u8 sHealBellDescription[] = _(
    "Repicar que cura los\n"
    "problemas de estado.");

static const u8 sReturnDescription[] = _(
    "Ataque que aumenta sus\n"
    "efectos con la amistad.");

static const u8 sPresentDescription[] = _(
    "Regalo con forma de bomba.\n"
    "Puede que restaure los PS.");

static const u8 sFrustrationDescription[] = _(
    "Es más fuerte si no se\n"
    "aprecia al Entrenador.");

static const u8 sSafeguardDescription[] = _(
    "Fuerza mística que evita\n"
    "problemas de estado.");

static const u8 sPainSplitDescription[] = _(
    "Une tus PS a los del rival\n"
    "y los reparte por igual.");

static const u8 sSacredFireDescription[] = _(
    "Fuego místico que\n"
    "puede causar quemaduras.");

static const u8 sMagnitudeDescription[] = _(
    "Sacudida sísmica\n"
    "de intensidad variable.");

static const u8 sDynamicPunchDescription[] = _(
    "No es certero, pero\n"
    "causa confusión si atina.");

static const u8 sMegahornDescription[] = _(
    "Violenta embestida con\n"
    "retorcidos cuernos.");

static const u8 sDragonBreathDescription[] = _(
    "Fuerte ráfaga de aliento\n"
    "que golpea al enemigo.");

static const u8 sBatonPassDescription[] = _(
    "Cambia de compañero y\n"
    "mantiene los estados.");

static const u8 sEncoreDescription[] = _(
    "El rival repite el último\n"
    "ataque de 2 a 6 veces.");

static const u8 sPursuitDescription[] = _(
    "Hace mucho daño al rival\n"
    "que pide el relevo.");

static const u8 sRapidSpinDescription[] = _(
    "Ataque corporal giratorio\n"
    "de gran velocidad.");

static const u8 sSweetScentDescription[] = _(
    "Engatusa al rival para\n"
    "reducir su Evasión.");

static const u8 sIronTailDescription[] = _(
    "Ataca con una cola férrea\n"
    "y puede bajar la Defensa.");

static const u8 sMetalClawDescription[] = _(
    "Ataque con garra que puede\n"
    "aumentar tu Ataque.");

static const u8 sVitalThrowDescription[] = _(
    "Lleva su tiempo, pero no\n"
    "falla.");

static const u8 sMorningSunDescription[] = _(
    "Restaura PS. La cantidad\n"
    "varía según el clima.");

static const u8 sSynthesisDescription[] = _(
    "Restaura PS. La cantidad\n"
    "varía según el clima.");

static const u8 sMoonlightDescription[] = _(
    "Restaura PS. La cantidad\n"
    "varía según el clima.");

static const u8 sHiddenPowerDescription[] = _(
    "Su eficacia varía\n"
    "según el agresor.");

static const u8 sCrossChopDescription[] = _(
    "Corte doble que suele\n"
    "propinar un golpe crítico.");

static const u8 sTwisterDescription[] = _(
    "Crea un violento tornado\n"
    "para hacer trizas al rival.");

static const u8 sRainDanceDescription[] = _(
    "Refuerza los ataques de\n"
    "tipo Agua durante 5 turnos.");

static const u8 sSunnyDayDescription[] = _(
    "Sube los ataques de tipo\n"
    "Fuego durante 5 turnos.");

static const u8 sCrunchDescription[] = _(
    "Tritura con finos colmillos\n"
    "y puede bajar la Def. Esp.");

static const u8 sMirrorCoatDescription[] = _(
    "Responde a un Ataque\n"
    "Especial con doble fuerza.");

static const u8 sPsychUpDescription[] = _(
    "Copia los efectos del rival\n"
    "y te los adjudica.");

static const u8 sExtremeSpeedDescription[] = _(
    "Ataque extremadamente\n"
    "rápido y demoledor.");

static const u8 sAncientPowerDescription[] = _(
    "Puede subir todas\n"
    "las características.");

static const u8 sShadowBallDescription[] = _(
    "Lanza una bola negra que\n"
    "puede bajar la Def. Esp.");

static const u8 sFutureSightDescription[] = _(
    "Aumenta la energía interior\n"
    "para golpear a los 2 turnos.");

static const u8 sRockSmashDescription[] = _(
    "Ataque de fuerza brutal\n"
    "que puede bajar la Defensa.");

static const u8 sWhirlpoolDescription[] = _(
    "Atrapa y daña al rival de 2 a\n"
    "5 turnos con un torbellino.");

static const u8 sBeatUpDescription[] = _(
    "Ataque de todo el\n"
    "equipo Pokémon.");

static const u8 sFakeOutDescription[] = _(
    "Ataca primero en un turno\n"
    "y puede causar retroceso.");

static const u8 sUproarDescription[] = _(
    "Alborota de 2 a 5 turnos.\n"
    "Mantiene despierto.");

static const u8 sStockpileDescription[] = _(
    "Recarga energía hasta\n"
    "3 veces.");

static const u8 sSpitUpDescription[] = _(
    "Libera energía acumulada.\n"
    "Cuanta más, mejor.");

static const u8 sSwallowDescription[] = _(
    "Absorbe energía acumulada\n"
    "y restaura PS.");

static const u8 sHeatWaveDescription[] = _(
    "Exhala un vaho ígneo que\n"
    "puede quemar al rival.");

static const u8 sHailDescription[] = _(
    "Tormenta de granizo que\n"
    "golpea en cada turno.");

static const u8 sTormentDescription[] = _(
    "Agobia e impide el uso\n"
    "reiterado de un ataque.");

static const u8 sFlatterDescription[] = _(
    "Confunde al rival, pero\n"
    "sube su At. Esp.");

static const u8 sWillOWispDescription[] = _(
    "Fuego muy intenso que\n"
    "produce quemaduras.");

static const u8 sMementoDescription[] = _(
    "Baja las habilidades\n"
    "del rival y te fulmina.");

static const u8 sFacadeDescription[] = _(
    "Potencia el Ataque al estar\n"
    "quemado, paraliz. o enven.");

static const u8 sFocusPunchDescription[] = _(
    "Es tardío, pero si el rival\n"
    "te golpea no te moverás.");

static const u8 sSmellingSaltsDescription[] = _(
    "Afecta a rivales paraliza-\n"
    "dos, pero también los cura.");

static const u8 sFollowMeDescription[] = _(
    "Llama la atención para\n"
    "concentrar los ataques.");

static const u8 sNaturePowerDescription[] = _(
    "El tipo de ataque\n"
    "varía según el sitio.");

static const u8 sChargeDescription[] = _(
    "Recarga energía y sube el\n"
    "ataque eléctrico posterior.");

static const u8 sTauntDescription[] = _(
    "Hace que el rival solo\n"
    "use ataques.");

static const u8 sHelpingHandDescription[] = _(
    "Refuerza los movimientos\n"
    "del receptor.");

static const u8 sTrickDescription[] = _(
    "Engaña al rival y provoca\n"
    "un cambio de objeto.");

static const u8 sRolePlayDescription[] = _(
    "Imita al rival y copia\n"
    "su Habilidad Especial.");

static const u8 sWishDescription[] = _(
    "Lleva tiempo, pero cumple\n"
    "el deseo de restaurar PS.");

static const u8 sAssistDescription[] = _(
    "Ataque elegido al azar\n"
    "de un miembro del equipo.");

static const u8 sIngrainDescription[] = _(
    "Echa raíces para recuperar\n"
    "PS, pero impide el relevo.");

static const u8 sSuperpowerDescription[] = _(
    "Aumenta mucho la fuerza,\n"
    "pero las habilidades bajan.");

static const u8 sMagicCoatDescription[] = _(
    "El agresor recibe el reflejo\n"
    "de los efectos especiales.");

static const u8 sRecycleDescription[] = _(
    "Recicla un objeto usado\n"
    "para utilizarlo de nuevo.");

static const u8 sRevengeDescription[] = _(
    "Ataque que gana fuerza\n"
    "si el enemigo te hiere.");

static const u8 sBrickBreakDescription[] = _(
    "Destruye barreras como\n"
    "Reflejo y causa daño.");

static const u8 sYawnDescription[] = _(
    "Provoca el bostezo\n"
    "y después el sueño.");

static const u8 sKnockOffDescription[] = _(
    "Deja al rival desprovisto\n"
    "del objeto que lleva.");

static const u8 sEndeavorDescription[] = _(
    "Gana fuerza si el atacante\n"
    "tiene menos PS que el rival.");

static const u8 sEruptionDescription[] = _(
    "Cuanto mayor sea el número\n"
    "de tus PS, más daño harás.");

static const u8 sSkillSwapDescription[] = _(
    "Intercambia la habilidad\n"
    "especial con otro Pokémon.");

static const u8 sImprisonDescription[] = _(
    "Impide al rival usar ataques\n"
    "que tú conoces.");

static const u8 sRefreshDescription[] = _(
    "Cura envenenamientos,\n"
    "parálisis y quemaduras.");

static const u8 sGrudgeDescription[] = _(
    "Si te debilitas, borra los PP\n"
    "del último ataque del rival.");

static const u8 sSnatchDescription[] = _(
    "Roba el efecto del ataque\n"
    "que el objetivo use después.");

static const u8 sSecretPowerDescription[] = _(
    "Los efectos de este ataque\n"
    "varían según la zona.");

static const u8 sDiveDescription[] = _(
    "1.{SUPER_ER} turno: bucea.\n"
    "2.º: golpea.");

static const u8 sArmThrustDescription[] = _(
    "Se dan puñetazos directos\n"
    "de 2 a 5 veces.");

static const u8 sCamouflageDescription[] = _(
    "Modifica el tipo del Pokémon\n"
    "según la zona donde esté.");

static const u8 sTailGlowDescription[] = _(
    "Ráfaga de luz que sube\n"
    "muchísimo el At. Esp.");

static const u8 sLusterPurgeDescription[] = _(
    "Fogonazo de luz que puede\n"
    "bajar la Def. Esp.");

static const u8 sMistBallDescription[] = _(
    "Banco de niebla que\n"
    "puede bajar el At. Esp.");

static const u8 sFeatherDanceDescription[] = _(
    "Envuelve al rival con plumón\n"
    "para reducir su Ataque.");

static const u8 sTeeterDanceDescription[] = _(
    "Confunde a todos los\n"
    "Pokémon que hay en escena.");

static const u8 sBlazeKickDescription[] = _(
    "Suele ser un golpe crítico\n"
    "y causar quemaduras.");

static const u8 sMudSportDescription[] = _(
    "Te cubre de lodo y mejora\n"
    "tu resistencia eléctrica.");

static const u8 sIceBallDescription[] = _(
    "Dura 5 turnos y gana fuerza\n"
    "en cada uno.");

static const u8 sNeedleArmDescription[] = _(
    "Pega con brazos de pinchos\n"
    "y puede causar retroceso.");

static const u8 sSlackOffDescription[] = _(
    "Te relaja y restaura la\n"
    "mitad de los PS máximos.");

static const u8 sHyperVoiceDescription[] = _(
    "Ondas sonoras de alta\n"
    "frecuencia que hieren.");

static const u8 sPoisonFangDescription[] = _(
    "Incisivos colmillos que\n"
    "pueden envenenar al rival.");

static const u8 sCrushClawDescription[] = _(
    "Hace trizas al enemigo y\n"
    "puede bajar la Defensa.");

static const u8 sBlastBurnDescription[] = _(
    "Es muy eficaz, pero\n"
    "te inmoviliza 1 turno.");

static const u8 sHydroCannonDescription[] = _(
    "Es muy eficaz, pero\n"
    "te inmoviliza 1 turno.");

static const u8 sMeteorMashDescription[] = _(
    "Impacta como un meteorito\n"
    "y suele subir el Ataque.");

static const u8 sAstonishDescription[] = _(
    "Impresiona tanto que puede\n"
    "hacer retroceder al rival.");

static const u8 sWeatherBallDescription[] = _(
    "El tipo y fuerza del ataque\n"
    "varían según el clima.");

static const u8 sAromatherapyDescription[] = _(
    "Cura todos los problemas de\n"
    "estado con un suave aroma.");

static const u8 sFakeTearsDescription[] = _(
    "Lágrimas de cocodrilo que\n"
    "bajan mucho la Def. Esp.");

static const u8 sAirCutterDescription[] = _(
    "Viento cortante que azota.\n"
    "Suele ser un golpe crítico.");

static const u8 sOverheatDescription[] = _(
    "Ataque en toda regla que\n"
    "baja mucho tu At. Esp.");

static const u8 sOdorSleuthDescription[] = _(
    "Anula los intentos del rival\n"
    "por aumentar la Evasión.");

static const u8 sRockTombDescription[] = _(
    "Tira rocas al rival, lo para\n"
    "y le baja la Velocidad.");

static const u8 sSilverWindDescription[] = _(
    "Partículas de plata que\n"
    "quizá suban las habilidades.");

static const u8 sMetalSoundDescription[] = _(
    "Tremendo chirrido que baja\n"
    "mucho la Def. Esp.");

static const u8 sGrassWhistleDescription[] = _(
    "Agradable melodía que\n"
    "adormece al rival.");

static const u8 sTickleDescription[] = _(
    "Hace reír para bajar el\n"
    "Ataque y la Defensa.");

static const u8 sCosmicPowerDescription[] = _(
    "Sube la Defensa y la Def.\n"
    "Esp. con energía mística.");

static const u8 sWaterSpoutDescription[] = _(
    "Si tienes muchos PS, el daño\n"
    "que causa es mucho mayor.");

static const u8 sSignalBeamDescription[] = _(
    "Extraño ataque con rayo.\n"
    "Puede causar confusión.");

static const u8 sShadowPunchDescription[] = _(
    "Puñetazo ineludible\n"
    "procedente de las sombras.");

static const u8 sExtrasensoryDescription[] = _(
    "Energía muy extraña\n"
    "que puede causar retroceso.");

static const u8 sSkyUppercutDescription[] = _(
    "Gancho ascendente\n"
    "de gran ímpetu.");

static const u8 sSandTombDescription[] = _(
    "Enreda en un remolino\n"
    "de arena de 2 a 5 turnos.");

static const u8 sSheerColdDescription[] = _(
    "Ataque polar que debilita\n"
    "al rival si le alcanza.");

static const u8 sMuddyWaterDescription[] = _(
    "Ataque con agua lodosa que\n"
    "puede bajar la Precisión.");

static const u8 sBulletSeedDescription[] = _(
    "Dispara de 2 a 5 ráfagas\n"
    "consecutivas de semillas.");

static const u8 sAerialAceDescription[] = _(
    "Ataque tremendamente\n"
    "rápido e ineludible.");

static const u8 sIcicleSpearDescription[] = _(
    "Ataca lanzando de 2 a 5\n"
    "ráfagas de carámbanos.");

static const u8 sIronDefenseDescription[] = _(
    "Te fortalece y sube\n"
    "mucho la Defensa.");

static const u8 sBlockDescription[] = _(
    "Le corta el paso al rival\n"
    "para que no pueda escapar.");

static const u8 sHowlDescription[] = _(
    "Aullido que sube el ánimo\n"
    "y aumenta el Ataque.");

static const u8 sDragonClawDescription[] = _(
    "Araña al rival con garras\n"
    "afiladas.");

static const u8 sFrenzyPlantDescription[] = _(
    "Es eficaz, pero deja\n"
    "inmóvil al agresor 1 turno.");

static const u8 sBulkUpDescription[] = _(
    "Robustece el cuerpo para\n"
    "subir Ataque y Defensa.");

static const u8 sBounceDescription[] = _(
    "1.{SUPER_ER} turno: bota.\n"
    "2.º: golpea. Puede paralizar.");

static const u8 sMudShotDescription[] = _(
    "Dispara lodo al rival y\n"
    "reduce su Velocidad.");

static const u8 sPoisonTailDescription[] = _(
    "Puede envenenar y dar un\n"
    "golpe crítico.");

static const u8 sCovetDescription[] = _(
    "Pide con ternura al rival\n"
    "el objeto que lleve.");

static const u8 sVoltTackleDescription[] = _(
    "Placaje de alto riesgo que\n"
    "hiere un poco al atacante.");

static const u8 sMagicalLeafDescription[] = _(
    "Ataca con una extraña hoja\n"
    "que no se puede esquivar.");

static const u8 sWaterSportDescription[] = _(
    "Te moja para que resistas\n"
    "más los ataques de fuego.");

static const u8 sCalmMindDescription[] = _(
    "Sube el At. Esp. y la Def.\n"
    "Esp. con concentración.");

static const u8 sLeafBladeDescription[] = _(
    "Acuchilla con una hoja fina.\n"
    "Suele dar un golpe crítico.");

static const u8 sDragonDanceDescription[] = _(
    "Danza mística que sube\n"
    "el Ataque y la Velocidad.");

static const u8 sRockBlastDescription[] = _(
    "Lanza pedruscos al rival de\n"
    "2 a 5 veces consecutivas.");

static const u8 sShockWaveDescription[] = _(
    "Ataque eléctrico muy rápido\n"
    "e ineludible.");

static const u8 sWaterPulseDescription[] = _(
    "Ondas ultrasónicas que\n"
    "pueden confundir al rival.");

static const u8 sDoomDesireDescription[] = _(
    "Concentra intensa luz solar\n"
    "y ataca 2 turnos después.");

static const u8 sPsychoBoostDescription[] = _(
    "Es tremendamente potente,\n"
    "pero baja mucho el At. Esp.");

static const u8 sRoostDescription[] = _(
    "Recupera hasta la mitad de\n"
    "los PS del usuario.");

static const u8 sGravityDescription[] = _(
    "Intensifica la gravedad,\n"
    "negando vuelo y levitación.");

static const u8 sMiracleEyeDescription[] = _(
    "Hace a los Siniestros y\n"
    "evasivos fáciles de ver.");

static const u8 sWakeUpSlapDescription[] = _(
    "Poderoso contra dormidos,\n"
    "pero también los despierta.");

static const u8 sHammerArmDescription[] = _(
    "Un gran puñetazo que baja\n"
    "la Velocidad del usuario.");

static const u8 sGyroBallDescription[] = _(
    "Un giro rápido que hace más\n"
    "daño a rivales más rápidos.");

static const u8 sHealingWishDescription[] = _(
    "El usuario se debilita y\n"
    "sana al siguiente que sale.");

static const u8 sBrineDescription[] = _(
    "Hace doble de daño al que\n"
    "tiene la mitad de los PS.");

static const u8 sNaturalGiftDescription[] = _(
    "Su poder varía en función\n"
    "de la Baya equipada.");

static const u8 sFeintDescription[] = _(
    "Golpea a usuarios de\n"
    "movimientos protectores.");

static const u8 sPluckDescription[] = _(
    "Se come la Baya del rival,\n"
    "adquiriendo sus efectos.");

static const u8 sTailwindDescription[] = _(
    "Levanta un aire turbulento\n"
    "que sube la Velocidad.");

static const u8 sAcupressureDescription[] = _(
    "Sube mucho una de las\n"
    "estadísticas al azar.");

static const u8 sMetalBurstDescription[] = _(
    "Reprime cualquier golpe\n"
    "con un gran poder.");

static const u8 sUTurnDescription[] = _(
    "Hace daño y luego se cambia\n"
    "con otro Pokémon.");

static const u8 sCloseCombatDescription[] = _(
    "Un fuerte ataque que\n"
    "baja las defensas.");

static const u8 sPaybackDescription[] = _(
    "Gana potencia si el usuario\n"
    "ataca el último este turno.");

static const u8 sAssuranceDescription[] = _(
    "Gana potencia si el enemigo\n"
    "ha sido herido este turno.");

static const u8 sEmbargoDescription[] = _(
    "Impide que el enemigo use\n"
    "objetos.");

static const u8 sFlingDescription[] = _(
    "Su poder varía en función\n"
    "del objeto equipado.");

static const u8 sPsychoShiftDescription[] = _(
    "Transfiere el estado\n"
    "alterado al enemigo.");

static const u8 sTrumpCardDescription[] = _(
    "Cuantos menos PP tenga, más\n"
    "daño hace.");

static const u8 sHealBlockDescription[] = _(
    "Impide que el enemigo\n"
    "recupere PS.");

static const u8 sWringOutDescription[] = _(
    "Hace más daño a más altos\n"
    "sean los PS del enemigo.");

static const u8 sPowerTrickDescription[] = _(
    "Intercambia el Ataque y la\n"
    "Defensa del usuario.");

static const u8 sGastroAcidDescription[] = _(
    "Anula la habilidad del\n"
    "enemigo con jugo gástrico.");

static const u8 sLuckyChantDescription[] = _(
    "Impide recibir golpes\n"
    "críticos por 5 turnos.");

static const u8 sMeFirstDescription[] = _(
    "Ejecuta el movimiento del\n"
    "enemigo con más poder.");

static const u8 sCopycatDescription[] = _(
    "Copia el último movimiento\n"
    "usado por el enemigo.");

static const u8 sPowerSwapDescription[] = _(
    "Modifica cambios de At. y\n"
    "y At. Esp. con el enemigo.");

static const u8 sGuardSwapDescription[] = _(
    "Modifica cambios de Def. y\n"
    "y Def. Esp. con el enemigo.");

static const u8 sPunishmentDescription[] = _(
    "Hace más daño si el enemigo\n"
    "tiene estadísticas subidas.");

static const u8 sLastResortDescription[] = _(
    "Solo puede usarse si se ha\n"
    "usado los demás movimientos.");

static const u8 sWorrySeedDescription[] = _(
    "Cambia la habilidad del\n"
    "objetivo a Insomnio.");

static const u8 sSuckerPunchDescription[] = _(
    "Golpea primero si el\n"
    "enemigo prepara un ataque.");

static const u8 sToxicSpikesDescription[] = _(
    "Esparce púas que envenenan\n"
    "a los Pokémon que entran.");

static const u8 sHeartSwapDescription[] = _(
    "Intercambia los cambios de\n"
    "estadísticas con el enemigo.");

static const u8 sAquaRingDescription[] = _(
    "Creo un velo acuoso que\n"
    "restaura PS.");

static const u8 sMagnetRiseDescription[] = _(
    "El usuario levita gracias\n"
    "al electromagnetismo.");

static const u8 sFlareBlitzDescription[] = _(
    "Embestida que puede quemar\n"
    "al enemigo. Tamabién hiere.");

static const u8 sForcePalmDescription[] = _(
    "Palmada rápida que puede\n"
    "paralizar al enemigo.");

static const u8 sAuraSphereDescription[] = _(
    "Esfera imbuida en aura\n"
    "totalmente ineludible.");

static const u8 sRockPolishDescription[] = _(
    "Pule el cuerpo para subir\n"
    "mucho la Velocidad.");

static const u8 sPoisonJabDescription[] = _(
    "Ataque punzante que puede\n"
    "envenenar al enemigo.");

static const u8 sDarkPulseDescription[] = _(
    "Ataca con un aura oscura.\n"
    "Puede causar retroceso.");

static const u8 sNightSlashDescription[] = _(
    "Tiene alta propabilidad\n"
    "de golpe crítico.");

static const u8 sAquaTailDescription[] = _(
    "Balancea la cola como una\n"
    "ola para atacar.");

static const u8 sSeedBombDescription[] = _(
    "Bombardea al enemigo\n"
    "con una gran semilla.");

static const u8 sAirSlashDescription[] = _(
    "Ataca con un hoja voladora.\n"
    "Puede hacer retroceder.");

static const u8 sXScissorDescription[] = _(
    "Corta al enemigo con\n"
    "cuchillas, guadañas, etc.");

static const u8 sBugBuzzDescription[] = _(
    "Una gran onda sonora que\n"
    "puede bajar la Def. Esp.");

static const u8 sDragonPulseDescription[] = _(
    "Genera una onda de choque\n"
    "para dañar al enemigo.");

static const u8 sDragonRushDescription[] = _(
    "Una gran carga violenta.\n"
    "Puede hacer retroceder.");

static const u8 sPowerGemDescription[] = _(
    "Ataca con rayos de luz que\n"
    "brillan como diamantes.");

static const u8 sVacuumWaveDescription[] = _(
    "Gira sus puños para lanzar\n"
    "ondas que golpean primero.");

static const u8 sFocusBlastDescription[] = _(
    "Ataque a plena potencia.\n"
    "Puede bajar la Def. Esp.");

static const u8 sEnergyBallDescription[] = _(
    "Ataca con poder natural.\n"
    "Puede bajar la Def. Esp.");

static const u8 sBraveBirdDescription[] = _(
    "Carga de baja altitud que\n"
    "hiere también al usuario.");

static const u8 sEarthPowerDescription[] = _(
    "Provoca una gran erupción.\n"
    "Puede bajar la Def. Esp.");

static const u8 sSwitcherooDescription[] = _(
    "Intercambia objetos con\n"
    "el enemigo rápidamente.");

static const u8 sNastyPlotDescription[] = _(
    "Piensa cosas maléficas y\n"
    "sube mucho el At. Esp.");

static const u8 sBulletPunchDescription[] = _(
    "Golpea con un puño muy\n"
    "veloz. Siempre va primero.");

static const u8 sIceShardDescription[] = _(
    "Lanza un trozo de hielo\n"
    "que siempre va primero.");

static const u8 sShadowClawDescription[] = _(
    "Golpea con una garra umbría.\n"
    "Probabilidad de crítico.");

static const u8 sThunderFangDescription[] = _(
    "Puede hacer retroceder o\n"
    "paralizar al enemigo.");

static const u8 sIceFangDescription[] = _(
    "Puede hacer retroceder o\n"
    "congelar al enemigo.");

static const u8 sFireFangDescription[] = _(
    "Puede hacer retroceder o\n"
    "quemar al enemigo.");

static const u8 sShadowSneakDescription[] = _(
    "Golpea primero usando la\n"
    "sombra del usuario.");

static const u8 sMudBombDescription[] = _(
    "Lanza un trozo de barro\n"
    "que baja la precisión.");

static const u8 sPsychoCutDescription[] = _(
    "Usa cuchillas psíquicas.\n"
    "Probabilidad de crítico.");

static const u8 sZenHeadbuttDescription[] = _(
    "Gran cabezazo que puede\n"
    "hacer retroceder.");

static const u8 sMirrorShotDescription[] = _(
    "Emite una luz cegadora que\n"
    "baja la precisión.");

static const u8 sFlashCannonDescription[] = _(
    "Lanza un golpe luminoso que\n"
    "puede bajar la Def. Esp.");

static const u8 sRockClimbDescription[] = _(
    "Carga contra el enemigo y\n"
    "puede llegar a confundirlo.");

static const u8 sDefogDescription[] = _(
    "Elimina obstáculos y baja\n"
    "la evasión del enemigo.");

static const u8 sTrickRoomDescription[] = _(
    "Los Pokémon lentos se\n"
    "mueven primero 5 turnos.");

static const u8 sDracoMeteorDescription[] = _(
    "Lanza meteoritos al enemigo.\n"
    "Baja mucho el At. Esp.");

static const u8 sDischargeDescription[] = _(
    "Electrifica a todos.\n"
    "Puede paralizarlos.");

static const u8 sPowerWhipDescription[] = _(
    "Azota al enemigo con\n"
    "lianas o tentáculos.");

static const u8 sCrossPoisonDescription[] = _(
    "Corte que puede envenenar\n"
    "y hacer un golpe crítico.");

static const u8 sGunkShotDescription[] = _(
    "Lanza basura al enemigo.\n"
    "También puede envenenar.");

static const u8 sIronHeadDescription[] = _(
    "Gran cabezazo al enemigo.\n"
    "Puede hacer retroceder.");

static const u8 sMagnetBombDescription[] = _(
    "Lanza un imán que golpea\n"
    "al enemigo sin fallar.");

static const u8 sStoneEdgeDescription[] = _(
    "Apuñala con muchas piedras.\n"
    "Probabilidad de crítico.");

static const u8 sCaptivateDescription[] = _(
    "Baja mucho el At. Esp del\n"
    "género opuesto.");

static const u8 sStealthRockDescription[] = _(
    "Esparce rocas que hieren\n"
    "cuando el enemigo cambia.");

static const u8 sGrassKnotDescription[] = _(
    "Un lazo que hace más daño\n"
    "a enemigos más pesados.");

static const u8 sChatterDescription[] = _(
    "Ataca con una onda sonora\n"
    "que puede causar confusión.");

static const u8 sJudgmentDescription[] = _(
    "Su tipo varía en función de\n"
    "la Tabla equipada.");

static const u8 sChargeBeamDescription[] = _(
    "Un rayo eléctrico que puede\n"
    "subir el At. Esp.");

static const u8 sWoodHammerDescription[] = _(
    "Gran impacto con el cuerpo\n"
    "que hiere al usuario.");

static const u8 sAquaJetDescription[] = _(
    "Golpea primero lanzándose\n"
    "contra el enemigo.");

static const u8 sAttackOrderDescription[] = _(
    "Los subordinados atacan.\n"
    "Probabilidad de crítico.");

static const u8 sDefendOrderDescription[] = _(
    "Sube Defensa y Def. Esp.\n"
    "con un escudo viviente.");

static const u8 sHealOrderDescription[] = _(
    "Los subordinados aparecen\n"
    "curan la mitad de los PS.");

static const u8 sHeadSmashDescription[] = _(
    "Cabezazo arriesgado que\n"
    "hiere seriamente al usuario.");

static const u8 sDoubleHitDescription[] = _(
    "Golpea al enemigo con la\n"
    "cola dos veces.");

static const u8 sRoarOfTimeDescription[] = _(
    "Poderoso, pero deja inmóvil\n"
    "al atacante 1 turno.");

static const u8 sSpacialRendDescription[] = _(
    "Distorsiona el espacio.\n"
    "Probabilidad de crítico.");

static const u8 sMagmaStormDescription[] = _(
    "Atrapa en un vórtice de\n"
    "llamas de 2 a 5 turnos.");

static const u8 sDarkVoidDescription[] = _(
    "Sume al enemigo en un sueño\n"
    "totalmente oscuro.");

static const u8 sSeedFlareDescription[] = _(
    "Genera una onda de choque\n"
    "que baja mucho la Def. Esp.");

static const u8 sOminousWindDescription[] = _(
    "Ataque repulsivo que puede\n"
    "subir las estadísticas.");

static const u8 sShadowForceDescription[] = _(
    "Desaparece en el primer\n"
    "turno y golpea al siguiente.");

static const u8 sHoneClawsDescription[] = _(
    "Afila las garras para subir\n"
    "el Ataque y la Precisión.");

static const u8 sWideGuardDescription[] = _(
    "Evita ataques multiobjetivo\n"
    "durante un turno.");

static const u8 sGuardSplitDescription[] = _(
    "Divide a partes iguales las\n"
    "defensas con el enemigo.");

static const u8 sPowerSplitDescription[] = _(
    "Divide a partes iguales el\n"
    "poder con el enemigo.");

static const u8 sWonderRoomDescription[] = _(
    "Intercambia la Defensa y la\n"
    "Def. Esp. durante 5 turnos.");

static const u8 sPsyshockDescription[] = _(
    "Ataca con una onda psíquica\n"
    "que causa daño físico.");

static const u8 sTailSlapDescription[] = _(
    "Golpea al enemigo con la\n"
    "cola de 2 a 5 veces.");

static const u8 sVenoshockDescription[] = _(
    "Hace el doble de daño si\n"
    "el enemigo está envenenado.");

static const u8 sAutotomizeDescription[] = _(
    "Se quita peso para subir\n"
    "mucho la Velocidad.");

static const u8 sRagePowderDescription[] = _(
    "Esparce polvo para que\n"
    "ataquen solo al usuario.");

static const u8 sTelekinesisDescription[] = _(
    "El enemigo flota 3 turnos\n"
    "y es más fácil de golpear.");

static const u8 sMagicRoomDescription[] = _(
    "Los objetos equipados no\n"
    "funcionan durante 5 turnos.");

static const u8 sSmackDownDescription[] = _(
    "Lanza una roca y tumba al\n"
    "enemigo en el suelo.");

static const u8 sStormThrowDescription[] = _(
    "Este ataque siempre hace un\n"
    "golpe crítico.");

static const u8 sFlameBurstDescription[] = _(
    "Llama abrasadora que golpea\n"
    "a todos los enemigos.");

static const u8 sSludgeWaveDescription[] = _(
    "Inunda al enemigo con una\n"
    "ola que puede envenenar.");

static const u8 sQuiverDanceDescription[] = _(
    "Baila para subir At. Esp.,\n"
    "Def Esp. y Velocidad.");

static const u8 sHeavySlamDescription[] = _(
    "Hace más daño si el usuario\n"
    "pesa más que el enemigo.");

static const u8 sSynchronoiseDescription[] = _(
    "Extraña onda que solo golpea\n"
    "a Pokémon del mismo tipo.");

static const u8 sElectroBallDescription[] = _(
    "Daña con un orbe a enemigos\n"
    "que son más lentos.");

static const u8 sSoakDescription[] = _(
    "Moja al enemigo y lo\n"
    "convierte en tipo Agua.");

static const u8 sFlameChargeDescription[] = _(
     "Ataca envuelto en llamas.\n"
    "Sube la Velocidad.");

static const u8 sCoilDescription[] = _(
    "Se enrrolla para subir\n"
    "Ataque, Defensa y Precisión.");

static const u8 sLowSweepDescription[] = _(
    "Golpea las piernas para\n"
    "bajar la Velocidad.");

static const u8 sAcidSprayDescription[] = _(
    "Esparce un ácido derretido.\n"
    "Baja mucho la Def. Esp.");

static const u8 sFoulPlayDescription[] = _(
    "Causa más daño cuanto más\n"
    "Ataque tenga el enemigo.");

static const u8 sSimpleBeamDescription[] = _(
    "Un rayo que convierte al\n"
    "enemigo en Simple.");

static const u8 sEntrainmentDescription[] = _(
    "El enemigo imita al usario,\n"
    "obteniendo su habilidad.");

static const u8 sAfterYouDescription[] = _(
    "Ayuda al enemigo, haciendo\n"
    "que se mueva primero.");

static const u8 sRoundDescription[] = _(
    "Una canción que causa daño.\n"
    "Los demás pueden unirse.");

static const u8 sEchoedVoiceDescription[] = _(
    "A cada turno que se use,\n"
    "hará más daño.");

static const u8 sChipAwayDescription[] = _(
    "Golpea sin tener en cuenta\n"
    "cambios de estadísticas.");

static const u8 sClearSmogDescription[] = _(
    "Haz de luz que elimina los\n"
    "cambios de estadísticas.");

static const u8 sStoredPowerDescription[] = _(
    "Más daño si el usuario\n"
    "se ha subido estadísticas.");

static const u8 sQuickGuardDescription[] = _(
    "Evita ataques de prioridad\n"
    "durante 1 turno.");

static const u8 sAllySwitchDescription[] = _(
    "El usuario cambia de lugar\n"
    "con su compañero.");

static const u8 sScaldDescription[] = _(
    "Lanza agua hirviendo al\n"
    "enemigo. Puede quemar.");

static const u8 sShellSmashDescription[] = _(
    "Sube estadísticas ofensivas,\n"
    "pero baja las defensivas.");

static const u8 sHealPulseDescription[] = _(
    "Restaura la mitad de los PS\n"
    "máximos del objetivo.");

static const u8 sHexDescription[] = _(
    "Doble de daño si el enemigo\n"
    "tiene un problema de estado.");

static const u8 sSkyDropDescription[] = _(
    "Se lleva al enemigo en el\n"
    "aire hasta el próximo turno.");

static const u8 sShiftGearDescription[] = _(
    "Gira sus mecanismos para\n"
    "subir Ataque y Velocidad.");

static const u8 sCircleThrowDescription[] = _(
    "Lanza al enemigo y termina\n"
    "el combate.");

static const u8 sIncinerateDescription[] = _(
    "Quema Bayas y Gemas,\n"
    "impidiendo su uso.");

static const u8 sQuashDescription[] = _(
    "Presiona al enemigo y hace\n"
    "que se mueva el último.");

static const u8 sAcrobaticsDescription[] = _(
    "Doble de daño si el usuario\n"
    "no lleva ningún objeto.");

static const u8 sReflectTypeDescription[] = _(
    "El usuario refleja el tipo\n"
    "del enemigo y lo copia.");

static const u8 sRetaliateDescription[] = _(
    "Hace más daño si hay un\n"
    "aliado caído en combate.");

static const u8 sFinalGambitDescription[] = _(
    "Se sacrifica para hacer el\n"
    "mismo daño que PS restantes.");

static const u8 sBestowDescription[] = _(
    "El usuario le da su objeto\n"
    "equipado al enemigo.");

static const u8 sInfernoDescription[] = _(
    "Poderoso y seguro para\n"
    "quemar, pero impreciso.");

static const u8 sWaterPledgeDescription[] = _(
    "Ataca con una columna de\n"
    "agua. Puede formar arcoíris.");

static const u8 sFirePledgeDescription[] = _(
    "Ataca con una columna de\n"
    "fuego. Puede quemar hierba.");

static const u8 sGrassPledgeDescription[] = _(
    "Ataca con una columna de\n"
    "hierba. Puede crear pantano.");

static const u8 sStruggleBugDescription[] = _(
    "Ataca resistiendo al enemigo\n"
    "y baja el At. Esp.");

static const u8 sBulldozeDescription[] = _(
    "Pisotea el suelo con fuerza.\n"
    "Baja la Velocidad.");

static const u8 sWorkUpDescription[] = _(
    "El usuario se despierta.\n"
    "Sube el Ataque y el At. Esp.");

static const u8 sElectrowebDescription[] = _(
    "Atrapa al enemigo en una red\n"
    "eléctrica y baja Velocidad.");

static const u8 sWildChargeDescription[] = _(
    "Embestida eléctrica que\n"
    "también hiere al agresor.");

static const u8 sDrillRunDescription[] = _(
    "Gira como un gran taladro.\n"
    "Probabilidad de crítico.");

static const u8 sDualChopDescription[] = _(
    "Ataca brutalmente y golpea\n"
    "dos veces.");

static const u8 sHeartStampDescription[] = _(
    "Golpe por sorpresa que\n"
    "puede hacer retroceder.");

static const u8 sRazorShellDescription[] = _(
    "Lanza conchas afiladas al\n"
    "enemigo y puede bajar Def.");

static const u8 sLeafTornadoDescription[] = _(
    "Envuelve en hojas al enemigo\n"
    "y le baja la precisión.");

static const u8 sSteamrollerDescription[] = _(
    "Embiste al enemigo con todo.\n"
    "Puede hacer retroceder.");

static const u8 sCottonGuardDescription[] = _(
    "Envuelve el cuerpo en\n"
    "algodón y sube mucho Def.");

static const u8 sNightDazeDescription[] = _(
    "Lanza una onda oscura.\n"
    "Puede bajar la precisión.");

static const u8 sHurricaneDescription[] = _(
    "Atrapa en un viento feroz\n"
    "que puede confundir.");

static const u8 sHeadChargeDescription[] = _(
    "Carga con toda la cabeza.\n"
    "También hiere al usuario.");

static const u8 sGearGrindDescription[] = _(
    "Lanza dos engranajes que\n"
    "golpean 2 veces.");

static const u8 sTechnoBlastDescription[] = _(
    "Su tipo varía en función\n"
    "de la ROM equipada.");

static const u8 sRelicSongDescription[] = _(
    "Ataca con una canción\n"
    "antigua que puede dormir.");

static const u8 sSecretSwordDescription[] = _(
    "Corta con un cuerno que daña\n"
    "físicamente al enemigo.");

static const u8 sGlaciateDescription[] = _(
    "Sopla aire frío a los\n"
    "enemigos y puede bajar Vel.");

static const u8 sBoltStrikeDescription[] = _(
    "Golpea con una gran cantidad\n"
    "de rayos. Puede paralizar.");

static const u8 sBlueFlareDescription[] = _(
    "Envuelve al enemigo en una\n"
    "llama azul. Puede quemar.");

static const u8 sFieryDanceDescription[] = _(
    "Baila envuelto en llamas.\n"
    "Puede subir el At. Esp.");

static const u8 sFreezeShockDescription[] = _(
    "Poderoso ataque de 2 turnos\n"
    "que puede paralizar.");

static const u8 sIceBurnDescription[] = _(
    "Poderoso ataque de 2 turnos\n"
    "que puede quemar.");

static const u8 sSnarlDescription[] = _(
    "Grita al enemigo y baja\n"
    "su At. Esp.");

static const u8 sIcicleCrashDescription[] = _(
    "Lanza carámbanos al enemigo\n"
    "y puede hacerlo retroceder.");

static const u8 sVCreateDescription[] = _(
    "Poderoso, pero baja Defensa\n"
    "Def. Esp. y Velocidad.");

static const u8 sFusionFlareDescription[] = _(
    "Invoca una bola de fuego.\n"
    "Combina bien con un rayo.");

static const u8 sFusionBoltDescription[] = _(
    "Invoca un rayo. Combina\n"
    "bien con una bola de fuego.");

static const u8 sFlyingPressDescription[] = _(
    "Ataque con daño de tipo\n"
    "Lucha y tipo Volador.");

static const u8 sMatBlockDescription[] = _(
    "Evita movimientos ofensivos\n"
    "durante 1 turno.");

static const u8 sBelchDescription[] = _(
    "Suelta un gran eructo.\n"
    "Debe comerse una Baya.");

static const u8 sRototillerDescription[] = _(
    "Sube Ataque y At. Esp. de\n"
    "Pokémon de tipo Planta.");

static const u8 sStickyWebDescription[] = _(
    "Ondea una red que ralentiza\n"
    "a los enemigos que entran.");

static const u8 sFellStingerDescription[] = _(
    "Si debilita al enemigo,\n"
    "el Ataque sube.");

static const u8 sTrickOrTreatDescription[] = _(
    "Chantajea al Pokémon y lo\n"
    "convierte en tipo Fantasma.");

static const u8 sNobleRoarDescription[] = _(
    "Intimida al enemigo, y le\n"
    "baja Ataque y At. Esp.");

static const u8 sIonDelugeDescription[] = _(
    "Electrifica los movimientos\n"
    "de tipo Normal con iones.");

static const u8 sParabolicChargeDescription[] = _(
    "Daña a Pokémon adyascentes\n"
    "y se cura la mitad de ello.");

static const u8 sForestsCurseDescription[] = _(
    "Maldice al enemigo y lo\n"
    "convierte en tipo Planta.");

static const u8 sPetalBlizzardDescription[] = _(
    "Creo una tormenta violenta\n"
    "de pétalos para atacar.");

static const u8 sFreezeDryDescription[] = _(
    "Muy eficaz contra el tipo\n"
    "Agua. Puede congelar.");

static const u8 sDisarmingVoiceDescription[] = _(
    "Llanto encantador que no\n"
    "puede ser evitado.");

static const u8 sPartingShotDescription[] = _(
    "Baja Ataque y At. Esp. del\n"
    "enemigo y luego, se cambia.");

static const u8 sTopsyTurvyDescription[] = _(
    "Intercambia los cambios de\n"
    "estadísticas del objetivo.");

static const u8 sDrainingKissDescription[] = _(
    "Ataque que absorbe la mitad\n"
    "del daño que inflige.");

static const u8 sCraftyShieldDescription[] = _(
    "Evita movimientos de estado\n"
    "durante 1 turno.");

static const u8 sFlowerShieldDescription[] = _(
    "Sube la Defensa de los\n"
    "Pokémon de tipo Planta.");

static const u8 sGrassyTerrainDescription[] = _(
    "Crea un campo de hierba por\n"
    "5 turnos. Restaura PS.");

static const u8 sMistyTerrainDescription[] = _(
    "Cubre campo con niebla por\n"
    "5 turnos. Evita estados.");

static const u8 sElectrifyDescription[] = _(
    "Convierte el próximo mov.\n"
    "del enemigo en tipo Eléc.");

static const u8 sPlayRoughDescription[] = _(
    "Hace una jugarreta y puede\n"
    "bajar el Ataque.");

static const u8 sFairyWindDescription[] = _(
    "Levanta polvo de hadas y\n"
    "golpea al enemigo.");

static const u8 sMoonblastDescription[] = _(
    "Ataca con poder lunar.\n"
    "Puede bajar el At. Esp.");

static const u8 sBoomburstDescription[] = _(
    "Ataca a todos con una\n"
    "onda sonora destructiva.");

static const u8 sFairyLockDescription[] = _(
    "Encierra a todos en el campo\n"
    "hasta el próximo turno.");

static const u8 sKingsShieldDescription[] = _(
    "Evita el daño y baja el\n"
    "Ataque del agresor.");

static const u8 sPlayNiceDescription[] = _(
    "Engaña al enemigo, bajando\n"
    "su Ataque sin fallar.");

static const u8 sConfideDescription[] = _(
    "Comparte un secreto y baja\n"
    "el At. Esp. del enemigo.");

static const u8 sDiamondStormDescription[] = _(
    "Desata una tormenta de\n"
    "diamantes. Puede subir Def.");

static const u8 sSteamEruptionDescription[] = _(
    "Cubre al enemigo con vapor\n"
    "ardiente que puede quemar.");

static const u8 sHyperspaceHoleDescription[] = _(
    "Ataca con un agujero negro\n"
    "que es ineludible.");

static const u8 sWaterShurikenDescription[] = _(
    "Lanza de 2 a 5 estrellas que\n"
    "siempre golpean primero.");

static const u8 sMysticalFireDescription[] = _(
    "Aliento de fuego que puede\n"
    "bajar el At. Esp.");

static const u8 sSpikyShieldDescription[] = _(
    "Evita el ataque y hiere al\n"
    "agresor si es físico.");

static const u8 sAromaticMistDescription[] = _(
    "Sube la Def. Esp. del\n"
    "Pokémon aliado.");

static const u8 sEerieImpulseDescription[] = _(
    "Expone al enemigo a ondas\n"
    "y baja mucho su At. Esp.");

static const u8 sVenomDrenchDescription[] = _(
    "Baja Ataque, At. Esp. y\n"
    "Velocidad de un envenenado.");

static const u8 sPowderDescription[] = _(
    "Daña con prioridad si va\n"
    "a usar un mov. tipo Fuego.");

static const u8 sGeomancyDescription[] = _(
    "Sube At. Esp., Def. Esp. y\n"
    "Velocidad en el 2º turno.");

static const u8 sMagneticFluxDescription[] = _(
    "Sube las Defensas a los que\n"
    "tengan Más y Menos.");

static const u8 sHappyHourDescription[] = _(
    "Dobla la cantidad de\n"
    "dinero recibido.");

static const u8 sElectricTerrainDescription[] = _(
    "Electrifica el campo por\n"
    "5 turnos. Evita dormirse.");

static const u8 sDazzlingGleamDescription[] = _(
    "Daña a los enemigos con\n"
    "una haz de luz brillante.");

static const u8 sCelebrateDescription[] = _(
    "Te felicita en tu\n"
    "cumpleaños.");

static const u8 sHoldHandsDescription[] = _(
    "Junta las manos con los\n"
    "aliados felizmente.");

static const u8 sBabyDollEyesDescription[] = _(
    "Baja el Ataque del enemigo\n"
    "antes de que se mueva.");

static const u8 sNuzzleDescription[] = _(
    "Frota las mejillas contra\n"
    "enemigo, paralizándolo.");

static const u8 sInfestationDescription[] = _(
    "Acosa al enemigo y lo ataca\n"
    "de 2 a 5 turnos.");

static const u8 sPowerUpPunchDescription[] = _(
    "Fuerte puñetazo que sube\n"
    "el Ataque del usuario.");

static const u8 sThousandArrowsDescription[] = _(
    "Puede golpear en el aire\n"
    "y lanzar contra el suelo.");

static const u8 sThousandWavesDescription[] = _(
    "No deja escapar a los que\n"
    "han sido heridos.");

static const u8 sLandsWrathDescription[] = _(
    "Libera la energía terrestre\n"
    "para atacar a los enemigos.");

static const u8 sLightOfRuinDescription[] = _(
    "Potente rayo de luz que\n"
    "también hiere al agresor.");

static const u8 sOriginPulseDescription[] = _(
    "Gran rayo de luz azul que\n"
    "golpea a ambos enemigos.");

static const u8 sPrecipiceBladesDescription[] = _(
    "Hojas de piedra que golpean\n"
    "a ambos enemigos.");

static const u8 sLavaPlumeDescription[] = _(
    "Llamas ardientes que abrasan\n"
    "todo alrededor del usuario.");

static const u8 sLeafStormDescription[] = _(
    "Tormenta de hojas. Baja\n"
    "mucho el At. Esp.");

static const u8 sShoreUpDescription[] = _(
    "Restaura PS del usuario,\n"
    "más si hay Tor. Arena.");

static const u8 sFirstImpressionDescription[] = _(
    "Golpea primero y fuerte.\n"
    "Solo funciona en turno 1.");

static const u8 sBanefulBunkerDescription[] = _(
    "Protege al usuario y\n"
    "envenena al contacto.");

static const u8 sSpiritShackleDescription[] = _(
    "No deja escapar enemigos\n"
    "que te hayan golpeado.");

static const u8 sDarkestLariatDescription[] = _(
    "Golpea con los brazos.\n"
    "Ignora cambios de estadíst.");

static const u8 sSparklingAriaDescription[] = _(
    "Canta con burbujas. Cura\n"
    "quemaduras al contacto.");

static const u8 sIceHammerDescription[] = _(
    "Golpea con un puñetazo.\n"
    "Baja Velocidad del usuario.");

static const u8 sFloralHealingDescription[] = _(
    "Restaura PS del objetivo.\n"
    "Más efectivo sobre hierba.");

static const u8 sHighHorsepowerDescription[] = _(
    "Embiste al enemigo con\n"
    "todo el cuerpo.");

static const u8 sStrengthSapDescription[] = _(
    "Restaura PS en función del\n"
    "Ataque enemigo y lo baja.");

static const u8 sSolarBladeDescription[] = _(
    "Carga 1{SUPER_ER} turno y\n"
    "corta en el 2º con una hoja.");

static const u8 sLeafageDescription[] = _(
    "Ataca con una ráfaga de\n"
    "hojas pequeñas.");

static const u8 sSpotlightDescription[] = _(
    "Hace atacar al enemigo\n"
    "el Pokémon bajo el foco.");

static const u8 sToxicThreadDescription[] = _(
    "Ataca con un hilo que\n"
    "envenena y baja Velocidad.");

static const u8 sLaserFocusDescription[] = _(
    "Garantiza que el próximo\n"
    "golpe sea crítico.");

static const u8 sGearUpDescription[] = _(
    "Sube el poder a los que\n"
    "tengan Más y Menos.");

static const u8 sThroatChopDescription[] = _(
    "Golpea la garganta para\n"
    "anular los mov. de sonido.");

static const u8 sPollenPuffDescription[] = _(
    "Causa daño a enemigos.\n"
    "Restaura PS de aliados.");

static const u8 sAnchorShotDescription[] = _(
    "Estrangula al enemigo con\n"
    "cadenas. No deja retroceder.");

static const u8 sPsychicTerrainDescription[] = _(
    "Invoca un campo extraño por\n"
    "5 turnos. Evita prioridad.");

static const u8 sLungeDescription[] = _(
    "Se lanza contra el enemigo\n"
    "y baja su Ataque.");

static const u8 sFireLashDescription[] = _(
    "Envuelve al enemigo en\n"
    "llamas y baja su Defensa.");

static const u8 sPowerTripDescription[] = _(
    "A más subida de estadíst.,\n"
    "del enemigo, más poder.");

static const u8 sBurnUpDescription[] = _(
    "Quema por completo al\n"
    "usaurio. Pierde tipo Fuego.");

static const u8 sSpeedSwapDescription[] = _(
    "Intercambia la Velocidad\n"
    "con la del objetivo.");

static const u8 sSmartStrikeDescription[] = _(
    "Golpea con un cuerno\n"
    "preciso que nunca falla.");

static const u8 sPurifyDescription[] = _(
    "Cura el estado del enemigo\n"
    "y restaura PS del usuario.");

static const u8 sRevelationDanceDescription[] = _(
    "Baile místico que usa el\n"
    "1.{SUPER_ER} tipo del usuario.");

static const u8 sCoreEnforcerDescription[] = _(
    "Rayo fulminante que anula\n"
    "la habilidad del enemigo.");

static const u8 sTropKickDescription[] = _(
    "Patada tropical intensa.\n"
    "Baja el Ataque.");

static const u8 sInstructDescription[] = _(
    "Ordena usar el último\n"
    "mov. del objetivo de nuevo.");

static const u8 sBeakBlastDescription[] = _(
    "Calienta el pico y ataca.\n"
    "Quema al contacto.");

static const u8 sClangingScalesDescription[] = _(
    "Fuerte ruido escamoso que\n"
    "baja la Defensa.");

static const u8 sDragonHammerDescription[] = _(
    "Mueve todo el cuerpo para\n"
    "golpear como un martillo.");

static const u8 sBrutalSwingDescription[] = _(
    "Movimiento violento que\n"
    "golpea todo el alrededor.");

static const u8 sAuroraVeilDescription[] = _(
    "Debilita los ataques. Solo\n"
    "funciona bajo el granizo.");

static const u8 sShellTrapDescription[] = _(
    "Pone una trampa de conchas\n"
    "que daña al contacto.");

static const u8 sFleurCannonDescription[] = _(
    "Fuerte rayo que baja\n"
    "muchísimo el At. Esp.");

static const u8 sPsychicFangsDescription[] = _(
    "Muerde con colmillos\n"
    "psíquicos. Destruye barreas.");

static const u8 sStompingTantrumDescription[] = _(
    "Pisa alrededor con furia.\n"
    "Más poderoso si falló antes.");

static const u8 sShadowBoneDescription[] = _(
    "Golpea con un hueso maldito.\n"
    "Puede bajar la Defensa.");

static const u8 sAccelerockDescription[] = _(
    "Golpea con una roca veloz\n"
    "que siempre da primero.");

static const u8 sLiquidationDescription[] = _(
    "Golpea al enemigo con agua.\n"
    "Puede bajar la Defensa.");

static const u8 sPrismaticLaserDescription[] = _(
    "Poderoso rayo de luz que\n"
    "te inmoviliza 1 turno.");

static const u8 sSpectralThiefDescription[] = _(
    "Roba el cambio de estadíst.\n"
    "y luego ataca.");

static const u8 sSunsteelStrikeDescription[] = _(
    "Golpe solar que ignora\n"
    "las habilidades.");

static const u8 sMoongeistBeamDescription[] = _(
    "Golpe lunar que ignora\n"
    "las habilidades.");

static const u8 sTearfulLookDescription[] = _(
    "El usuario da pena. Baja\n"
    "At. y At. Esp. del enemigo.");

static const u8 sZingZapDescription[] = _(
    "Impacto eléctrico que puede\n"
    "hacer retroceder.");

static const u8 sNaturesMadnessDescription[] = _(
    "Reduce a la mitad los PS\n"
    "del enemigo.");

static const u8 sMultiAttackDescription[] = _(
    "Ataque que varía en función\n"
    "del Disco equipado.");

static const u8 sMindBlownDescription[] = _(
    "El usuario explota su cabeza\n"
    "para dañar todo alrededor.");

static const u8 sPlasmaFistsDescription[] = _(
    "Golpea con puños eléctricos.\n"
    "Tipo Normal pasa a Eléc.");

static const u8 sPhotonGeyserDescription[] = _(
    "Categoría en función de si\n"
    "At. o At. Esp. es más alto.");

static const u8 sZippyZapDescription[] = _(
    "Ráfaga eléctrica prioritaria\n"
    "que siempre es crítica.");

static const u8 sSplishySplashDescription[] = _(
    "Gran onda eléctrica que\n"
    "puede paralizar al enemigo.");

static const u8 sFloatyFallDescription[] = _(
    "Flota y cae en picado.\n"
    "Puede hacer retroceder");

static const u8 sPikaPapowDescription[] = _(
    "El amor de Pikachu sube su\n"
    "poder. Nunca falla.");

static const u8 sBouncyBubbleDescription[] = _(
    "Un ataque que absorbe\n"
#if B_UPDATED_MOVE_DATA >= GEN_8
    "todo el daño infligido.");
#else
    "la mitad del daño infligido.");
#endif

static const u8 sBuzzyBuzzDescription[] = _(
    "Suelta un chispa eléctrica\n"
    "que siempre paraliza.");

static const u8 sSizzlySlideDescription[] = _(
    "El usuario se envuelve en.\n"
    "llamas y quema al enemigo.");

static const u8 sGlitzyGlowDescription[] = _(
    "Fuerza telequinética que\n"
    "baja el At. Esp.");

static const u8 sBaddyBadDescription[] = _(
    "Ataque maléfico que\n"
    "baja el Ataque.");

static const u8 sSappySeedDescription[] = _(
    "Esparce semillas que drenan\n"
    "PS cada turno.");

static const u8 sFreezyFrostDescription[] = _(
    "Cristal brumoso. Elimina los\n"
    "cambios de estadísticas.");

static const u8 sSparklySwirlDescription[] = _(
    "Torbellino aromático. Cura\n"
    "los estados del equipo.");

static const u8 sVeeveeVolleyDescription[] = _(
    "El amor de Eevee sube su\n"
    "poder. Nunca falla.");

static const u8 sDoubleIronBashDescription[] = _(
    "Gira y golpea con brazos.\n"
    "Puede hacer retroceder.");
    
// GEN 8
static const u8 sDynamaxCannonDescription[] = _(
    "Dispara un gran rayo. Daña\n"
    "el doble a enemigos Dinamax.");
    
static const u8 sSnipeShotDescription[] = _(
    "Ignora los efectos que\n"
    "atraen movimientos.");
    
static const u8 sJawLockDescription[] = _(
    "Evita escapar al enemigo\n"
    "y al usuario.");
    
static const u8 sStuffCheeksDescription[] = _(
    "El usuario se come la Baya\n"
    "y sube mucho la defensa.");
    
static const u8 sNoRetreatDescription[] = _(
    "Sube todas las estadísticas\n"
    "pero no deja escapar.");
    
static const u8 sTarShotDescription[] = _(
    "Baja Velocidad del enemigo\n"
    "y lo hace débil al Fuego.");
    
static const u8 sMagicPowderDescription[] = _(
    "Polvo mágico que cambia el\n"
    "objetivo a tipo Psíquico.");
    
static const u8 sDragonDartsDescription[] = _(
    "Ataca dos veces. 2 enemigos\n"
    "son golpeados por separado.");
    
static const u8 sTeatimeDescription[] = _(
    "Todos los Pokémon se comen\n"
    "sus Bayas en la hora del té.");
    
static const u8 sOctolockDescription[] = _(
    "Atrapa al enemigo. Baja Def.\n"
    "y Def Esp. cada turno.");
    
static const u8 sBoltBeakDescription[] = _(
    "Dobla su poder si el usuario\n"
    "se mueve primero.");
    
static const u8 sFishiousRendDescription[] = _(
    "Dobla su poder si el usuario\n"
    "se mueve primero.");
    
static const u8 sCourtChangeDescription[] = _(
    "Intercambia los efectos\n"
    "en cada lado del campo.");
    
static const u8 sClangorousSoulDescription[] = _(
    "Usa algunos PS para subir\n"
    "todas las estadísticas.");
    
static const u8 sBodyPressDescription[] = _(
    "Hace más daño en función\n"
    "de la Defensa del enemigo.");
    
static const u8 sDecorateDescription[] = _(
    "Sube muchísimo el Ataque y\n"
    "el At. Esp. del objetivo.");
    
static const u8 sDrumBeatingDescription[] = _(
    "Toca la batería y ataca.\n"
    "Baja Velocidad del enemigo.");
    
static const u8 sSnapTrapDescription[] = _(
    "Atrapa al objetivo en una\n"
    "trampa durante 4 o 5 turnos.");
    
static const u8 sPyroBallDescription[] = _(
    "Lanza un balón ardiente al\n"
    "objetivo. Puede quemar.");
    
static const u8 sBehemothBladeDescription[] = _(
    "Un gran espadazo. Daña\n"
    "el doble a enemigos Dinamax.");
    
static const u8 sBehemothBashDescription[] = _(
    "Golpe de escudo. Daña\n"
    "el doble a enemigos Dinamax.");
    
static const u8 sAuraWheelDescription[] = _(
    "Sube la Velocidad si golpea.\n"
    "Su tipo varía según la forma.");
    
static const u8 sBreakingSwipeDescription[] = _(
    "Agita la cola para atacar.\n"
    "Baja Ataque de los heridos.");
    
static const u8 sBranchPokeDescription[] = _(
    "Golpea con una rama\n"
    "puntiaguda.");
    
static const u8 sOverdriveDescription[] = _(
    "Toca la guitarra causando\n"
    "fuertes vibraciones.");
    
static const u8 sAppleAcidDescription[] = _(
    "Ácido de manzana que baja\n"
    "la Def. Esp. del enemigo.");
    
static const u8 sGravAppleDescription[] = _(
    "Deja caer una manzana que\n"
    "la Defensa del enemigo.");
    
static const u8 sSpiritBreakDescription[] = _(
    "Fuerza rompeespíritus. Baja\n"
    "el At. Esp del enemigo.");
    
static const u8 sStrangeSteamDescription[] = _(
    "Emite un vapor extraño\n"
    "que confunde al enemigo.");
    
static const u8 sLifeDewDescription[] = _(
    "Esparce agua para restaurar\n"
    "PS propios y de aliados.");
    
static const u8 sObstructDescription[] = _(
    "Protege y baja muchísimo la\n"
    "Defensa al contacto.");
    
static const u8 sFalseSurrenderDescription[] = _(
    "Se inclina y apuñala al\n"
    "enemigo. Nunca falla.");
    
static const u8 sMeteorAssaultDescription[] = _(
    "Ataca con un puerro grueso.\n"
    "Te inmoviliza 1 turno.");
    
static const u8 sEternabeamDescription[] = _(
    "Ataque muy poderoso.\n"
    "Te inmoviliza 1 turno.");
    
static const u8 sSteelBeamDescription[] = _(
    "Lanza un rayo ardiente que\n"
    "también hiere al agresor.");

static const u8 sExpandingForceDescription[] = _(
    "En Campo Psíquico golpea\n"
    "más fuerte y a todos.");

static const u8 sSteelRollerDescription[] = _(
    "Destruye el campo. Falla si\n"
    "no hay un campo activo.");

static const u8 sScaleShotDescription[] = _(
    "Dispara de 2 a 5 escamas.\n"
    "Sube Velocidad, baja Def.");

static const u8 sMeteorBeamDescription[] = _(
    "Ataque de 2 turnos que sube\n"
    "el At. Esp. antes de atacar.");

static const u8 sShellSideArmDescription[] = _(
    "Usa el poder ofensivo más\n"
    "grande. Puede envenenar.");

static const u8 sMistyExplosionDescription[] = _(
    "Golpea a todo y se debilita.\n"
    "Más fuerte en Campo Niebla.");

static const u8 sGrassyGlideDescription[] = _(
    "Se desliza y golpea. Va\n"
    "primero en Campo de Hierba.");

static const u8 sRisingVoltageDescription[] = _(
    "En Campo Eléctrico su\n"
    "potencia se duplica.");

static const u8 sTerrainPulseDescription[] = _(
    "Su poder y tipo varía en\n"
    "función del campo activo.");

static const u8 sSkitterSmackDescription[] = _(
    "Se desliza por detrás.\n"
    "Baja At. Esp. del enemigo.");

static const u8 sBurningJealousyDescription[] = _(
    "Quema a los enemigos con\n"
    "estadísticas potenciadas.");

static const u8 sLashOutDescription[] = _(
    "Su poder se duplica si ha\n"
    "bajado estad. este turno.");

static const u8 sPoltergeistDescription[] = _(
    "Controla el objeto del\n"
    "enemigo y lo ataca con él.");

static const u8 sCorrosiveGasDescription[] = _(
    "Gas corrosivo que derrite\n"
    "todos los objetos equipados.");

static const u8 sCoachingDescription[] = _(
    "Aconseja a los aliados para\n"
    "subir su Ataque y Defensa.");

static const u8 sFlipTurnDescription[] = _(
    "Ataca y corre para cambiarse\n"
    "con otro Pokémon del equipo.");

static const u8 sTripleAxelDescription[] = _(
    "3 patadas que se vuelven\n"
    "más poderosas en cada golpe.");

static const u8 sDualWingbeatDescription[] = _(
    "Golpea con las alas dos\n"
    "veces seguidas.");

static const u8 sScorchingSandsDescription[] = _(
    "Lanza arena ardiente al\n"
    "objetivo. Puede quemar.");

static const u8 sJungleHealingDescription[] = _(
    "Restaura PS y estados de sí\n"
    "mismo y de los aliados.");

static const u8 sWickedBlowDescription[] = _(
    "Golpe oscuro que siempre\n"
    "causa un golpe crítico.");

static const u8 sSurgingStrikesDescription[] = _(
    "3 azotes torrenciales que\n"
    "siempre son golpes críticos.");

static const u8 sThunderCageDescription[] = _(
    "Encierra al enemigo en una\n"
    "jaula eléc. de 2 a 5 turnos.");

static const u8 sDragonEnergyDescription[] = _(
    "Causa más daño si el\n"
    "usuario tiene más PS.");

static const u8 sFreezingGlareDescription[] = _(
    "Dispara un rayo por los ojos\n"
    "y puede congelar al enemigo.");

static const u8 sFieryWrathDescription[] = _(
    "Ataque lleno de furia que\n"
    "puede hacer retroceder.");

static const u8 sThunderousKickDescription[] = _(
    "Patada imbuida en rayos.\n"
    "Baja Defensa del enemigo.");

static const u8 sGlacialLanceDescription[] = _(
    "Ensarta con una lanza llena\n"
    "de carámbanos al enemigo.");

static const u8 sAstralBarrageDescription[] = _(
    "Envía espíritus para\n"
    "golpear al enemigo.");

static const u8 sEerieSpellDescription[] = _(
    "Poderoso ataque psíquico.\n"
    "Quita 3 PP al último mov.");

static const u8 sDireClawDescription[] = _(
    "Alta probabilidad crítica.\n"
    "Paraliza, envenena o duerme.");

// TODO: Translate Psyshield Bash onwards
static const u8 sPsyshieldBashDescription[] = _(
    "Hits a foe with psychic\n"
    "energy. May raise Defense.");

static const u8 sPowerShiftDescription[] = _(
    "The user swaps its Attack\n"
    "and Defense stats.");

static const u8 sStoneAxeDescription[] = _(
    "High critical hit ratio. Sets\n"
    "Splinters that hurt the foe.");

static const u8 sSpringtideStormDescription[] = _(
    "Wraps a foe in fierce winds.\n"
    "Varies with the user's form.");

static const u8 sMysticalPowerDescription[] = _(
    "A mysterious power strikes,\n"
    "raising the user's Sp. Atk.");

static const u8 sRagingFuryDescription[] = _(
    "A rampage of 2 to 3 turns\n"
    "that confuses the user.");

static const u8 sWaveCrashDescription[] = _(
    "A slam shrouded in water.\n"
    "It also hurts the user.");

static const u8 sChloroblastDescription[] = _(
    "A user-hurting blast of\n"
    "amassed chlorophyll.");

static const u8 sMountainGaleDescription[] = _(
    "Giant chunks of ice damage\n"
    "the foe. It may flinch.");

static const u8 sVictoryDanceDescription[] = _(
    "Dances to raise Attack,\n"
    "Defense and Speed.");

static const u8 sHeadlongRushDescription[] = _(
    "Hits with a full-body tackle.\n"
    "Lowers the users's defenses.");

static const u8 sBarbBarrageDescription[] = _(
    "Can poison on impact. Powers\n"
    "up against poisoned foes.");

static const u8 sEsperWingDescription[] = _(
    "High critical hit ratio.\n"
    "Ups the user's Speed.");

static const u8 sBitterMaliceDescription[] = _(
    "A spine-chilling resentment.\n"
    "May lower the foe's Attack.");

static const u8 sShelterDescription[] = _(
    "The user hardens their skin,\n"
    "sharply raising its Defense.");

static const u8 sTripleArrowsDescription[] = _(
    "High critical hit ratio.\n"
    "May lower Defense or flinch.");

static const u8 sInfernalParadeDescription[] = _(
    "Hurts a foe harder if it has\n"
    "an ailment. May leave a burn.");

static const u8 sCeaselessEdgeDescription[] = _(
    "High critical hit ratio. Sets\n"
    "Splinters that hurt the foe.");

static const u8 sBleakwindStormDescription[] = _(
    "Hits with brutal, cold winds.\n"
    "May lower the foe's Speed.");

static const u8 sWildboltStormDescription[] = _(
    "Hits with a brutal tempest.\n"
    "May inflict paralysis.");

static const u8 sSandsearStormDescription[] = _(
    "Hits with brutally hot sand.\n"
    "May inflict a burn.");

static const u8 sLunarBlessingDescription[] = _(
    "The user heals and cures\n"
    "itself and its ally.");

static const u8 sTakeHeartDescription[] = _(
    "The user lifts its spirits to\n"
    "heal and strengthen itself.");

static const u8 sTeraBlastDescription[] = _(
    "If the user's Terastallized,\n"
    "it hits with its Tera-type.");

static const u8 sSilkTrapDescription[] =_(
    "Protects itself, lowering\n"
    "Speed on contact.");

static const u8 sAxeKickDescription[] = _(
    "May miss and hurt the kicker.\n"
    "May cause confusion.");

static const u8 sLastRespectsDescription[] = _(
    "This move deals more damage\n"
    "for each defeated ally.");

static const u8 sLuminaCrashDescription[] = _(
    "A mind-affecting light\n"
    "harshly lowers Sp. Def.");

static const u8 sOrderUpDescription[] = _(
    "Boosts a user's stats\n"
    "depending on Tatsugiri.");

static const u8 sJetPunchDescription[] = _(
    "A punch is thrown at blinding\n"
    "speed to strike first.");

static const u8 sSpicyExtractDescription[] = _(
    "Sharply ups target's Attack,\n"
    "harshly lowers its Defense.");

static const u8 sSpinOutDescription[] = _(
    "Furiously strains its legs.\n"
    "Harshly lowers user's Speed.");

static const u8 sPopulationBombDescription[] = _(
    "The user's fellows hit one\n"
    "to ten times in a row.");

static const u8 sIceSpinnerDescription[] = _(
    "Ice-covered feet hit a foe\n"
    "and destroy the terrain.");

static const u8 sGlaiveRushDescription[] = _(
    "Foe attacks next turn can't\n"
    "miss and do double damage.");

static const u8 sRevivalBlessingDescription[] = _(
    "Revives a fainted party {PKMN}\n"
    "and restores half of its HP.");

static const u8 sSaltCureDescription[] = _(
    "Hurts foe every turn. Double\n"
    "damage to Steel and Water.");

static const u8 sTripleDiveDescription[] = _(
    "Hits target with splashes\n"
    "of water 3 times in a row.");

static const u8 sMortalSpinDescription[] = _(
    "Erases trap moves and Leech\n"
    "Seed. Poisons adjecent foes.");

static const u8 sDoodleDescription[] = _(
    "Changes user's and ally's\n"
    "Ability into the target's.");

static const u8 sFilletAwayDescription[] = _(
    "Sharply boosts offenses and\n"
    "Speed by using its own HP.");

static const u8 sKowtowCleaveDescription[] = _(
    "User slashes the foe after\n"
    "kowtowing. It never misses.");

static const u8 sFlowerTrickDescription[] = _(
    "Rigged bouquet. Always gets\n"
    "a critical hit, never missing.");

static const u8 sTorchSongDescription[] = _(
    "Flames scorch the target.\n"
    "Boosts the user's Sp. Atk.");

static const u8 sAquaStepDescription[] = _(
    "Hits with light, fluid dance\n"
    "steps. Ups the user's Speed.");

static const u8 sRagingBullDescription[] = _(
    "Tackle that breaks barriers.\n"
    "User's form determines type.");

static const u8 sMakeItRainDescription[] = _(
    "Lowers the user's Sp. Atk.\n"
    "Money is recovered after.");

static const u8 sRuinationDescription[] = _(
    "Summons a ruinous disaster\n"
    "and cuts half the foe's HP.");

static const u8 sCollisionCourseDescription[] = _(
    "Prehistoric explosion that's\n"
    "stronger if supereffective.");

static const u8 sElectroDriftDescription[] = _(
    "Futuristic electricity. It's\n"
    "stronger if supereffective.");

static const u8 sShedTailDescription[] = _(
    "Creates a Substitute for\n"
    "itself before switching out.");

static const u8 sChillyReceptionDescription[] =_(
    "Bad joke summons snowstorm.\n"
    "The user also switches out.");

static const u8 sTidyUpDescription[] = _(
    "User tidies up hazards and\n"
    "raises its Attack and Speed.");

static const u8 sSnowscapeDescription[] = _(
    "Summons a snowstorm that\n"
    "lasts for five turns.");

static const u8 sPounceDescription[] = _(
    "The user pounces on the foe,\n"
    "lowering its Speed.");

static const u8 sTrailblazeDescription[] = _(
    "The user attacks suddenly,\n"
    "raising its Speed.");

static const u8 sChillingWaterDescription[] = _(
    "A shower with ice-cold water\n"
    "lowers the target's Attack.");

static const u8 sHyperDrillDescription[] = _(
    "A spinning pointed part\n"
    "bypasses a foe's Protect.");

static const u8 sTwinBeamDescription[] = _(
    "Mystical eye-beams that hit\n"
    "the target twice in a row.");

static const u8 sRageFistDescription[] = _(
    "The more the user has been\n"
    "hit, the stronger the move.");

static const u8 sArmorCannonDescription[] = _(
    "A strong attack but lowers\n"
    "the defensive stats.");

static const u8 sBitterBladeDescription[] = _(
    "An attack that absorbs\n"
    "half the damage inflicted.");

static const u8 sDoubleShockDescription[] = _(
    "Discharges all electricity,\n"
    "losing the Electric type.");

static const u8 sGigatonHammerDescription[] = _(
    "Swings a huge hammer. Can't\n"
    "be used twice in a row.");

static const u8 sComeuppanceDescription[] = _(
    "Retaliates strongly against\n"
    "who last hurt the user.");

static const u8 sAquaCutterDescription[] = _(
    "Pressurized water cut with a\n"
    "high critical-hit ratio.");

static const u8 sBlazingTorqueDescription[] = _(
    "---");

static const u8 sWickedTorqueDescription[] = _(
    "---");

static const u8 sNoxiousTorqueDescription[] = _(
    "---");

static const u8 sCombatTorqueDescription[] = _(
    "---");

static const u8 sMagicalTorqueDescription[] = _(
    "---");

const u8 gNotDoneYetDescription[] = _(
    "Este movimiento no puede ser usado.\n"
    "Aún no se ha programado.");

#else
static const u8 sPoundDescription[] = _(
    "Pounds the foe with\n"
    "forelegs or tail.");

static const u8 sKarateChopDescription[] = _(
    "A chopping attack with a\n"
    "high critical-hit ratio.");

static const u8 sDoubleSlapDescription[] = _(
    "Repeatedly slaps the foe\n"
    "2 to 5 times.");

static const u8 sCometPunchDescription[] = _(
    "Repeatedly punches the foe\n"
    "2 to 5 times.");

static const u8 sMegaPunchDescription[] = _(
    "A strong punch thrown with\n"
    "incredible power.");

static const u8 sPayDayDescription[] = _(
    "Throws coins at the foe.\n"
    "Money is recovered after.");

static const u8 sFirePunchDescription[] = _(
    "A fiery punch that may burn\n"
    "the foe.");

static const u8 sIcePunchDescription[] = _(
    "An icy punch that may\n"
    "freeze the foe.");

static const u8 sThunderPunchDescription[] = _(
    "An electrified punch that\n"
    "may paralyze the foe.");

static const u8 sScratchDescription[] = _(
    "Scratches the foe with\n"
    "sharp claws.");

static const u8 sViseGripDescription[] = _(
    "Grips the foe with large and\n"
    "powerful pincers.");

static const u8 sGuillotineDescription[] = _(
    "A powerful pincer attack\n"
    "that may cause fainting.");

static const u8 sRazorWindDescription[] = _(
    "A 2-turn move that strikes\n"
    "the foe on the 2nd turn.");

static const u8 sSwordsDanceDescription[] = _(
    "A fighting dance that\n"
    "sharply raises Attack.");

static const u8 sCutDescription[] = _(
    "Cuts the foe with sharp\n"
    "scythes, claws, etc.");

static const u8 sGustDescription[] = _(
    "Strikes the foe with a gust\n"
    "of wind whipped up by wings.");

static const u8 sWingAttackDescription[] = _(
    "Strikes the foe with wings\n"
    "spread wide.");

static const u8 sWhirlwindDescription[] = _(
    "Blows away the foe with\n"
    "wind and ends the battle.");

static const u8 sFlyDescription[] = _(
    "Flies up on the first turn,\n"
    "then strikes the next turn.");

static const u8 sBindDescription[] = _(
    "Binds and squeezes the foe\n"
    "for "BINDING_TURNS" turns.");

static const u8 sSlamDescription[] = _(
    "Slams the foe with sparkles\n"
    "to lower it's Defense.");

static const u8 sVineWhipDescription[] = _(
    "Strikes the foe with\n"
    "slender, whiplike vines.");

static const u8 sStompDescription[] = _(
    "Stomps the enemy with a big\n"
    "foot. May cause flinching.");

static const u8 sDoubleKickDescription[] = _(
    "A double-kicking attack\n"
    "that strikes the foe twice.");

static const u8 sMegaKickDescription[] = _(
    "An extremely powerful kick\n"
    "with intense force.");

static const u8 sJumpKickDescription[] = _(
    "A strong jumping kick. May\n"
    "miss and hurt the kicker.");

static const u8 sRollingKickDescription[] = _(
    "A fast kick delivered from\n"
    "a rapid spin.");

static const u8 sSandAttackDescription[] = _(
    "Reduces the foe's accuracy\n"
    "by hurling sand in its face.");

static const u8 sHeadbuttDescription[] = _(
    "A ramming attack that may\n"
    "cause flinching.");

static const u8 sHornAttackDescription[] = _(
    "Jabs the foe with sharp\n"
    "horns.");

static const u8 sFuryAttackDescription[] = _(
    "Jabs the foe 2 to 5 times\n"
    "with sharp horns, etc.");

static const u8 sHornDrillDescription[] = _(
    "A one-hit KO attack that\n"
    "uses a horn like a drill.");

static const u8 sTackleDescription[] = _(
    "Charges the foe with a full-\n"
    "body tackle.");

static const u8 sBodySlamDescription[] = _(
    "A full-body slam that may\n"
    "cause paralysis.");

static const u8 sWrapDescription[] = _(
    "Wraps and squeezes the foe\n"
    BINDING_TURNS" times with vines, etc.");

static const u8 sTakeDownDescription[] = _(
    "A reckless charge attack\n"
    "that also hurts the user.");

static const u8 sThrashDescription[] = _(
    "A rampage of 2 to 3 turns\n"
    "that confuses the user.");

static const u8 sDoubleEdgeDescription[] = _(
    "A life-risking tackle that\n"
    "also hurts the user.");

static const u8 sTailWhipDescription[] = _(
    "Wags the tail to lower the\n"
    "foe's Defense.");

static const u8 sPoisonStingDescription[] = _(
    "A toxic attack with barbs,\n"
    "etc., that may poison.");

static const u8 sTwineedleDescription[] = _(
    "Stingers on the forelegs\n"
    "jab the foe twice.");

static const u8 sPinMissileDescription[] = _(
    "Sharp pins are fired to\n"
    "strike 2 to 5 times.");

static const u8 sLeerDescription[] = _(
    "Frightens the foe with a\n"
    "leer to lower Defense.");

static const u8 sBiteDescription[] = _(
    "Bites with vicious fangs.\n"
    "May cause flinching.");

static const u8 sGrowlDescription[] = _(
    "Growls cutely to reduce the\n"
    "foe's Attack.");

static const u8 sRoarDescription[] = _(
    "Makes the foe flee to end\n"
    "the battle.");

static const u8 sSingDescription[] = _(
    "A soothing song lulls the\n"
    "foe into a deep slumber.");

static const u8 sSupersonicDescription[] = _(
    "Emits bizarre sound waves\n"
    "that may confuse the foe.");

static const u8 sSonicBoomDescription[] = _(
    "Launches shock waves that\n"
    "always inflict 20 HP damage.");

static const u8 sDisableDescription[] = _(
    "Psychically disables one of\n"
    "the foe's moves.");

static const u8 sAcidDescription[] = _(
    "Sprays a hide-melting acid.\n"
    "May lower Defense.");

static const u8 sEmberDescription[] = _(
    "A weak fire attack that may\n"
    "inflict a burn.");

static const u8 sFlamethrowerDescription[] = _(
    "A powerful fire attack that\n"
    "may inflict a burn.");

static const u8 sMistDescription[] = _(
    "Creates a mist that stops\n"
    "reduction of abilities.");

static const u8 sWaterGunDescription[] = _(
    "Squirts water to attack\n"
    "the foe.");

static const u8 sHydroPumpDescription[] = _(
    "Blasts water at high power\n"
    "to strike the foe.");

static const u8 sSurfDescription[] = _(
    "Creates a huge wave, then\n"
    "crashes it down on the foe.");

static const u8 sIceBeamDescription[] = _(
    "Blasts the foe with an icy\n"
    "beam that may freeze it.");

static const u8 sBlizzardDescription[] = _(
    "Hits the foe with an icy\n"
    "storm that may freeze it.");

static const u8 sPsybeamDescription[] = _(
    "Fires a peculiar ray that\n"
    "may confuse the foe.");

static const u8 sBubbleBeamDescription[] = _(
    "Forcefully sprays bubbles\n"
    "that may lower Speed.");

static const u8 sAuroraBeamDescription[] = _(
    "Fires a rainbow-colored\n"
    "beam that may lower Attack.");

static const u8 sHyperBeamDescription[] = _(
    "Powerful, but leaves the\n"
    "user immobile the next turn.");

static const u8 sPeckDescription[] = _(
    "Attacks the foe with a\n"
    "jabbing beak, etc.");

static const u8 sDrillPeckDescription[] = _(
    "A corkscrewing attack with\n"
    "the beak acting as a drill.");

static const u8 sSubmissionDescription[] = _(
    "A reckless body slam that\n"
    "also hurts the user.");

static const u8 sLowKickDescription[] = _(
    "A kick that inflicts more\n"
    "damage on heavier foes.");

static const u8 sCounterDescription[] = _(
    "Retaliates any physical hit\n"
    "with double the power.");

static const u8 sSeismicTossDescription[] = _(
    "Inflicts damage identical\n"
    "to the user's level.");

static const u8 sStrengthDescription[] = _(
    "Builds enormous power,\n"
    "then slams the foe.");

static const u8 sAbsorbDescription[] = _(
    "An attack that absorbs\n"
    "half the damage inflicted.");

static const u8 sMegaDrainDescription[] = _(
    "An attack that absorbs\n"
    "half the damage inflicted.");

static const u8 sLeechSeedDescription[] = _(
    "Plants a seed on the foe to\n"
    "steal HP on every turn.");

static const u8 sGrowthDescription[] = _(
    "Forces the body to grow\n"
    "and heightens Sp. Atk.");

static const u8 sRazorLeafDescription[] = _(
    "Cuts the enemy with leaves.\n"
    "High critical-hit ratio.");

static const u8 sSolarBeamDescription[] = _(
    "Absorbs light in one turn,\n"
    "then attacks next turn.");

static const u8 sPoisonPowderDescription[] = _(
    "Scatters a toxic powder\n"
    "that may poison the foe.");

static const u8 sStunSporeDescription[] = _(
    "Scatters a powder that may\n"
    "paralyze the foe.");

static const u8 sSleepPowderDescription[] = _(
    "Scatters a powder that may\n"
    "cause the foe to sleep.");

static const u8 sPetalDanceDescription[] = _(
    "A rampage of 2 to 3 turns\n"
    "that confuses the user.");

static const u8 sStringShotDescription[] = _(
    "Binds the foe with string\n"
    "to reduce its Speed.");

static const u8 sDragonRageDescription[] = _(
    "Launches shock waves that\n"
    "always inflict 40 HP damage.");

static const u8 sFireSpinDescription[] = _(
    "Traps the foe in a ring of\n"
    "fire for "BINDING_TURNS" turns.");

static const u8 sThunderShockDescription[] = _(
    "An electrical attack that\n"
    "may paralyze the foe.");

static const u8 sThunderboltDescription[] = _(
    "A strong electrical attack\n"
    "that may paralyze the foe.");

static const u8 sThunderWaveDescription[] = _(
    "A weak jolt of electricity\n"
    "that paralyzes the foe.");

static const u8 sThunderDescription[] = _(
    "A lightning attack that may\n"
    "cause paralysis.");

static const u8 sRockThrowDescription[] = _(
    "Throws small rocks to\n"
    "strike the foe.");

static const u8 sEarthquakeDescription[] = _(
    "A powerful quake, but has\n"
    "no effect on flying foes.");

static const u8 sFissureDescription[] = _(
    "A one-hit KO move that\n"
    "drops the foe in a fissure.");

static const u8 sDigDescription[] = _(
    "Digs underground the first\n"
    "turn and strikes next turn.");

static const u8 sToxicDescription[] = _(
    "Poisons the foe with an\n"
    "intensifying toxin.");

static const u8 sConfusionDescription[] = _(
    "A psychic attack that may\n"
    "cause confusion.");

static const u8 sPsychicDescription[] = _(
    "A powerful psychic attack\n"
    "that may lower Sp. Def.");

static const u8 sHypnosisDescription[] = _(
    "A hypnotizing move that\n"
    "may induce sleep.");

static const u8 sMeditateDescription[] = _(
    "Meditates in a peaceful\n"
    "fashion to raise Attack.");

static const u8 sAgilityDescription[] = _(
    "Relaxes the body to sharply\n"
    "boost Speed.");

static const u8 sQuickAttackDescription[] = _(
    "An extremely fast attack\n"
    "that always strikes first.");

static const u8 sRageDescription[] = _(
    "Raises the user's Attack\n"
    "every time it is hit.");

static const u8 sTeleportDescription[] = _(
    "A psychic move for fleeing\n"
    "from battle instantly.");

static const u8 sNightShadeDescription[] = _(
    "Inflicts damage identical\n"
    "to the user's level.");

static const u8 sMimicDescription[] = _(
    "Copies a move used by the\n"
    "foe during one battle.");

static const u8 sScreechDescription[] = _(
    "Emits a screech to sharply\n"
    "reduce the foe's Defense.");

static const u8 sDoubleTeamDescription[] = _(
    "Creates illusory copies to\n"
    "raise evasiveness.");

static const u8 sRecoverDescription[] = _(
    "Recovers up to half the\n"
    "user's maximum HP.");

static const u8 sHardenDescription[] = _(
    "Stiffens the body's \n"
    "muscles to raise Defense.");

static const u8 sMinimizeDescription[] = _(
    "Minimizes the user's size\n"
    "to raise evasiveness.");

static const u8 sSmokescreenDescription[] = _(
    "Lowers the foe's accuracy\n"
    "using smoke, ink, etc.");

static const u8 sConfuseRayDescription[] = _(
    "A sinister ray that\n"
    "confuses the foe.");

static const u8 sWithdrawDescription[] = _(
    "Withdraws the body into its\n"
    "hard shell to raise Defense.");

static const u8 sDefenseCurlDescription[] = _(
    "Curls up to conceal weak\n"
    "spots and raise Defense.");

static const u8 sBarrierDescription[] = _(
    "Creates a barrier that\n"
    "sharply raises Defense.");

static const u8 sLightScreenDescription[] = _(
    "Creates a wall of light that\n"
    "lowers Sp. Atk damage.");

static const u8 sHazeDescription[] = _(
    "Creates a black haze that\n"
    "eliminates all stat changes.");

static const u8 sReflectDescription[] = _(
    "Creates a wall of light that\n"
    "weakens physical attacks.");

static const u8 sFocusEnergyDescription[] = _(
    "Focuses power to raise the\n"
    "critical-hit ratio.");

static const u8 sBideDescription[] = _(
    "Endures attack for 2\n"
    "turns to retaliate double.");

static const u8 sMetronomeDescription[] = _(
    "Waggles a finger to use any\n"
    "Pokémon move at random.");

static const u8 sMirrorMoveDescription[] = _(
    "Counters the foe's attack\n"
    "with the same move.");

static const u8 sSelfDestructDescription[] = _(
    "Inflicts severe damage but\n"
    "makes the user faint.");

static const u8 sEggBombDescription[] = _(
    "An egg is forcibly hurled at\n"
    "the foe.");

static const u8 sLickDescription[] = _(
    "Licks with a long tongue to\n"
    "injure. May also paralyze.");

static const u8 sSmogDescription[] = _(
    "An exhaust-gas attack\n"
    "that may also poison.");

static const u8 sSludgeDescription[] = _(
    "Sludge is hurled to inflict\n"
    "damage. May also poison.");

static const u8 sBoneClubDescription[] = _(
    "Clubs the foe with a bone.\n"
    "May cause flinching.");

static const u8 sFireBlastDescription[] = _(
    "Incinerates everything it\n"
    "strikes. May cause a burn.");

static const u8 sWaterfallDescription[] = _(
    "Charges the foe with speed\n"
    "to climb waterfalls.");

static const u8 sClampDescription[] = _(
    "Traps and squeezes the\n"
    "foe for "BINDING_TURNS" turns.");

static const u8 sSwiftDescription[] = _(
    "Sprays star-shaped rays\n"
    "that never miss.");

static const u8 sSkullBashDescription[] = _(
    "Tucks in the head, then\n"
    "attacks on the next turn.");

static const u8 sSpikeCannonDescription[] = _(
    "Launches sharp spikes that\n"
    "strike 2 to 5 times.");

static const u8 sConstrictDescription[] = _(
    "Constricts to inflict pain.\n"
    "May lower Speed.");

static const u8 sAmnesiaDescription[] = _(
    "Forgets about something\n"
    "and sharply raises Sp. Def.");

static const u8 sKinesisDescription[] = _(
    "Distracts the foe.\n"
    "May lower accuracy.");

static const u8 sSoftBoiledDescription[] = _(
    "Recovers up to half the\n"
    "user's maximum HP.");

static const u8 sHighJumpKickDescription[] = _(
    "A jumping knee kick. If it\n"
    "misses, the user is hurt.");

static const u8 sGlareDescription[] = _(
    "Intimidates and frightens\n"
    "the foe into paralysis.");

static const u8 sDreamEaterDescription[] = _(
    "Takes one half the damage\n"
    "inflicted on a sleeping foe.");

static const u8 sPoisonGasDescription[] = _(
    "Envelops the foe in a toxic\n"
    "gas that may poison.");

static const u8 sBarrageDescription[] = _(
    "Hurls round objects at the\n"
    "foe 2 to 5 times.");

static const u8 sLeechLifeDescription[] = _(
    "An attack that steals half\n"
    "the damage inflicted.");

static const u8 sLovelyKissDescription[] = _(
    "Demands a kiss with a scary\n"
    "face that induces sleep.");

static const u8 sSkyAttackDescription[] = _(
    "Searches out weak spots,\n"
    "then strikes the next turn.");

static const u8 sTransformDescription[] = _(
    "Alters the user's cells to\n"
    "become a copy of the foe.");

static const u8 sBubbleDescription[] = _(
    "An attack using bubbles.\n"
    "May lower the foe's Speed.");

static const u8 sDizzyPunchDescription[] = _(
    "A rhythmic punch that may\n"
    "confuse the foe.");

static const u8 sSporeDescription[] = _(
    "Scatters a cloud of spores\n"
    "that always induce sleep.");

static const u8 sFlashDescription[] = _(
    "Looses a powerful blast of\n"
    "light that cuts accuracy.");

static const u8 sPsywaveDescription[] = _(
    "Attacks with a psychic\n"
    "wave of varying intensity.");

static const u8 sSplashDescription[] = _(
    "It's just a splash...\n"
    "Has no effect whatsoever.");

static const u8 sAcidArmorDescription[] = _(
    "Liquifies the user's body\n"
    "to sharply raise Defense.");

static const u8 sCrabhammerDescription[] = _(
    "Hammers with a pincer. Has a\n"
    "high critical-hit ratio.");

static const u8 sExplosionDescription[] = _(
    "Inflicts severe damage but\n"
    "makes the user faint.");

static const u8 sFurySwipesDescription[] = _(
    "Rakes the foe with sharp\n"
    "claws, etc., 2 to 5 times.");

static const u8 sBonemerangDescription[] = _(
    "Throws a bone boomerang\n"
    "that strikes twice.");

static const u8 sRestDescription[] = _(
    "The user sleeps for 2 turns,\n"
    "restoring HP and status.");

static const u8 sRockSlideDescription[] = _(
    "Large boulders are hurled.\n"
    "May cause flinching.");

static const u8 sHyperFangDescription[] = _(
    "Attacks with sharp fangs.\n"
    "May cause flinching.");

static const u8 sSharpenDescription[] = _(
    "Reduces the polygon count\n"
    "and raises Attack.");

static const u8 sConversionDescription[] = _(
    "Changes the user's type\n"
    "into a known move's type.");

static const u8 sTriAttackDescription[] = _(
    "Fires three types of beams\n"
    "at the same time.");

static const u8 sSuperFangDescription[] = _(
    "Attacks with sharp fangs\n"
    "and cuts half the foe's HP.");

static const u8 sSlashDescription[] = _(
    "Slashes with claws, etc. Has\n"
    "a high critical-hit ratio.");

static const u8 sSubstituteDescription[] = _(
    "Creates a decoy using 1/4\n"
    "of the user's maximum HP.");

static const u8 sStruggleDescription[] = _(
    "Used only if all PP are gone.\n"
    "Also hurts the user a little.");

static const u8 sSketchDescription[] = _(
    "Copies the foe's last move\n"
    "permanently.");

static const u8 sTripleKickDescription[] = _(
    "Kicks the foe 3 times in a\n"
    "row with rising intensity.");

static const u8 sThiefDescription[] = _(
    "While attacking, it may\n"
    "steal the foe's held item.");

static const u8 sSpiderWebDescription[] = _(
    "Ensnares the foe to stop it\n"
    "from fleeing or switching.");

static const u8 sMindReaderDescription[] = _(
    "Senses the foe's action to\n"
    "ensure the next move's hit.");

static const u8 sNightmareDescription[] = _(
    "Inflicts 1/4 damage on a\n"
    "sleeping foe every turn.");

static const u8 sFlameWheelDescription[] = _(
    "A fiery charge attack that\n"
    "may inflict a burn.");

static const u8 sSnoreDescription[] = _(
    "A loud attack that can be\n"
    "used only while asleep.");

static const u8 sCurseDescription[] = _(
    "A move that functions\n"
    "differently for GHOSTS.");

static const u8 sFlailDescription[] = _(
    "Inflicts more damage when\n"
    "the user's HP is down.");

static const u8 sConversion2Description[] = _(
    "Makes the user resistant\n"
    "to the last attack's type.");

static const u8 sAeroblastDescription[] = _(
    "Launches a vacuumed blast.\n"
    "High critical-hit ratio.");

static const u8 sCottonSporeDescription[] = _(
    "Spores cling to the foe,\n"
    "sharply reducing Speed.");

static const u8 sReversalDescription[] = _(
    "Inflicts more damage when\n"
    "the user's HP is down.");

static const u8 sSpiteDescription[] = _(
    "Spitefully cuts the PP\n"
    "of the foe's last move.");

static const u8 sPowderSnowDescription[] = _(
    "Blasts the foe with a snowy\n"
    "gust. May cause freezing.");

static const u8 sProtectDescription[] = _(
    "Evades attack, but may fail\n"
    "if used in succession.");

static const u8 sMachPunchDescription[] = _(
    "A punch is thrown at wicked\n"
    "speed to strike first.");

static const u8 sScaryFaceDescription[] = _(
    "Frightens with a scary face\n"
    "to sharply reduce Speed.");

static const u8 sFeintAttackDescription[] = _(
    "Draws the foe close, then\n"
    "strikes without fail.");

static const u8 sSweetKissDescription[] = _(
    "Demands a kiss with a cute\n"
    "look. May cause confusion.");

static const u8 sBellyDrumDescription[] = _(
    "Maximizes Attack while\n"
    "sacrificing HP.");

static const u8 sSludgeBombDescription[] = _(
    "Sludge is hurled to inflict\n"
    "damage. May also poison.");

static const u8 sMudSlapDescription[] = _(
    "Hurls mud in the foe's face\n"
    "to reduce its accuracy.");

static const u8 sOctazookaDescription[] = _(
    "Fires a lump of ink to\n"
    "damage and cut accuracy.");

static const u8 sSpikesDescription[] = _(
    "Sets spikes that hurt a \n"
    "foe switching in.");

static const u8 sZapCannonDescription[] = _(
    "Powerful and sure to cause\n"
    "paralysis, but inaccurate.");

static const u8 sForesightDescription[] = _(
    "Negates the foe's efforts\n"
    "to heighten evasiveness.");

static const u8 sDestinyBondDescription[] = _(
    "If the user faints, the foe\n"
    "is also made to faint.");

static const u8 sPerishSongDescription[] = _(
    "Any Pokémon hearing this\n"
    "song faints in 3 turns.");

static const u8 sIcyWindDescription[] = _(
    "A chilling attack that\n"
    "lowers the foe's Speed.");

static const u8 sDetectDescription[] = _(
    "Evades attack, but may fail\n"
    "if used in succession.");

static const u8 sBoneRushDescription[] = _(
    "Strikes the foe with a bone\n"
    "in hand 2 to 5 times.");

static const u8 sLockOnDescription[] = _(
    "Locks on to the foe to\n"
    "ensure the next move hits.");

static const u8 sOutrageDescription[] = _(
    "A rampage of 2 to 3 turns\n"
    "that confuses the user.");

static const u8 sSandstormDescription[] = _(
    "Causes a sandstorm that\n"
    "rages for several turns.");

static const u8 sGigaDrainDescription[] = _(
    "An attack that steals half\n"
    "the damage inflicted.");

static const u8 sEndureDescription[] = _(
    "Endures any attack for\n"
    "1 turn, leaving at least 1HP.");

static const u8 sCharmDescription[] = _(
    "Charms the foe and sharply\n"
    "reduces its Attack.");

static const u8 sRolloutDescription[] = _(
    "An attack lasting 5 turns\n"
    "with rising intensity.");

static const u8 sFalseSwipeDescription[] = _(
    "An attack that leaves the\n"
    "foe with at least 1 HP.");

static const u8 sSwaggerDescription[] = _(
    "Confuses the foe, but also\n"
    "sharply raises Attack.");

static const u8 sMilkDrinkDescription[] = _(
    "Recovers up to half the\n"
    "user's maximum HP.");

static const u8 sSparkDescription[] = _(
    "An electrified tackle that\n"
    "may paralyze the foe.");

static const u8 sFuryCutterDescription[] = _(
    "An attack that intensifies\n"
    "on each successive hit.");

static const u8 sSteelWingDescription[] = _(
    "Strikes the foe with hard\n"
    "wings spread wide.");

static const u8 sMeanLookDescription[] = _(
    "Fixes the foe with a mean\n"
    "look that prevents escape.");

static const u8 sAttractDescription[] = _(
    "Makes the opposite gender\n"
    "less likely to attack.");

static const u8 sSleepTalkDescription[] = _(
    "Uses an available move\n"
    "randomly while asleep.");

static const u8 sHealBellDescription[] = _(
    "Chimes soothingly to heal\n"
    "all status abnormalities.");

static const u8 sReturnDescription[] = _(
    "An attack that increases\n"
    "in power with friendship.");

static const u8 sPresentDescription[] = _(
    "A gift in the form of a\n"
    "bomb. May restore HP.");

static const u8 sFrustrationDescription[] = _(
    "An attack that is stronger\n"
    "if the Trainer is disliked.");

static const u8 sSafeguardDescription[] = _(
    "A mystical force prevents\n"
    "all status problems.");

static const u8 sPainSplitDescription[] = _(
    "Adds the user and foe's HP,\n"
    "then shares them equally.");

static const u8 sSacredFireDescription[] = _(
    "A mystical fire attack that\n"
    "may inflict a burn.");

static const u8 sMagnitudeDescription[] = _(
    "A ground-shaking attack\n"
    "of random intensity.");

static const u8 sDynamicPunchDescription[] = _(
    "Powerful and sure to cause\n"
    "confusion, but inaccurate.");

static const u8 sMegahornDescription[] = _(
    "A brutal ramming attack\n"
    "using out-thrust horns.");

static const u8 sDragonBreathDescription[] = _(
    "Strikes the foe with an\n"
    "incredible blast of breath.");

static const u8 sBatonPassDescription[] = _(
    "Switches out the user while\n"
    "keeping effects in play.");

static const u8 sEncoreDescription[] = _(
    "Makes the foe repeat its\n"
    "last move over 2 to 6 turns.");

static const u8 sPursuitDescription[] = _(
    "Inflicts bad damage if used\n"
    "on a foe switching out.");

static const u8 sRapidSpinDescription[] = _(
    "Spins the body at high\n"
    "speed to strike the foe.");

static const u8 sSweetScentDescription[] = _(
    "Allures the foe to reduce\n"
    "evasiveness.");

static const u8 sIronTailDescription[] = _(
    "Attacks with a rock-hard\n"
    "tail. May lower Defense.");

static const u8 sMetalClawDescription[] = _(
    "A claw attack that may\n"
    "raise the user's Attack.");

static const u8 sVitalThrowDescription[] = _(
    "Makes the user's move last,\n"
    "but it never misses.");

static const u8 sMorningSunDescription[] = _(
    "Restores HP. The amount\n"
    "varies with the weather.");

static const u8 sSynthesisDescription[] = _(
    "Restores HP. The amount\n"
    "varies with the weather.");

static const u8 sMoonlightDescription[] = _(
    "Restores HP. The amount\n"
    "varies with the weather.");

static const u8 sHiddenPowerDescription[] = _(
    "The effectiveness varies\n"
    "with the user.");

static const u8 sCrossChopDescription[] = _(
    "A double-chopping attack.\n"
    "High critical-hit ratio.");

static const u8 sTwisterDescription[] = _(
    "Whips up a vicious twister\n"
    "to tear at the foe.");

static const u8 sRainDanceDescription[] = _(
    "Boosts the power of Water-\n"
    "type moves for 5 turns.");

static const u8 sSunnyDayDescription[] = _(
    "Boosts the power of Fire-\n"
    "type moves for 5 turns.");

static const u8 sCrunchDescription[] = _(
    "Crunches with sharp fangs.\n"
    "May lower Defense.");

static const u8 sMirrorCoatDescription[] = _(
    "Counters the foe's special\n"
    "attack at double the power.");

static const u8 sPsychUpDescription[] = _(
    "Copies the foe's effect(s)\n"
    "and gives to the user.");

static const u8 sExtremeSpeedDescription[] = _(
    "An extremely fast and\n"
    "powerful attack.");

static const u8 sAncientPowerDescription[] = _(
    "An attack that may raise\n"
    "all stats.");

static const u8 sShadowBallDescription[] = _(
    "Hurls a black blob that may\n"
    "lower the foe's Sp. Def.");

static const u8 sFutureSightDescription[] = _(
    "Heightens inner power to\n"
    "strike 2 turns later.");

static const u8 sRockSmashDescription[] = _(
    "A rock-crushing attack\n"
    "that may lower Defense.");

static const u8 sWhirlpoolDescription[] = _(
    "Traps and hurts the foe in\n"
    "a whirlpool for "BINDING_TURNS" turns.");

static const u8 sBeatUpDescription[] = _(
    "Summons party Pokémon to\n"
    "join in the attack.");

static const u8 sFakeOutDescription[] = _(
    "A 1st-turn, 1st-strike move\n"
    "that causes flinching.");

static const u8 sUproarDescription[] = _(
#if B_UPROAR_TURNS >= GEN_5
    "Causes an uproar for 2 to 5\n"
#else
    "Causes an uproar for 3\n"
#endif
    "turns and prevents sleep.");

static const u8 sStockpileDescription[] = _(
    "Charges up power for up to\n"
    "3 turns.");

static const u8 sSpitUpDescription[] = _(
    "Releases stockpiled power\n"
    "(the more the better).");

static const u8 sSwallowDescription[] = _(
    "Absorbs stockpiled power\n"
    "and restores HP.");

static const u8 sHeatWaveDescription[] = _(
    "Exhales a hot breath on the\n"
    "foe. May inflict a burn.");

static const u8 sHailDescription[] = _(
    "Summons a hailstorm that\n"
    "strikes every turn.");

static const u8 sTormentDescription[] = _(
    "Torments the foe and stops\n"
    "successive use of a move.");

static const u8 sFlatterDescription[] = _(
    "Confuses the foe, but\n"
    "raises its Sp. Atk.");

static const u8 sWillOWispDescription[] = _(
    "Inflicts a burn on the foe\n"
    "with intense fire.");

static const u8 sMementoDescription[] = _(
    "The user faints and lowers\n"
    "the foe's abilities.");

static const u8 sFacadeDescription[] = _(
    "Boosts Attack when burned,\n"
    "paralyzed, or poisoned.");

static const u8 sFocusPunchDescription[] = _(
    "A powerful loyalty attack.\n"
    "The user flinches if hit.");

static const u8 sSmellingSaltsDescription[] = _(
    "Powerful against paralyzed\n"
    "foes, but also heals them.");

static const u8 sFollowMeDescription[] = _(
    "Draws attention to make\n"
    "foes attack only the user.");

static const u8 sNaturePowerDescription[] = _(
    "The type of attack varies\n"
    "depending on the location.");

static const u8 sChargeDescription[] = _(
    "Charges power to boost the\n"
    "electric move used next.");

static const u8 sTauntDescription[] = _(
    "Taunts the foe into only\n"
    "using attack moves.");

static const u8 sHelpingHandDescription[] = _(
    "Boosts the power of the\n"
    "recipient's moves.");

static const u8 sTrickDescription[] = _(
    "Tricks the foe into trading\n"
    "held items.");

static const u8 sRolePlayDescription[] = _(
    "Mimics the target and\n"
    "copies its special ability.");

static const u8 sWishDescription[] = _(
    "A wish that restores HP.\n"
    "It takes time to work.");

static const u8 sAssistDescription[] = _(
    "Attacks randomly with one\n"
    "of the partner's moves.");

static const u8 sIngrainDescription[] = _(
    "Lays roots that restore HP.\n"
    "The user can't switch out.");

static const u8 sSuperpowerDescription[] = _(
    "Boosts strength sharply,\n"
    "but lowers abilities.");

static const u8 sMagicCoatDescription[] = _(
    "Reflects special effects\n"
    "back to the attacker.");

static const u8 sRecycleDescription[] = _(
    "Recycles a used item for\n"
    "one more use.");

static const u8 sRevengeDescription[] = _(
    "An attack that gains power\n"
    "if injured by the foe.");

static const u8 sBrickBreakDescription[] = _(
    "Destroys barriers such as\n"
    "REFLECT and causes damage.");

static const u8 sYawnDescription[] = _(
    "Lulls the foe into yawning,\n"
    "then sleeping next turn.");

static const u8 sKnockOffDescription[] = _(
    "Knocks down the foe's held\n"
    "item to prevent its use.");

static const u8 sEndeavorDescription[] = _(
    "Gains power if the user's HP\n"
    "is lower than the foe's HP.");

static const u8 sEruptionDescription[] = _(
    "The higher the user's HP,\n"
    "the more damage caused.");

static const u8 sSkillSwapDescription[] = _(
    "The user swaps special\n"
    "abilities with the target.");

static const u8 sImprisonDescription[] = _(
    "Prevents foes from using\n"
    "moves known by the user.");

static const u8 sRefreshDescription[] = _(
    "Heals poisoning, paralysis,\n"
    "or a burn.");

static const u8 sGrudgeDescription[] = _(
    "If the user faints, deletes\n"
    "all PP of foe's last move.");

static const u8 sSnatchDescription[] = _(
    "Steals the effects of the\n"
    "move the target uses next.");

static const u8 sSecretPowerDescription[] = _(
    "An attack with effects\n"
    "that vary by location.");

static const u8 sDiveDescription[] = _(
    "Dives underwater the first\n"
    "turn and strikes next turn.");

static const u8 sArmThrustDescription[] = _(
    "Straight-arm punches that\n"
    "strike the foe 2 to 5 times.");

static const u8 sCamouflageDescription[] = _(
    "Alters the Pokémon's type\n"
    "depending on the location.");

static const u8 sTailGlowDescription[] = _(
    "Flashes a light that sharply\n"
    "raises Sp. Atk.");

static const u8 sLusterPurgeDescription[] = _(
    "Attacks with a burst of\n"
    "light. May lower Sp. Def.");

static const u8 sMistBallDescription[] = _(
    "Attacks with a flurry of\n"
    "down. May lower Sp. Atk.");

static const u8 sFeatherDanceDescription[] = _(
    "Envelops the foe with down\n"
    "to sharply reduce Attack.");

static const u8 sTeeterDanceDescription[] = _(
    "Confuses all Pokémon on\n"
    "the scene.");

static const u8 sBlazeKickDescription[] = _(
    "A kick with a high critical-\n"
    "hit ratio. May cause a burn.");

static const u8 sMudSportDescription[] = _(
    "Covers the user in mud to\n"
    "raise electrical resistance.");

static const u8 sIceBallDescription[] = _(
    "A 5-turn attack that gains\n"
    "power on successive hits.");

static const u8 sNeedleArmDescription[] = _(
    "Attacks with thorny arms.\n"
    "May cause flinching.");

static const u8 sSlackOffDescription[] = _(
    "Slacks off and restores\n"
    "half the maximum HP.");

static const u8 sHyperVoiceDescription[] = _(
    "A loud attack that uses\n"
    "sound waves to injure.");

static const u8 sPoisonFangDescription[] = _(
    "A sharp-fanged attack.\n"
    "May badly poison the foe.");

static const u8 sCrushClawDescription[] = _(
    "Tears at the foe with sharp\n"
    "claws. May lower Defense.");

static const u8 sBlastBurnDescription[] = _(
    "Powerful, but leaves the\n"
    "user immobile the next turn.");

static const u8 sHydroCannonDescription[] = _(
    "Powerful, but leaves the\n"
    "user immobile the next turn.");

static const u8 sMeteorMashDescription[] = _(
    "Fires a meteor-like punch.\n"
    "May raise Attack.");

static const u8 sAstonishDescription[] = _(
    "An attack that may shock\n"
    "the foe into flinching.");

static const u8 sWeatherBallDescription[] = _(
    "The move's type and power\n"
    "change with the weather.");

static const u8 sAromatherapyDescription[] = _(
    "Heals all status problems\n"
    "with a soothing scent.");

static const u8 sFakeTearsDescription[] = _(
    "Feigns crying to sharply\n"
    "lower the foe's Sp. Def.");

static const u8 sAirCutterDescription[] = _(
    "Hacks with razorlike wind.\n"
    "High critical-hit ratio.");

static const u8 sOverheatDescription[] = _(
    "Allows a full-power attack,\n"
    "but sharply lowers Sp. Atk.");

static const u8 sOdorSleuthDescription[] = _(
    "Negates the foe's efforts\n"
    "to heighten evasiveness.");

static const u8 sRockTombDescription[] = _(
    "Stops the foe from moving\n"
    "with rocks and cuts Speed.");

static const u8 sSilverWindDescription[] = _(
    "A powdery attack that may\n"
    "raise abilities.");

static const u8 sMetalSoundDescription[] = _(
    "Emits a horrible screech\n"
    "that sharply lowers Sp. Def.");

static const u8 sGrassWhistleDescription[] = _(
    "Lulls the foe into sleep\n"
    "with a pleasant melody.");

static const u8 sTickleDescription[] = _(
    "Makes the foe laugh to\n"
    "lower Attack and Defense.");

static const u8 sCosmicPowerDescription[] = _(
    "Raises Defense and Sp. Def\n"
    "with a mystic power.");

static const u8 sWaterSpoutDescription[] = _(
    "Inflicts more damage if the\n"
    "user's HP is high.");

static const u8 sSignalBeamDescription[] = _(
    "A strange beam attack that\n"
    "may confuse the foe.");

static const u8 sShadowPunchDescription[] = _(
    "An unavoidable punch that\n"
    "is thrown from shadows.");

static const u8 sExtrasensoryDescription[] = _(
    "Attacks with a peculiar\n"
    "power. May cause flinching.");

static const u8 sSkyUppercutDescription[] = _(
    "An uppercut thrown as if\n"
    "leaping into the sky.");

static const u8 sSandTombDescription[] = _(
    "Traps and hurts the foe in\n"
    "quicksand for "BINDING_TURNS" turns.");

static const u8 sSheerColdDescription[] = _(
    "A chilling attack that\n"
    "causes fainting if it hits.");

static const u8 sMuddyWaterDescription[] = _(
    "Attacks with muddy water.\n"
    "May lower accuracy.");

static const u8 sBulletSeedDescription[] = _(
    "Shoots 2 to 5 seeds in a row\n"
    "to strike the foe.");

static const u8 sAerialAceDescription[] = _(
    "An extremely speedy and\n"
    "unavoidable attack.");

static const u8 sIcicleSpearDescription[] = _(
    "Attacks the foe by firing\n"
    "2 to 5 icicles in a row.");

static const u8 sIronDefenseDescription[] = _(
    "Hardens the body's surface\n"
    "to sharply raise Defense.");

static const u8 sBlockDescription[] = _(
    "Blocks the foe's way to\n"
    "prevent escape.");

static const u8 sHowlDescription[] = _(
    "Howls to raise the spirit\n"
    "and boosts Attack.");

static const u8 sDragonClawDescription[] = _(
    "Slashes the foe with sharp\n"
    "claws.");

static const u8 sFrenzyPlantDescription[] = _(
    "Powerful, but leaves the\n"
    "user immobile the next turn.");

static const u8 sBulkUpDescription[] = _(
    "Bulks up the body to boost\n"
    "both Attack and Defense.");

static const u8 sBounceDescription[] = _(
    "Bounces up, then down the\n"
    "next turn. May paralyze.");

static const u8 sMudShotDescription[] = _(
    "Hurls mud at the foe and\n"
    "reduces Speed.");

static const u8 sPoisonTailDescription[] = _(
    "Has a high critical-hit\n"
    "ratio. May also poison.");

static const u8 sCovetDescription[] = _(
    "Cutely begs to obtain an\n"
    "item held by the foe.");

static const u8 sVoltTackleDescription[] = _(
    "A life-risking tackle that\n"
    "slightly hurts the user.");

static const u8 sMagicalLeafDescription[] = _(
    "Attacks with a strange leaf\n"
    "that cannot be evaded.");

static const u8 sWaterSportDescription[] = _(
    "The user becomes soaked to\n"
    "raise resistance to fire.");

static const u8 sCalmMindDescription[] = _(
    "Raises Sp. Atk and Sp. Def\n"
    "by focusing the mind.");

static const u8 sLeafBladeDescription[] = _(
    "Slashes with a sharp leaf.\n"
    "High critical-hit ratio.");

static const u8 sDragonDanceDescription[] = _(
    "A mystical dance that ups\n"
    "Attack and Speed.");

static const u8 sRockBlastDescription[] = _(
    "Hurls boulders at the foe\n"
    "2 to 5 times in a row.");

static const u8 sShockWaveDescription[] = _(
    "A fast and unavoidable\n"
    "electric attack.");

static const u8 sWaterPulseDescription[] = _(
    "Attacks with ultrasonic\n"
    "waves. May confuse the foe.");

static const u8 sDoomDesireDescription[] = _(
    "Summons strong sunlight to\n"
    "attack 2 turns later.");

static const u8 sPsychoBoostDescription[] = _(
    "Allows a full-power attack,\n"
    "but sharply lowers Sp. Atk.");

static const u8 sRoostDescription[] = _(
    "Restores the user's HP by\n"
    "half of its max HP.");

static const u8 sGravityDescription[] = _(
    "Gravity is intensified\n"
    "negating levitation.");

static const u8 sMiracleEyeDescription[] = _(
    "Negate evasiveness and\n"
    "Dark-type's immunities.");

static const u8 sWakeUpSlapDescription[] = _(
    "Powerful against sleeping\n"
    "foes, but also heals them.");

static const u8 sHammerArmDescription[] = _(
    "A swinging fist attack\n"
    "that also lowers Speed.");

static const u8 sGyroBallDescription[] = _(
    "A high-speed spin that does\n"
    "more damage to faster foes.");

static const u8 sHealingWishDescription[] = _(
    "The user faints to heal up\n"
    "the recipient.");

static const u8 sBrineDescription[] = _(
    "Does double damage to foes\n"
    "with half HP.");

static const u8 sNaturalGiftDescription[] = _(
    "The effectiveness varies\n"
    "with the held Berry.");

static const u8 sFeintDescription[] = _(
    "An attack that hits foes\n"
    "using moves like Protect.");

static const u8 sPluckDescription[] = _(
    "Eats the foe's held Berry\n"
    "gaining its effect.");

static const u8 sTailwindDescription[] = _(
    "Whips up a turbulent breeze\n"
    "that raises Speed.");

static const u8 sAcupressureDescription[] = _(
    "The user sharply raises\n"
    "one of its stats.");

static const u8 sMetalBurstDescription[] = _(
    "Retaliates any hit with\n"
    "greater power.");

static const u8 sUTurnDescription[] = _(
    "Does damage then switches\n"
    "out the user.");

static const u8 sCloseCombatDescription[] = _(
    "A strong attack but lowers\n"
    "the defensive stats.");

static const u8 sPaybackDescription[] = _(
    "An attack that gains power\n"
    "if the user moves last.");

static const u8 sAssuranceDescription[] = _(
    "An attack that gains power\n"
    "if the foe has been hurt.");

static const u8 sEmbargoDescription[] = _(
    "Prevents the foe from\n"
    "using any items.");

static const u8 sFlingDescription[] = _(
    "The effectiveness varies\n"
    "with the held item.");

static const u8 sPsychoShiftDescription[] = _(
    "Transfers status problems\n"
    "to the foe.");

static const u8 sTrumpCardDescription[] = _(
    "The less PP the move has\n"
    "the more damage it does.");

static const u8 sHealBlockDescription[] = _(
    "Prevents the foe from\n"
    "recovering any HP.");

static const u8 sWringOutDescription[] = _(
    "The higher the foe's HP\n"
    "the more damage caused.");

static const u8 sPowerTrickDescription[] = _(
    "The user swaps its Attack\n"
    "and Defense stats.");

static const u8 sGastroAcidDescription[] = _(
    "Stomach acid suppresses\n"
    "the foe's ability.");

static const u8 sLuckyChantDescription[] = _(
    "Prevents the foe from\n"
    "landing critical hits.");

static const u8 sMeFirstDescription[] = _(
    "Executes the foe's attack\n"
    "with greater power.");

static const u8 sCopycatDescription[] = _(
    "The user mimics the last\n"
    "move used by a foe.");

static const u8 sPowerSwapDescription[] = _(
    "Swaps changes to Attack\n"
    "and Sp. Atk with the foe.");

static const u8 sGuardSwapDescription[] = _(
    "Swaps changes to Defense\n"
    "and Sp. Def with the foe.");

static const u8 sPunishmentDescription[] = _(
    "Does more damage if the\n"
    "foe has powered up.");

static const u8 sLastResortDescription[] = _(
    "Can only be used if every\n"
    "other move has been used.");

static const u8 sWorrySeedDescription[] = _(
    "Plants a seed on the foe\n"
    "giving it Insomnia.");

static const u8 sSuckerPunchDescription[] = _(
    "Strikes first if the foe\n"
    "is preparing an attack.");

static const u8 sToxicSpikesDescription[] = _(
    "Sets spikes that poison a\n"
    "foe switching in.");

static const u8 sHeartSwapDescription[] = _(
    "Swaps any stat changes\n"
    "with the foe.");

static const u8 sAquaRingDescription[] = _(
    "Forms a veil of water\n"
    "that restores HP.");

static const u8 sMagnetRiseDescription[] = _(
    "The user levitates with\n"
    "electromagnetism.");

static const u8 sFlareBlitzDescription[] = _(
    "A charge that may burn the\n"
    "foe. Also hurts the user.");

static const u8 sForcePalmDescription[] = _(
    "A shock wave attack that\n"
    "may paralyze the foe.");

static const u8 sAuraSphereDescription[] = _(
    "Attacks with an aura blast\n"
    "that cannot be evaded.");

static const u8 sRockPolishDescription[] = _(
    "Polishes the body to\n"
    "sharply raise Speed.");

static const u8 sPoisonJabDescription[] = _(
    "A stabbing attack that\n"
    "may poison the foe.");

static const u8 sDarkPulseDescription[] = _(
    "Attacks with a horrible\n"
    "aura. May cause flinching.");

static const u8 sNightSlashDescription[] = _(
    "Hits as soon as possible.\n"
    "High critical-hit ratio.");

static const u8 sAquaTailDescription[] = _(
    "The user swings its tail\n"
    "like a wave to attack.");

static const u8 sSeedBombDescription[] = _(
    "A barrage of hard seeds\n"
    "is fired at the foe.");

static const u8 sAirSlashDescription[] = _(
    "Attacks with a blade of\n"
    "air. May cause flinching.");

static const u8 sXScissorDescription[] = _(
    "Slashes the foe with crossed\n"
    "scythes, claws, etc.");

static const u8 sBugBuzzDescription[] = _(
    "A damaging sound wave that\n"
    "may lower Sp. Def.");

static const u8 sDragonPulseDescription[] = _(
    "Generates a shock wave to\n"
    "damage the foe.");

static const u8 sDragonRushDescription[] = _(
    "Tackles the foe with menace.\n"
    "May cause flinching.");

static const u8 sPowerGemDescription[] = _(
    "Attacks with rays of light\n"
    "that sparkle like diamonds.");

static const u8 sVacuumWaveDescription[] = _(
    "Whirls its fists to send\n"
    "a wave that strikes first.");

static const u8 sFocusBlastDescription[] = _(
    "Attacks at full power.\n"
    "May lower Sp. Def.");

static const u8 sEnergyBallDescription[] = _(
    "Draws power from nature to\n"
    "attack. May lower Sp. Def.");

static const u8 sBraveBirdDescription[] = _(
    "A low altitude charge that\n"
    "also hurts the user.");

static const u8 sEarthPowerDescription[] = _(
    "Makes the ground erupt with\n"
    "power. May lower Sp. Def.");

static const u8 sSwitcherooDescription[] = _(
    "Swaps items with the foe\n"
    "faster than the eye can see.");

static const u8 sNastyPlotDescription[] = _(
    "Thinks bad thoughts to\n"
    "sharply boost Sp. Atk.");

static const u8 sBulletPunchDescription[] = _(
    "Punches as fast as a bul-\n"
    "let. It always hits first.");

static const u8 sIceShardDescription[] = _(
    "Hurls a chunk of ice that\n"
    "always strike first.");

static const u8 sShadowClawDescription[] = _(
    "Strikes with a shadow claw.\n"
    "High critical-hit ratio.");

static const u8 sThunderFangDescription[] = _(
    "May cause flinching or\n"
    "leave the foe paralyzed.");

static const u8 sIceFangDescription[] = _(
    "May cause flinching or\n"
    "leave the foe frozen.");

static const u8 sFireFangDescription[] = _(
    "May cause flinching or\n"
    "leave the foe with a burn.");

static const u8 sShadowSneakDescription[] = _(
    "Extends the user's shadow\n"
    "to strike first.");

static const u8 sMudBombDescription[] = _(
    "Throws a blob of mud to\n"
    "damage and cut accuracy.");

static const u8 sPsychoCutDescription[] = _(
    "Tears with psychic blades.\n"
    "High critical-hit ratio.");

static const u8 sZenHeadbuttDescription[] = _(
    "Hits with a strong head-\n"
    "butt. May cause flinching.");

static const u8 sMirrorShotDescription[] = _(
    "Emits a flash of energy to\n"
    "damage and cut accuracy.");

static const u8 sFlashCannonDescription[] = _(
    "Releases a blast of light\n"
    "that may lower Sp. Def.");

static const u8 sRockClimbDescription[] = _(
    "A charging attack that may\n"
    "confuse the foe.");

static const u8 sDefogDescription[] = _(
    "Removes obstacles and\n"
    "lowers evasion.");

static const u8 sTrickRoomDescription[] = _(
    "Slower Pokémon get to move\n"
    "first for 5 turns.");

static const u8 sDracoMeteorDescription[] = _(
    "Casts comets onto the foe.\n"
    "Harshly lowers the Sp. Atk.");

static const u8 sDischargeDescription[] = _(
    "Zaps the foes with electri-\n"
    "city. May paralyze them.");

static const u8 sPowerWhipDescription[] = _(
    "Violently lashes the foe\n"
    "with vines or tentacles.");

static const u8 sCrossPoisonDescription[] = _(
    "A slash that may poison a\n"
    "foe and do critical damage.");

static const u8 sGunkShotDescription[] = _(
    "Shoots filthy garbage at\n"
    "the foe. May also poison.");

static const u8 sIronHeadDescription[] = _(
    "Slams the foe with a hard\n"
    "head. May cause flinching.");

static const u8 sMagnetBombDescription[] = _(
    "Launches a magnet that\n"
    "strikes without fail.");

static const u8 sStoneEdgeDescription[] = _(
    "Stabs the foe with stones.\n"
    "High critical-hit ratio.");

static const u8 sCaptivateDescription[] = _(
    "Makes the opposite gender\n"
    "sharply reduce its Sp. Atk.");

static const u8 sStealthRockDescription[] = _(
    "Sets floating stones that\n"
    "hurt a foe switching in.");

static const u8 sGrassKnotDescription[] = _(
    "A snare attack that does\n"
    "more damage to heavier foes.");

static const u8 sChatterDescription[] = _(
    "Attacks with a sound wave\n"
    "that causes confusion.");

static const u8 sJudgmentDescription[] = _(
    "The type varies with the\n"
    "kind of Plate held.");

static const u8 sChargeBeamDescription[] = _(
    "Fires a beam of electricity.\n"
    "May raise Sp. Atk.");

static const u8 sWoodHammerDescription[] = _(
    "Slams the body into a foe.\n"
    "The user gets hurt too.");

static const u8 sAquaJetDescription[] = _(
    "Strikes first by dashing\n"
    "at the foe at a high speed.");

static const u8 sAttackOrderDescription[] = _(
    "Underlings pummel the foe.\n"
    "High critical-hit ratio.");

static const u8 sDefendOrderDescription[] = _(
    "Raises Defense and Sp. Def\n"
    "with a living shield.");

static const u8 sHealOrderDescription[] = _(
    "The user's underlings show\n"
    "up to heal half its max HP.");

static const u8 sHeadSmashDescription[] = _(
    "A life-risking headbutt that\n"
    "seriously hurts the user.");

static const u8 sDoubleHitDescription[] = _(
    "Slams the foe with a tail\n"
    "etc. Strikes twice.");

static const u8 sRoarOfTimeDescription[] = _(
    "Powerful, but leaves the\n"
    "user immobile the next turn.");

static const u8 sSpacialRendDescription[] = _(
    "Tears the foe, and space.\n"
    "High critical-hit ratio.");

static const u8 sMagmaStormDescription[] = _(
    "Traps the foe in a vortex\n"
    "of fire for "BINDING_TURNS" turns.");

static const u8 sDarkVoidDescription[] = _(
    "Drags the foe into total\n"
    "darkness, inducing Sleep.");

static const u8 sSeedFlareDescription[] = _(
    "Generates a shock wave that\n"
    "sharply reduces Sp. Def.");

static const u8 sOminousWindDescription[] = _(
    "A repulsive attack that may\n"
    "raise all stats.");

static const u8 sShadowForceDescription[] = _(
    "Vanishes on the first turn\n"
    "then strikes the next turn.");

static const u8 sHoneClawsDescription[] = _(
    "Sharpens its claws to raise\n"
    "Attack and Accuracy.");

static const u8 sWideGuardDescription[] = _(
    "Evades wide-ranging attacks\n"
    "for one turn.");

static const u8 sGuardSplitDescription[] = _(
    "Averages changes to Defense\n"
    "and Sp. Def with the foe.");

static const u8 sPowerSplitDescription[] = _(
    "Averages changes to Attack\n"
    "and Sp. Atk with the foe.");

static const u8 sWonderRoomDescription[] = _(
    "Defense and Sp. Def stats\n"
    "are swapped for 5 turns.");

static const u8 sPsyshockDescription[] = _(
    "Attacks with a psychic wave\n"
    "that does physical damage.");

static const u8 sTailSlapDescription[] = _(
    "Strikes the foe with its\n"
    "tail 2 to 5 times.");

static const u8 sVenoshockDescription[] = _(
    "Does double damage if the\n"
    "foe is poisoned.");

static const u8 sAutotomizeDescription[] = _(
    "Sheds additional weight to\n"
    "sharply boost Speed.");

static const u8 sRagePowderDescription[] = _(
    "Scatters powder to make\n"
    "foes attack only the user.");

static const u8 sTelekinesisDescription[] = _(
    "Makes the foe float. It is\n"
    "easier to hit for 3 turns.");

static const u8 sMagicRoomDescription[] = _(
    "Hold items lose their\n"
    "effects for 5 turns.");

static const u8 sSmackDownDescription[] = _(
    "Throws a rock to knock the\n"
    "foe down to the ground.");

static const u8 sStormThrowDescription[] = _(
    "This attack always results\n"
    "in a critical hit.");

static const u8 sFlameBurstDescription[] = _(
    "A bursting flame that does\n"
    "damage to all foes.");

static const u8 sSludgeWaveDescription[] = _(
    "Swamps the foe with a wave\n"
    "of sludge. May also poison.");

static const u8 sQuiverDanceDescription[] = _(
    "Dances to raise Sp. Atk\n"
    "Sp. Def and Speed.");

static const u8 sHeavySlamDescription[] = _(
    "Does more damage if the\n"
    "user outweighs the foe.");

static const u8 sSynchronoiseDescription[] = _(
    "An odd shock wave that only\n"
    "damages same-type foes.");

static const u8 sElectroBallDescription[] = _(
    "Hurls an orb that does more\n"
    "damage to slower foes.");

static const u8 sSoakDescription[] = _(
    "Sprays water at the foe\n"
    "making it Water-type.");

static const u8 sFlameChargeDescription[] = _(
    "Attacks in a cloak of\n"
    "flames. Raises Speed.");

static const u8 sCoilDescription[] = _(
    "Coils up to raise Attack\n"
    "Defense and Accuracy.");

static const u8 sLowSweepDescription[] = _(
    "Attacks the foe's legs\n"
    "lowering its Speed.");

static const u8 sAcidSprayDescription[] = _(
    "Sprays a hide-melting acid.\n"
    "Sharply reduces Sp. Def.");

static const u8 sFoulPlayDescription[] = _(
    "The higher the foe's Attack\n"
    "the more damage caused.");

static const u8 sSimpleBeamDescription[] = _(
    "A beam that changes the\n"
    "foe's ability to Simple.");

static const u8 sEntrainmentDescription[] = _(
    "Makes the foe mimic the\n"
    "user, gaining its ability.");

static const u8 sAfterYouDescription[] = _(
    "Helps out the foe, letting\n"
    "it move next.");

static const u8 sRoundDescription[] = _(
    "A song that inflicts damage.\n"
    "Others can join in too.");

static const u8 sEchoedVoiceDescription[] = _(
    "Does more damage every turn\n"
    "it is used.");

static const u8 sChipAwayDescription[] = _(
    "Strikes through the foe's\n"
    "stat changes.");

static const u8 sClearSmogDescription[] = _(
    "Attacks with white haze that\n"
    "eliminates all stat changes.");

static const u8 sStoredPowerDescription[] = _(
    "The higher the user's stats\n"
    "the more damage caused.");

static const u8 sQuickGuardDescription[] = _(
    "Evades priority attacks\n"
    "for one turn.");

static const u8 sAllySwitchDescription[] = _(
    "The user switches places\n"
    "with its partner.");

static const u8 sScaldDescription[] = _(
    "Shoots boiling water at the\n"
    "foe. May inflict a burn.");

static const u8 sShellSmashDescription[] = _(
    "Raises offensive stats, but\n"
    "lowers defensive stats.");

static const u8 sHealPulseDescription[] = _(
    "Recovers up to half the\n"
    "target's maximum HP.");

static const u8 sHexDescription[] = _(
    "Does double damage if the\n"
    "foe has a status problem.");

static const u8 sSkyDropDescription[] = _(
    "Takes the foe into the sky\n"
    "then drops it the next turn.");

static const u8 sShiftGearDescription[] = _(
    "Rotates its gears to raise\n"
    "Attack and Speed.");

static const u8 sCircleThrowDescription[] = _(
    "Knocks the foe away to end\n"
    "the battle.");

static const u8 sIncinerateDescription[] = _(
    "Burns up Berries and Gems\n"
    "preventing their use.");

static const u8 sQuashDescription[] = _(
    "Suppresses the foe, making\n"
    "it move last.");

static const u8 sAcrobaticsDescription[] = _(
    "Does double damage if the\n"
    "user has no item.");

static const u8 sReflectTypeDescription[] = _(
    "The user reflects the foe's\n"
    "type, copying it.");

static const u8 sRetaliateDescription[] = _(
    "An attack that does more\n"
    "damage if an ally fainted.");

static const u8 sFinalGambitDescription[] = _(
    "The user faints to damage\n"
    "the foe equal to its HP.");

static const u8 sBestowDescription[] = _(
    "The user gives its held\n"
    "item to the foe.");

static const u8 sInfernoDescription[] = _(
    "Powerful and sure to inflict\n"
    "a burn, but inaccurate.");

static const u8 sWaterPledgeDescription[] = _(
    "Attacks with a column of\n"
    "water. May make a rainbow.");

static const u8 sFirePledgeDescription[] = _(
    "Attacks with a column of\n"
    "fire. May burn the grass.");

static const u8 sGrassPledgeDescription[] = _(
    "Attacks with a column of\n"
    "grass. May create a swamp.");

static const u8 sStruggleBugDescription[] = _(
    "Resisting, the user attacks\n"
    "the foe. Lowers Sp. Atk.");

static const u8 sBulldozeDescription[] = _(
    "Stomps down on the ground.\n"
    "Lowers Speed.");

static const u8 sWorkUpDescription[] = _(
    "The user is roused.\n"
    "Ups Attack and Sp. Atk.");

static const u8 sElectrowebDescription[] = _(
    "Snares the foe with an\n"
    "electric net. Lowers Speed.");

static const u8 sWildChargeDescription[] = _(
    "An electrical tackle that\n"
    "also hurts the user.");

static const u8 sDrillRunDescription[] = _(
    "Spins its body like a drill.\n"
    "High critical-hit ratio.");

static const u8 sDualChopDescription[] = _(
    "Attacks with brutal hits\n"
    "that strike twice.");

static const u8 sHeartStampDescription[] = _(
    "A sudden blow after a cute\n"
    "act. May cause flinching.");

static const u8 sRazorShellDescription[] = _(
    "Tears at the foe with sharp\n"
    "shells. May lower Defense.");

static const u8 sLeafTornadoDescription[] = _(
    "Circles the foe with leaves\n"
    "to damage and cut accuracy.");

static const u8 sSteamrollerDescription[] = _(
    "Crushes the foe with its\n"
    "body. May cause flinching.");

static const u8 sCottonGuardDescription[] = _(
    "Wraps its body in cotton.\n"
    "Drastically raises Defense.");

static const u8 sNightDazeDescription[] = _(
    "Looses a pitch-black shock\n"
    "wave. May lower accuracy.");

static const u8 sHurricaneDescription[] = _(
    "Traps the foe in a fierce\n"
    "wind. May cause confusion.");

static const u8 sHeadChargeDescription[] = _(
    "A charge using guard hair.\n"
    "It hurts the user a little.");

static const u8 sGearGrindDescription[] = _(
    "Throws two steel gears\n"
    "that strike twice.");

static const u8 sTechnoBlastDescription[] = _(
    "The type varies with the\n"
    "kind of Drive held.");

static const u8 sRelicSongDescription[] = _(
    "Attacks with an ancient\n"
    "song. May induce sleep.");

static const u8 sSecretSwordDescription[] = _(
    "Cuts with a long horn that\n"
    "does physical damage.");

static const u8 sGlaciateDescription[] = _(
    "Blows very cold air at the\n"
    "foe. It lowers their Speed.");

static const u8 sBoltStrikeDescription[] = _(
    "Strikes with a great amount\n"
    "of lightning. May paralyze.");

static const u8 sBlueFlareDescription[] = _(
    "Engulfs the foe in a blue\n"
    "flame. May inflict a burn.");

static const u8 sFieryDanceDescription[] = _(
    "Dances cloaked in flames.\n"
    "May raise Sp. Atk.");

static const u8 sFreezeShockDescription[] = _(
    "A powerful 2-turn move that\n"
    "may paralyze the foe.");

static const u8 sIceBurnDescription[] = _(
    "A powerful 2-turn move that\n"
    "may inflict a burn.");

static const u8 sSnarlDescription[] = _(
    "Yells and rants at the foe\n"
    "lowering its Sp. Atk.");

static const u8 sIcicleCrashDescription[] = _(
    "Drops large icicles on the\n"
    "foe. May cause flinching.");

static const u8 sVCreateDescription[] = _(
    "Very powerful, but lowers\n"
    "Defense, Sp. Def and Speed.");

static const u8 sFusionFlareDescription[] = _(
    "Summons a fireball. Works\n"
    "well with a thunderbolt.");

static const u8 sFusionBoltDescription[] = _(
    "Summons a thunderbolt.\n"
    "Works well with a fireball.");

static const u8 sFlyingPressDescription[] = _(
    "This attack does Fighting\n"
    "and Flying-type damage.");

static const u8 sMatBlockDescription[] = _(
    "Evades damaging moves\n"
    "for one turn.");

static const u8 sBelchDescription[] = _(
    "Lets out a loud belch.\n"
    "Must eat a Berry to use it.");

static const u8 sRototillerDescription[] = _(
    "Ups the Attack and Sp. Atk\n"
    "of Grass-type Pokémon.");

static const u8 sStickyWebDescription[] = _(
    "Weaves a sticky net that\n"
    "slows foes switching in.");

static const u8 sFellStingerDescription[] = _(
    "If it knocks out a foe\n"
    "the Attack stat is raised.");

static const u8 sTrickOrTreatDescription[] = _(
    "Goes trick-or-treating\n"
    "making the foe Ghost-type.");

static const u8 sNobleRoarDescription[] = _(
    "Intimidates the foe, to cut\n"
    "Attack and Sp. Atk.");

static const u8 sIonDelugeDescription[] = _(
    "Electrifies Normal-type\n"
    "moves with charged atoms.");

static const u8 sParabolicChargeDescription[] = _(
    "Damages adjacent Pokémon and\n"
    "heals up by half of it.");

static const u8 sForestsCurseDescription[] = _(
    "Puts a curse on the foe\n"
    "making the foe Grass-type.");

static const u8 sPetalBlizzardDescription[] = _(
    "Stirs up a violent storm\n"
    "of petals to attack.");

static const u8 sFreezeDryDescription[] = _(
    "Super effective on Water-\n"
    "types. May cause freezing.");

static const u8 sDisarmingVoiceDescription[] = _(
    "Lets out a charming cry\n"
    "that cannot be evaded.");

static const u8 sPartingShotDescription[] = _(
    "Lowers the foe's Attack and\n"
    "Sp. Atk, then switches out.");

static const u8 sTopsyTurvyDescription[] = _(
    "Swaps all stat changes that\n"
    "affect the target.");

static const u8 sDrainingKissDescription[] = _(
    "An attack that absorbs over\n"
    "half the damage inflicted.");

static const u8 sCraftyShieldDescription[] = _(
    "Evades status moves for\n"
    "one turn.");

static const u8 sFlowerShieldDescription[] = _(
    "Raises the Defense of\n"
    "Grass-type Pokémon.");

static const u8 sGrassyTerrainDescription[] = _(
    "The ground turns to grass\n"
    "for 5 turns. Restores HP.");

static const u8 sMistyTerrainDescription[] = _(
    "Covers the ground with mist\n"
    "for 5 turns. Blocks status.");

static const u8 sElectrifyDescription[] = _(
    "Electrifies the foe, making\n"
    "its next move Electric-type.");

static const u8 sPlayRoughDescription[] = _(
    "Plays rough with the foe.\n"
    "May lower Attack.");

static const u8 sFairyWindDescription[] = _(
    "Stirs up a fairy wind to\n"
    "strike the foe.");

static const u8 sMoonblastDescription[] = _(
    "Attacks with the power of\n"
    "the moon. May lower Sp. Atk.");

static const u8 sBoomburstDescription[] = _(
    "Attacks everything with a\n"
    "destructive sound wave.");

static const u8 sFairyLockDescription[] = _(
    "Locks down the battlefield\n"
    "preventing escape next turn.");

static const u8 sKingsShieldDescription[] = _(
    "Evades damage, and sharply\n"
    "reduces Attack if struck.");

static const u8 sPlayNiceDescription[] = _(
    "Befriend the foe, lowering\n"
    "its Attack without fail.");

static const u8 sConfideDescription[] = _(
    "Shares a secret with the\n"
    "foe, lowering Sp. Atk.");

static const u8 sDiamondStormDescription[] = _(
    "Whips up a storm of\n"
    "diamonds. May up Defense.");

static const u8 sSteamEruptionDescription[] = _(
    "Immerses the foe in heated\n"
    "steam. May inflict a burn.");

static const u8 sHyperspaceHoleDescription[] = _(
    "Uses a warp hole to attack.\n"
    "Can't be evaded.");

static const u8 sWaterShurikenDescription[] = _(
    "Throws 2 to 5 stars that\n"
    "are sure to strike first.");

static const u8 sMysticalFireDescription[] = _(
    "Breathes a special, hot\n"
    "fire. Lowers Sp. Atk.");

static const u8 sSpikyShieldDescription[] = _(
    "Evades attack, and damages\n"
    "the foe if struck.");

static const u8 sAromaticMistDescription[] = _(
    "Raises the Sp. Def of a\n"
    "partner Pokémon.");

static const u8 sEerieImpulseDescription[] = _(
    "Exposes the foe to a pulse\n"
    "that sharply cuts Sp. Atk.");

static const u8 sVenomDrenchDescription[] = _(
    "Lowers the Attack, Sp. Atk\n"
    "and Speed of a poisoned foe.");

static const u8 sPowderDescription[] = _(
    "Damages the foe if it uses\n"
    "a Fire-type move.");

static const u8 sGeomancyDescription[] = _(
    "Raises Sp. Atk, Sp. Def and\n"
    "Speed on the 2nd turn.");

static const u8 sMagneticFluxDescription[] = _(
    "Boosts the defenses of\n"
    "those with Plus or Minus.");

static const u8 sHappyHourDescription[] = _(
    "Doubles the amount of\n"
    "Prize Money received.");

static const u8 sElectricTerrainDescription[] = _(
    "Electrifies the ground for\n"
    "5 turns. Prevents sleep.");

static const u8 sDazzlingGleamDescription[] = _(
    "Damages foes by emitting\n"
    "a bright flash.");

static const u8 sCelebrateDescription[] = _(
    "Congratulates you on your\n"
    "special day.");

static const u8 sHoldHandsDescription[] = _(
    "The user and ally hold hands\n"
    "making them happy.");

static const u8 sBabyDollEyesDescription[] = _(
    "Lowers the foe's Attack\n"
    "before it can move.");

static const u8 sNuzzleDescription[] = _(
    "Rubs its cheecks against\n"
    "the foe, paralyzing it.");

static const u8 sInfestationDescription[] = _(
    "The foe is infested and\n"
    "attacked for "BINDING_TURNS" turns.");

static const u8 sPowerUpPunchDescription[] = _(
    "A hard punch that raises\n"
    "the user's Attack.");

static const u8 sThousandArrowsDescription[] = _(
    "Can hit Flying foes, then\n"
    "knocks them to the ground.");

static const u8 sThousandWavesDescription[] = _(
    "Those hit by the wave can\n"
    "no longer escape.");

static const u8 sLandsWrathDescription[] = _(
    "Gathers the energy of the\n"
    "land to attack every foe.");

static const u8 sLightOfRuinDescription[] = _(
    "Fires a great beam of light\n"
    "that also hurts the user.");

static const u8 sOriginPulseDescription[] = _(
    "Beams of glowing blue light\n"
    "blast both foes.");

static const u8 sPrecipiceBladesDescription[] = _(
    "Fearsome blades of stone\n"
    "attack both foes.");

static const u8 sLavaPlumeDescription[] = _(
    "Scarlet flames torch\n"
    "everything around the user.");

static const u8 sLeafStormDescription[] = _(
    "Whips up a storm of leaves.\n"
    "Harshly lowers the Sp. Atk.");

static const u8 sShoreUpDescription[] = _(
    "Restores the user's HP.\n"
    "More HP in a sandstorm.");

static const u8 sFirstImpressionDescription[] = _(
    "Hits hard and first.\n"
    "Only works first turn.");

static const u8 sBanefulBunkerDescription[] = _(
    "Protects user and poisons\n"
    "foes on contact.");

static const u8 sSpiritShackleDescription[] = _(
    "After being hit, foes can\n"
    "no longer escape.");

static const u8 sDarkestLariatDescription[] = _(
    "Swings the arms to strike\n"
    "It ignores stat changes.");

static const u8 sSparklingAriaDescription[] = _(
    "Sings with bubbles. Cures\n"
    "burns on contact.");

static const u8 sIceHammerDescription[] = _(
    "Swings the fist to strike.\n"
    "Lowers the user's Speed.");

static const u8 sFloralHealingDescription[] = _(
    "Restores an ally's HP.\n"
    "Heals more on grass.");

static const u8 sHighHorsepowerDescription[] = _(
    "Slams hard into the foe with\n"
    "its entire body.");

static const u8 sStrengthSapDescription[] = _(
    "Saps the foe's Attack to\n"
    "heal HP, then drops Attack.");

static const u8 sSolarBladeDescription[] = _(
    "Charges first turn, then\n"
    "chops with a blade of light.");

static const u8 sLeafageDescription[] = _(
    "Attacks with a flurry of\n"
    "small leaves.");

static const u8 sSpotlightDescription[] = _(
    "Makes the foe attack the\n"
    "spotlighted Pokémon.");

static const u8 sToxicThreadDescription[] = _(
    "Attacks with a thread that\n"
    "poisons and drops Speed.");

static const u8 sLaserFocusDescription[] = _(
    "Guarantees the next move\n"
    "will be a critical hit.");

static const u8 sGearUpDescription[] = _(
    "Boosts the attacks of\n"
    "those with Plus or Minus.");

static const u8 sThroatChopDescription[] = _(
    "Chops the throat to disable\n"
    "sound moves for a while.");

static const u8 sPollenPuffDescription[] = _(
    "Explodes on foes, but\n"
    "restores ally's HP.");

static const u8 sAnchorShotDescription[] = _(
    "Strangles the foe with a\n"
    "chain. The foe can't escape.");

static const u8 sPsychicTerrainDescription[] = _(
    "The ground turns weird for\n"
    "5 turns. Blocks priority.");

static const u8 sLungeDescription[] = _(
    "Lunges at the foe to lower\n"
    "its Attack stat.");

static const u8 sFireLashDescription[] = _(
    "Whips the foe with fire\n"
    "lowering its Defense.");

static const u8 sPowerTripDescription[] = _(
    "It hits harder the more\n"
    "stat boosts the user has.");

static const u8 sBurnUpDescription[] = _(
    "Burns out the user fully\n"
    "removing the Fire type.");

static const u8 sSpeedSwapDescription[] = _(
    "Swaps user's Speed with\n"
    "the target's.");

static const u8 sSmartStrikeDescription[] = _(
    "Hits with an accurate\n"
    "horn that never misses.");

static const u8 sPurifyDescription[] = _(
    "Cures the foe's status\n"
    "to restore HP.");

static const u8 sRevelationDanceDescription[] = _(
    "Dances with mystical power.\n"
    "Matches user's first type.");

static const u8 sCoreEnforcerDescription[] = _(
    "Hits with a ray that\n"
    "nullifies the foe's ability.");

static const u8 sTropKickDescription[] = _(
    "An intense kick from the\n"
    "tropics. Lowers Attack.");

static const u8 sInstructDescription[] = _(
    "Orders the target to use\n"
    "its last move again.");

static const u8 sBeakBlastDescription[] = _(
    "Heats up beak to attack.\n"
    "Burns foe on contact.");

static const u8 sClangingScalesDescription[] = _(
    "Makes a big noise with\n"
    "its scales. Drops Defense.");

static const u8 sDragonHammerDescription[] = _(
    "Swings its whole body\n"
    "like a hammer to damage.");

static const u8 sBrutalSwingDescription[] = _(
    "Violently swings around\n"
    "to hurt everyone nearby.");

static const u8 sAuroraVeilDescription[] = _(
    "Weakens all attacks, but\n"
    "only usable with hail.");

static const u8 sShellTrapDescription[] = _(
    "Sets a shell trap that\n"
    "damages on contact.");

static const u8 sFleurCannonDescription[] = _(
    "A strong ray that harshly\n"
    "lowers Sp. Attack.");

static const u8 sPsychicFangsDescription[] = _(
    "Chomps with psychic fangs.\n"
    "Destroys any barriers.");

static const u8 sStompingTantrumDescription[] = _(
    "Stomps around angrily.\n"
    "Stronger after a failure.");

static const u8 sShadowBoneDescription[] = _(
    "Strikes with a haunted\n"
    "bone. Might drop Defense.");

static const u8 sAccelerockDescription[] = _(
    "Hits with a high-speed\n"
    "rock that always goes first.");

static const u8 sLiquidationDescription[] = _(
    "Slams the foe with water.\n"
    "Can lower Defense.");

static const u8 sPrismaticLaserDescription[] = _(
    "A high power laser that\n"
    "forces recharge next turn.");

static const u8 sSpectralThiefDescription[] = _(
    "Steals the target's stat\n"
    "boosts, then attacks.");

static const u8 sSunsteelStrikeDescription[] = _(
    "A sun-fueled strike that\n"
    "ignores abilities.");

static const u8 sMoongeistBeamDescription[] = _(
    "A moon-powered beam that\n"
    "ignores abilities.");

static const u8 sTearfulLookDescription[] = _(
    "The user tears up, dropping\n"
    "Attack and Sp. Attack.");

static const u8 sZingZapDescription[] = _(
    "An electrified impact that\n"
    "can cause flinching.");

static const u8 sNaturesMadnessDescription[] = _(
    "Halves the foe's HP with\n"
    "the power of nature.");

static const u8 sMultiAttackDescription[] = _(
    "An attack that changes\n"
    "with Memories.");

static const u8 sMindBlownDescription[] = _(
    "It explodes the user's head\n"
    "to damage everything around.");

static const u8 sPlasmaFistsDescription[] = _(
    "Hits with electrical fists.\n"
    "Normal moves become Electric.");

static const u8 sPhotonGeyserDescription[] = _(
    "User's highest attack stat\n"
    "determines its category.");

static const u8 sZippyZapDescription[] = _(
    "Electric bursts always go\n"
    "first and land a critical hit.");

static const u8 sSplishySplashDescription[] = _(
    "A huge electrified wave that\n"
    "may paralyze the foe.");

static const u8 sFloatyFallDescription[] = _(
    "Floats in air and dives at\n"
    "angle. May cause flinching.");

static const u8 sPikaPapowDescription[] = _(
    "Pikachu's love increases its\n"
    "power. It never misses.");

static const u8 sBouncyBubbleDescription[] = _(
    "An attack that absorbs\n"
#if B_UPDATED_MOVE_DATA >= GEN_8
    "all the damage inflicted.");
#else
    "half the damage inflicted.");
#endif

static const u8 sBuzzyBuzzDescription[] = _(
    "Shoots a jolt of electricity\n"
    "that always paralyzes.");

static const u8 sSizzlySlideDescription[] = _(
    "User cloaked in fire charges.\n"
    "Leaves the foe with a burn.");

static const u8 sGlitzyGlowDescription[] = _(
    "Telekinetic force that sets\n"
    "wall, lowering Sp. Atk damage.");

static const u8 sBaddyBadDescription[] = _(
    "Acting badly, attacks. Sets\n"
    "wall, lowering Attack damage.");

static const u8 sSappySeedDescription[] = _(
    "Giant stalk scatters seeds\n"
    "that drain HP every turn.");

static const u8 sFreezyFrostDescription[] = _(
    "Crystal from cold haze hits.\n"
    "Eliminates all stat changes.");

static const u8 sSparklySwirlDescription[] = _(
    "Wrap foe with whirlwind of\n"
    "scent. Heals party's status.");

static const u8 sVeeveeVolleyDescription[] = _(
    "Eevee's love increases its\n"
    "power. It never misses.");

static const u8 sDoubleIronBashDescription[] = _(
    "The user spins and hits with\n"
    "its arms. May cause flinch.");

// GEN 8
static const u8 sDynamaxCannonDescription[] = _(
    "Fires a strong beam. Deals\n"
    "2x damage to Dynamaxed foes.");

static const u8 sSnipeShotDescription[] = _(
    "The user ignores effects\n"
    "that draw in moves.");

static const u8 sJawLockDescription[] = _(
    "Prevents the user and\n"
    "the target from escaping.");

static const u8 sStuffCheeksDescription[] = _(
    "Consumes the user's Berry,\n"
    "then sharply raises Def.");

static const u8 sNoRetreatDescription[] = _(
    "Raises all of the user's\n"
    "stats but prevents escape.");

static const u8 sTarShotDescription[] = _(
    "Lowers the foe's Speed and\n"
    "makes it weak to Fire.");

static const u8 sMagicPowderDescription[] = _(
    "Magic powder changes the\n"
    "target into a Psychic-type.");

static const u8 sDragonDartsDescription[] = _(
    "The user attacks twice. Two\n"
    "targets are hit once each.");

static const u8 sTeatimeDescription[] = _(
    "All Pokémon have teatime\n"
    "and eat their Berries.");

static const u8 sOctolockDescription[] = _(
    "Traps the foe to lower Def\n"
    "and Sp. Def fall each turn.");

static const u8 sBoltBeakDescription[] = _(
    "Double power if the user\n"
    "moves before the target.");

static const u8 sFishiousRendDescription[] = _(
    "Double power if the user\n"
    "moves before the target.");

static const u8 sCourtChangeDescription[] = _(
    "The user swaps effects on\n"
    "either side of the field.");

static const u8 sClangorousSoulDescription[] = _(
    "The user uses some of its\n"
    "HP to raise all its stats.");

static const u8 sBodyPressDescription[] = _(
    "Does more damage the\n"
    "higher the user's Def.");

static const u8 sDecorateDescription[] = _(
    "The user sharply raises\n"
    "the target's Atk and Sp.Atk");

static const u8 sDrumBeatingDescription[] = _(
    "Plays a drum to attack.\n"
    "The foe's Speed is lowered.");

static const u8 sSnapTrapDescription[] = _(
    "Snares the target in a snap\n"
    "trap for four to five turns.");

static const u8 sPyroBallDescription[] = _(
    "Launches a fiery ball at the\n"
    "target. It may cause a burn.");

static const u8 sBehemothBladeDescription[] = _(
    "Strikes as a sword. Deals 2x\n"
    "damage to Dynamaxed foes.");

static const u8 sBehemothBashDescription[] = _(
    "Attacks as a shield. Deals 2x\n"
    "damage to Dynamaxed foes.");

static const u8 sAuraWheelDescription[] = _(
    "Raises Speed to attack. The\n"
    "Type is based on its form.");

static const u8 sBreakingSwipeDescription[] = _(
    "Swings its tail to attack.\n"
    "Lowers the Atk of those hit.");

static const u8 sBranchPokeDescription[] = _(
    "The user pokes the target\n"
    "with a pointed branch.");

static const u8 sOverdriveDescription[] = _(
    "The user twangs its guitar,\n"
    "causing strong vibrations.");

static const u8 sAppleAcidDescription[] = _(
    "Attacks with tart apple acid\n"
    "to lower the foe's Sp. Def.");

static const u8 sGravAppleDescription[] = _(
    "Drops an apple from above.\n"
    "Lowers the foe's Defense.");

static const u8 sSpiritBreakDescription[] = _(
    "Attacks with spirit-breaking\n"
    "force. Lowers Sp. Atk.");

static const u8 sStrangeSteamDescription[] = _(
    "Emits a strange steam to\n"
    "potentially confuse the foe.");

static const u8 sLifeDewDescription[] = _(
    "Scatters water to restore\n"
    "the HP of itself and allies.");

static const u8 sObstructDescription[] = _(
    "Protects itself, harshly\n"
    "lowering Def on contact.");

static const u8 sFalseSurrenderDescription[] = _(
    "Bows to stab the foe\n"
    "with hair. It never misses.");

static const u8 sMeteorAssaultDescription[] = _(
    "Attacks with a thick leek.\n"
    "The user must then rest.");

static const u8 sEternabeamDescription[] = _(
    "Eternatus' strongest move.\n"
    "The user rests next turn.");

static const u8 sSteelBeamDescription[] = _(
    "Fires a beam of steel from\n"
    "its body. It hurts the user.");

static const u8 sExpandingForceDescription[] = _(
    "Power goes up and damages\n"
    "all foes on Psychic Terrain.");

static const u8 sSteelRollerDescription[] = _(
    "Destroys terrain. Fails if\n"
    "ground isn't terrain.");

static const u8 sScaleShotDescription[] = _(
    "Shoots scales 2 to 5 times.\n"
    "Ups Speed, lowers defense.");

static const u8 sMeteorBeamDescription[] = _(
    "A 2-turn move that raises\n"
    "Sp. Attack before attacking.");

static const u8 sShellSideArmDescription[] = _(
    "Deals better of physical and\n"
    "special damage. May poison.");

static const u8 sMistyExplosionDescription[] = _(
    "Hit everything and faint.\n"
    "Powers up on Misty Terrain.");

static const u8 sGrassyGlideDescription[] = _(
    "Gliding on ground, hits. Goes\n"
    "first on Grassy Terrain.");

static const u8 sRisingVoltageDescription[] = _(
    "This move's power doubles\n"
    "when on Electric Terrain.");

static const u8 sTerrainPulseDescription[] = _(
    "Type and power changes\n"
    "depending on the terrain.");

static const u8 sSkitterSmackDescription[] = _(
    "User skitters behind foe to\n"
    "attack. Lowers foe's Sp. Atk.");

static const u8 sBurningJealousyDescription[] = _(
    "Foes that have stats upped\n"
    "during the turn get burned.");

static const u8 sLashOutDescription[] = _(
    "If stats lowered during this\n"
    "turn, power is doubled.");

static const u8 sPoltergeistDescription[] = _(
    "Control foe's item to attack.\n"
    "Fails if foe has no item.");

static const u8 sCorrosiveGasDescription[] = _(
    "Highly acidic gas melts items\n"
    "held by surrounding Pokémon.");

static const u8 sCoachingDescription[] = _(
    "Properly coaches allies to\n"
    "up their Attack and Defense.");

static const u8 sFlipTurnDescription[] = _(
    "Attacks and rushes back to\n"
    "switch with a party Pokémon.");

static const u8 sTripleAxelDescription[] = _(
    "A 3-kick attack that gets\n"
    "more powerful with each hit.");

static const u8 sDualWingbeatDescription[] = _(
    "User slams the target with\n"
    "wings and hits twice in a row.");

static const u8 sScorchingSandsDescription[] = _(
    "Throws scorching sand at\n"
    "the target. May leave a burn.");

static const u8 sJungleHealingDescription[] = _(
    "Heals HP and status of\n"
    "itself and allies in battle.");

static const u8 sWickedBlowDescription[] = _(
    "Mastering the Dark style,\n"
    "strikes with a critical hit.");

static const u8 sSurgingStrikesDescription[] = _(
    "Mastering the Water style,\n"
    "strikes with 3 critical hits.");

static const u8 sThunderCageDescription[] = _(
    "Traps the foe in a cage of\n"
    "electricity for "BINDING_TURNS" turns.");

static const u8 sDragonEnergyDescription[] = _(
    "The higher the user's HP\n"
    "the more damage caused.");

static const u8 sFreezingGlareDescription[] = _(
    "Shoots psychic power from\n"
    "the eyes. May freeze the foe.");

static const u8 sFieryWrathDescription[] = _(
    "An attack fueled by your\n"
    "wrath. May cause flinching.");

static const u8 sThunderousKickDescription[] = _(
    "Uses a lightning-like kick\n"
    "to hit. Lowers foe's Defense.");

static const u8 sGlacialLanceDescription[] = _(
    "Strikes by hurling a blizzard-\n"
    "cloaked icicle lance at foes.");

static const u8 sAstralBarrageDescription[] = _(
    "Strikes by sending a frightful\n"
    "amount of ghosts at foes.");

static const u8 sEerieSpellDescription[] = _(
    "Attacks with psychic power.\n"
    "Foe's last move has 3 PP cut.");

static const u8 sDireClawDescription[] = _(
    "High critical hit chance. May\n"
    "paralyze, poison or drowse.");

static const u8 sPsyshieldBashDescription[] = _(
    "Hits a foe with psychic\n"
    "energy. May raise Defense.");

static const u8 sPowerShiftDescription[] = _(
    "The user swaps its Attack\n"
    "and Defense stats.");

static const u8 sStoneAxeDescription[] = _(
    "High critical hit ratio. Sets\n"
    "Splinters that hurt the foe.");

static const u8 sSpringtideStormDescription[] = _(
    "Wraps a foe in fierce winds.\n"
    "Varies with the user's form.");

static const u8 sMysticalPowerDescription[] = _(
    "A mysterious power strikes,\n"
    "raising the user's Sp. Atk.");

static const u8 sRagingFuryDescription[] = _(
    "A rampage of 2 to 3 turns\n"
    "that confuses the user.");

static const u8 sWaveCrashDescription[] = _(
    "A slam shrouded in water.\n"
    "It also hurts the user.");

static const u8 sChloroblastDescription[] = _(
    "A user-hurting blast of\n"
    "amassed chlorophyll.");

static const u8 sMountainGaleDescription[] = _(
    "Giant chunks of ice damage\n"
    "the foe. It may flinch.");

static const u8 sVictoryDanceDescription[] = _(
    "Dances to raise Attack,\n"
    "Defense and Speed.");

static const u8 sHeadlongRushDescription[] = _(
    "Hits with a full-body tackle.\n"
    "Lowers the users's defenses.");

static const u8 sBarbBarrageDescription[] = _(
    "Can poison on impact. Powers\n"
    "up against poisoned foes.");

static const u8 sEsperWingDescription[] = _(
    "High critical hit ratio.\n"
    "Ups the user's Speed.");

static const u8 sBitterMaliceDescription[] = _(
    "A spine-chilling resentment.\n"
    "May lower the foe's Attack.");

static const u8 sShelterDescription[] = _(
    "The user hardens their skin,\n"
    "sharply raising its Defense.");

static const u8 sTripleArrowsDescription[] = _(
    "High critical hit ratio.\n"
    "May lower Defense or flinch.");

static const u8 sInfernalParadeDescription[] = _(
    "Hurts a foe harder if it has\n"
    "an ailment. May leave a burn.");

static const u8 sCeaselessEdgeDescription[] = _(
    "High critical hit ratio. Sets\n"
    "Splinters that hurt the foe.");

static const u8 sBleakwindStormDescription[] = _(
    "Hits with brutal, cold winds.\n"
    "May lower the foe's Speed.");

static const u8 sWildboltStormDescription[] = _(
    "Hits with a brutal tempest.\n"
    "May inflict paralysis.");

static const u8 sSandsearStormDescription[] = _(
    "Hits with brutally hot sand.\n"
    "May inflict a burn.");

static const u8 sLunarBlessingDescription[] = _(
    "The user heals and cures\n"
    "itself and its ally.");

static const u8 sTakeHeartDescription[] = _(
    "The user lifts its spirits to\n"
    "heal and strengthen itself.");

static const u8 sTeraBlastDescription[] = _(
    "If the user's Terastallized,\n"
    "it hits with its Tera-type.");

static const u8 sSilkTrapDescription[] =_(
    "Protects itself, lowering\n"
    "Speed on contact.");

static const u8 sAxeKickDescription[] = _(
    "May miss and hurt the kicker.\n"
    "May cause confusion.");

static const u8 sLastRespectsDescription[] = _(
    "This move deals more damage\n"
    "for each defeated ally.");

static const u8 sLuminaCrashDescription[] = _(
    "A mind-affecting light\n"
    "harshly lowers Sp. Def.");

static const u8 sOrderUpDescription[] = _(
    "Boosts a user's stats\n"
    "depending on Tatsugiri.");

static const u8 sJetPunchDescription[] = _(
    "A punch is thrown at blinding\n"
    "speed to strike first.");

static const u8 sSpicyExtractDescription[] = _(
    "Sharply ups target's Attack,\n"
    "harshly lowers its Defense.");

static const u8 sSpinOutDescription[] = _(
    "Furiously strains its legs.\n"
    "Harshly lowers user's Speed.");

static const u8 sPopulationBombDescription[] = _(
    "The user's fellows hit one\n"
    "to ten times in a row.");

static const u8 sIceSpinnerDescription[] = _(
    "Ice-covered feet hit a foe\n"
    "and destroy the terrain.");

static const u8 sGlaiveRushDescription[] = _(
    "Foe attacks next turn can't\n"
    "miss and do double damage.");

static const u8 sRevivalBlessingDescription[] = _(
    "Revives a fainted party {PKMN}\n"
    "and restores half of its HP.");

static const u8 sSaltCureDescription[] = _(
    "Hurts foe every turn. Double\n"
    "damage to Steel and Water.");

static const u8 sTripleDiveDescription[] = _(
    "Hits target with splashes\n"
    "of water 3 times in a row.");

static const u8 sMortalSpinDescription[] = _(
    "Erases trap moves and Leech\n"
    "Seed. Poisons adjecent foes.");

static const u8 sDoodleDescription[] = _(
    "Changes user's and ally's\n"
    "Ability into the target's.");

static const u8 sFilletAwayDescription[] = _(
    "Sharply boosts offenses and\n"
    "Speed by using its own HP.");

static const u8 sKowtowCleaveDescription[] = _(
    "User slashes the foe after\n"
    "kowtowing. It never misses.");

static const u8 sFlowerTrickDescription[] = _(
    "Rigged bouquet. Always gets\n"
    "a critical hit, never missing.");

static const u8 sTorchSongDescription[] = _(
    "Flames scorch the target.\n"
    "Boosts the user's Sp. Atk.");

static const u8 sAquaStepDescription[] = _(
    "Hits with light, fluid dance\n"
    "steps. Ups the user's Speed.");

static const u8 sRagingBullDescription[] = _(
    "Tackle that breaks barriers.\n"
    "User's form determines type.");

static const u8 sMakeItRainDescription[] = _(
    "Lowers the user's Sp. Atk.\n"
    "Money is recovered after.");

static const u8 sRuinationDescription[] = _(
    "Summons a ruinous disaster\n"
    "and cuts half the foe's HP.");

static const u8 sCollisionCourseDescription[] = _(
    "Prehistoric explosion that's\n"
    "stronger if supereffective.");

static const u8 sElectroDriftDescription[] = _(
    "Futuristic electricity. It's\n"
    "stronger if supereffective.");

static const u8 sShedTailDescription[] = _(
    "Creates a Substitute for\n"
    "itself before switching out.");

static const u8 sChillyReceptionDescription[] =_(
    "Bad joke summons snowstorm.\n"
    "The user also switches out.");

static const u8 sTidyUpDescription[] = _(
    "User tidies up hazards and\n"
    "raises its Attack and Speed.");

static const u8 sSnowscapeDescription[] = _(
    "Summons a snowstorm that\n"
    "lasts for five turns.");

static const u8 sPounceDescription[] = _(
    "The user pounces on the foe,\n"
    "lowering its Speed.");

static const u8 sTrailblazeDescription[] = _(
    "The user attacks suddenly,\n"
    "raising its Speed.");

static const u8 sChillingWaterDescription[] = _(
    "A shower with ice-cold water\n"
    "lowers the target's Attack.");

static const u8 sHyperDrillDescription[] = _(
    "A spinning pointed part\n"
    "bypasses a foe's Protect.");

static const u8 sTwinBeamDescription[] = _(
    "Mystical eye-beams that hit\n"
    "the target twice in a row.");

static const u8 sRageFistDescription[] = _(
    "The more the user has been\n"
    "hit, the stronger the move.");

static const u8 sArmorCannonDescription[] = _(
    "A strong attack but lowers\n"
    "the defensive stats.");

static const u8 sBitterBladeDescription[] = _(
    "An attack that absorbs\n"
    "half the damage inflicted.");

static const u8 sDoubleShockDescription[] = _(
    "Discharges all electricity,\n"
    "losing the Electric type.");

static const u8 sGigatonHammerDescription[] = _(
    "Swings a huge hammer. Can't\n"
    "be used twice in a row.");

static const u8 sComeuppanceDescription[] = _(
    "Retaliates strongly against\n"
    "who last hurt the user.");

static const u8 sAquaCutterDescription[] = _(
    "Pressurized water cut with a\n"
    "high critical-hit ratio.");

static const u8 sBlazingTorqueDescription[] = _(
    "---");

static const u8 sWickedTorqueDescription[] = _(
    "---");

static const u8 sNoxiousTorqueDescription[] = _(
    "---");

static const u8 sCombatTorqueDescription[] = _(
    "---");

static const u8 sMagicalTorqueDescription[] = _(
    "---");

const u8 gNotDoneYetDescription[] = _(
    "This move can't be used. Its\n"
    "effect is in development.");
#endif

#undef BINDING_TURNS

// MOVE_NONE is ignored in this table. Make sure to always subtract 1 before getting the right pointer.
const u8 *const gMoveDescriptionPointers[MOVES_COUNT - 1] =
{
    [MOVE_POUND - 1] = sPoundDescription,
    [MOVE_KARATE_CHOP - 1] = sKarateChopDescription,
    [MOVE_DOUBLE_SLAP - 1] = sDoubleSlapDescription,
    [MOVE_COMET_PUNCH - 1] = sCometPunchDescription,
    [MOVE_MEGA_PUNCH - 1] = sMegaPunchDescription,
    [MOVE_PAY_DAY - 1] = sPayDayDescription,
    [MOVE_FIRE_PUNCH - 1] = sFirePunchDescription,
    [MOVE_ICE_PUNCH - 1] = sIcePunchDescription,
    [MOVE_THUNDER_PUNCH - 1] = sThunderPunchDescription,
    [MOVE_SCRATCH - 1] = sScratchDescription,
    [MOVE_VISE_GRIP - 1] = sViseGripDescription,
    [MOVE_GUILLOTINE - 1] = sGuillotineDescription,
    [MOVE_RAZOR_WIND - 1] = sRazorWindDescription,
    [MOVE_SWORDS_DANCE - 1] = sSwordsDanceDescription,
    [MOVE_CUT - 1] = sCutDescription,
    [MOVE_GUST - 1] = sGustDescription,
    [MOVE_WING_ATTACK - 1] = sWingAttackDescription,
    [MOVE_WHIRLWIND - 1] = sWhirlwindDescription,
    [MOVE_FLY - 1] = sFlyDescription,
    [MOVE_BIND - 1] = sBindDescription,
    [MOVE_SLAM - 1] = sSlamDescription,
    [MOVE_VINE_WHIP - 1] = sVineWhipDescription,
    [MOVE_STOMP - 1] = sStompDescription,
    [MOVE_DOUBLE_KICK - 1] = sDoubleKickDescription,
    [MOVE_MEGA_KICK - 1] = sMegaKickDescription,
    [MOVE_JUMP_KICK - 1] = sJumpKickDescription,
    [MOVE_ROLLING_KICK - 1] = sRollingKickDescription,
    [MOVE_SAND_ATTACK - 1] = sSandAttackDescription,
    [MOVE_HEADBUTT - 1] = sHeadbuttDescription,
    [MOVE_HORN_ATTACK - 1] = sHornAttackDescription,
    [MOVE_FURY_ATTACK - 1] = sFuryAttackDescription,
    [MOVE_HORN_DRILL - 1] = sHornDrillDescription,
    [MOVE_TACKLE - 1] = sTackleDescription,
    [MOVE_BODY_SLAM - 1] = sBodySlamDescription,
    [MOVE_WRAP - 1] = sWrapDescription,
    [MOVE_TAKE_DOWN - 1] = sTakeDownDescription,
    [MOVE_THRASH - 1] = sThrashDescription,
    [MOVE_DOUBLE_EDGE - 1] = sDoubleEdgeDescription,
    [MOVE_TAIL_WHIP - 1] = sTailWhipDescription,
    [MOVE_POISON_STING - 1] = sPoisonStingDescription,
    [MOVE_TWINEEDLE - 1] = sTwineedleDescription,
    [MOVE_PIN_MISSILE - 1] = sPinMissileDescription,
    [MOVE_LEER - 1] = sLeerDescription,
    [MOVE_BITE - 1] = sBiteDescription,
    [MOVE_GROWL - 1] = sGrowlDescription,
    [MOVE_ROAR - 1] = sRoarDescription,
    [MOVE_SING - 1] = sSingDescription,
    [MOVE_SUPERSONIC - 1] = sSupersonicDescription,
    [MOVE_SONIC_BOOM - 1] = sSonicBoomDescription,
    [MOVE_DISABLE - 1] = sDisableDescription,
    [MOVE_ACID - 1] = sAcidDescription,
    [MOVE_EMBER - 1] = sEmberDescription,
    [MOVE_FLAMETHROWER - 1] = sFlamethrowerDescription,
    [MOVE_MIST - 1] = sMistDescription,
    [MOVE_WATER_GUN - 1] = sWaterGunDescription,
    [MOVE_HYDRO_PUMP - 1] = sHydroPumpDescription,
    [MOVE_SURF - 1] = sSurfDescription,
    [MOVE_ICE_BEAM - 1] = sIceBeamDescription,
    [MOVE_BLIZZARD - 1] = sBlizzardDescription,
    [MOVE_PSYBEAM - 1] = sPsybeamDescription,
    [MOVE_BUBBLE_BEAM - 1] = sBubbleBeamDescription,
    [MOVE_AURORA_BEAM - 1] = sAuroraBeamDescription,
    [MOVE_HYPER_BEAM - 1] = sHyperBeamDescription,
    [MOVE_PECK - 1] = sPeckDescription,
    [MOVE_DRILL_PECK - 1] = sDrillPeckDescription,
    [MOVE_SUBMISSION - 1] = sSubmissionDescription,
    [MOVE_LOW_KICK - 1] = sLowKickDescription,
    [MOVE_COUNTER - 1] = sCounterDescription,
    [MOVE_SEISMIC_TOSS - 1] = sSeismicTossDescription,
    [MOVE_STRENGTH - 1] = sStrengthDescription,
    [MOVE_ABSORB - 1] = sAbsorbDescription,
    [MOVE_MEGA_DRAIN - 1] = sMegaDrainDescription,
    [MOVE_LEECH_SEED - 1] = sLeechSeedDescription,
    [MOVE_GROWTH - 1] = sGrowthDescription,
    [MOVE_RAZOR_LEAF - 1] = sRazorLeafDescription,
    [MOVE_SOLAR_BEAM - 1] = sSolarBeamDescription,
    [MOVE_POISON_POWDER - 1] = sPoisonPowderDescription,
    [MOVE_STUN_SPORE - 1] = sStunSporeDescription,
    [MOVE_SLEEP_POWDER - 1] = sSleepPowderDescription,
    [MOVE_PETAL_DANCE - 1] = sPetalDanceDescription,
    [MOVE_STRING_SHOT - 1] = sStringShotDescription,
    [MOVE_DRAGON_RAGE - 1] = sDragonRageDescription,
    [MOVE_FIRE_SPIN - 1] = sFireSpinDescription,
    [MOVE_THUNDER_SHOCK - 1] = sThunderShockDescription,
    [MOVE_THUNDERBOLT - 1] = sThunderboltDescription,
    [MOVE_THUNDER_WAVE - 1] = sThunderWaveDescription,
    [MOVE_THUNDER - 1] = sThunderDescription,
    [MOVE_ROCK_THROW - 1] = sRockThrowDescription,
    [MOVE_EARTHQUAKE - 1] = sEarthquakeDescription,
    [MOVE_FISSURE - 1] = sFissureDescription,
    [MOVE_DIG - 1] = sDigDescription,
    [MOVE_TOXIC - 1] = sToxicDescription,
    [MOVE_CONFUSION - 1] = sConfusionDescription,
    [MOVE_PSYCHIC - 1] = sPsychicDescription,
    [MOVE_HYPNOSIS - 1] = sHypnosisDescription,
    [MOVE_MEDITATE - 1] = sMeditateDescription,
    [MOVE_AGILITY - 1] = sAgilityDescription,
    [MOVE_QUICK_ATTACK - 1] = sQuickAttackDescription,
    [MOVE_RAGE - 1] = sRageDescription,
    [MOVE_TELEPORT - 1] = sTeleportDescription,
    [MOVE_NIGHT_SHADE - 1] = sNightShadeDescription,
    [MOVE_MIMIC - 1] = sMimicDescription,
    [MOVE_SCREECH - 1] = sScreechDescription,
    [MOVE_DOUBLE_TEAM - 1] = sDoubleTeamDescription,
    [MOVE_RECOVER - 1] = sRecoverDescription,
    [MOVE_HARDEN - 1] = sHardenDescription,
    [MOVE_MINIMIZE - 1] = sMinimizeDescription,
    [MOVE_SMOKESCREEN - 1] = sSmokescreenDescription,
    [MOVE_CONFUSE_RAY - 1] = sConfuseRayDescription,
    [MOVE_WITHDRAW - 1] = sWithdrawDescription,
    [MOVE_DEFENSE_CURL - 1] = sDefenseCurlDescription,
    [MOVE_BARRIER - 1] = sBarrierDescription,
    [MOVE_LIGHT_SCREEN - 1] = sLightScreenDescription,
    [MOVE_HAZE - 1] = sHazeDescription,
    [MOVE_REFLECT - 1] = sReflectDescription,
    [MOVE_FOCUS_ENERGY - 1] = sFocusEnergyDescription,
    [MOVE_BIDE - 1] = sBideDescription,
    [MOVE_METRONOME - 1] = sMetronomeDescription,
    [MOVE_MIRROR_MOVE - 1] = sMirrorMoveDescription,
    [MOVE_SELF_DESTRUCT - 1] = sSelfDestructDescription,
    [MOVE_EGG_BOMB - 1] = sEggBombDescription,
    [MOVE_LICK - 1] = sLickDescription,
    [MOVE_SMOG - 1] = sSmogDescription,
    [MOVE_SLUDGE - 1] = sSludgeDescription,
    [MOVE_BONE_CLUB - 1] = sBoneClubDescription,
    [MOVE_FIRE_BLAST - 1] = sFireBlastDescription,
    [MOVE_WATERFALL - 1] = sWaterfallDescription,
    [MOVE_CLAMP - 1] = sClampDescription,
    [MOVE_SWIFT - 1] = sSwiftDescription,
    [MOVE_SKULL_BASH - 1] = sSkullBashDescription,
    [MOVE_SPIKE_CANNON - 1] = sSpikeCannonDescription,
    [MOVE_CONSTRICT - 1] = sConstrictDescription,
    [MOVE_AMNESIA - 1] = sAmnesiaDescription,
    [MOVE_KINESIS - 1] = sKinesisDescription,
    [MOVE_SOFT_BOILED - 1] = sSoftBoiledDescription,
    [MOVE_HIGH_JUMP_KICK - 1] = sHighJumpKickDescription,
    [MOVE_GLARE - 1] = sGlareDescription,
    [MOVE_DREAM_EATER - 1] = sDreamEaterDescription,
    [MOVE_POISON_GAS - 1] = sPoisonGasDescription,
    [MOVE_BARRAGE - 1] = sBarrageDescription,
    [MOVE_LEECH_LIFE - 1] = sLeechLifeDescription,
    [MOVE_LOVELY_KISS - 1] = sLovelyKissDescription,
    [MOVE_SKY_ATTACK - 1] = sSkyAttackDescription,
    [MOVE_TRANSFORM - 1] = sTransformDescription,
    [MOVE_BUBBLE - 1] = sBubbleDescription,
    [MOVE_DIZZY_PUNCH - 1] = sDizzyPunchDescription,
    [MOVE_SPORE - 1] = sSporeDescription,
    [MOVE_FLASH - 1] = sFlashDescription,
    [MOVE_PSYWAVE - 1] = sPsywaveDescription,
    [MOVE_SPLASH - 1] = sSplashDescription,
    [MOVE_ACID_ARMOR - 1] = sAcidArmorDescription,
    [MOVE_CRABHAMMER - 1] = sCrabhammerDescription,
    [MOVE_EXPLOSION - 1] = sExplosionDescription,
    [MOVE_FURY_SWIPES - 1] = sFurySwipesDescription,
    [MOVE_BONEMERANG - 1] = sBonemerangDescription,
    [MOVE_REST - 1] = sRestDescription,
    [MOVE_ROCK_SLIDE - 1] = sRockSlideDescription,
    [MOVE_HYPER_FANG - 1] = sHyperFangDescription,
    [MOVE_SHARPEN - 1] = sSharpenDescription,
    [MOVE_CONVERSION - 1] = sConversionDescription,
    [MOVE_TRI_ATTACK - 1] = sTriAttackDescription,
    [MOVE_SUPER_FANG - 1] = sSuperFangDescription,
    [MOVE_SLASH - 1] = sSlashDescription,
    [MOVE_SUBSTITUTE - 1] = sSubstituteDescription,
    [MOVE_STRUGGLE - 1] = sStruggleDescription,
    [MOVE_SKETCH - 1] = sSketchDescription,
    [MOVE_TRIPLE_KICK - 1] = sTripleKickDescription,
    [MOVE_THIEF - 1] = sThiefDescription,
    [MOVE_SPIDER_WEB - 1] = sSpiderWebDescription,
    [MOVE_MIND_READER - 1] = sMindReaderDescription,
    [MOVE_NIGHTMARE - 1] = sNightmareDescription,
    [MOVE_FLAME_WHEEL - 1] = sFlameWheelDescription,
    [MOVE_SNORE - 1] = sSnoreDescription,
    [MOVE_CURSE - 1] = sCurseDescription,
    [MOVE_FLAIL - 1] = sFlailDescription,
    [MOVE_CONVERSION_2 - 1] = sConversion2Description,
    [MOVE_AEROBLAST - 1] = sAeroblastDescription,
    [MOVE_COTTON_SPORE - 1] = sCottonSporeDescription,
    [MOVE_REVERSAL - 1] = sReversalDescription,
    [MOVE_SPITE - 1] = sSpiteDescription,
    [MOVE_POWDER_SNOW - 1] = sPowderSnowDescription,
    [MOVE_PROTECT - 1] = sProtectDescription,
    [MOVE_MACH_PUNCH - 1] = sMachPunchDescription,
    [MOVE_SCARY_FACE - 1] = sScaryFaceDescription,
    [MOVE_FEINT_ATTACK - 1] = sFeintAttackDescription,
    [MOVE_SWEET_KISS - 1] = sSweetKissDescription,
    [MOVE_BELLY_DRUM - 1] = sBellyDrumDescription,
    [MOVE_SLUDGE_BOMB - 1] = sSludgeBombDescription,
    [MOVE_MUD_SLAP - 1] = sMudSlapDescription,
    [MOVE_OCTAZOOKA - 1] = sOctazookaDescription,
    [MOVE_SPIKES - 1] = sSpikesDescription,
    [MOVE_ZAP_CANNON - 1] = sZapCannonDescription,
    [MOVE_FORESIGHT - 1] = sForesightDescription,
    [MOVE_DESTINY_BOND - 1] = sDestinyBondDescription,
    [MOVE_PERISH_SONG - 1] = sPerishSongDescription,
    [MOVE_ICY_WIND - 1] = sIcyWindDescription,
    [MOVE_DETECT - 1] = sDetectDescription,
    [MOVE_BONE_RUSH - 1] = sBoneRushDescription,
    [MOVE_LOCK_ON - 1] = sLockOnDescription,
    [MOVE_OUTRAGE - 1] = sOutrageDescription,
    [MOVE_SANDSTORM - 1] = sSandstormDescription,
    [MOVE_GIGA_DRAIN - 1] = sGigaDrainDescription,
    [MOVE_ENDURE - 1] = sEndureDescription,
    [MOVE_CHARM - 1] = sCharmDescription,
    [MOVE_ROLLOUT - 1] = sRolloutDescription,
    [MOVE_FALSE_SWIPE - 1] = sFalseSwipeDescription,
    [MOVE_SWAGGER - 1] = sSwaggerDescription,
    [MOVE_MILK_DRINK - 1] = sMilkDrinkDescription,
    [MOVE_SPARK - 1] = sSparkDescription,
    [MOVE_FURY_CUTTER - 1] = sFuryCutterDescription,
    [MOVE_STEEL_WING - 1] = sSteelWingDescription,
    [MOVE_MEAN_LOOK - 1] = sMeanLookDescription,
    [MOVE_ATTRACT - 1] = sAttractDescription,
    [MOVE_SLEEP_TALK - 1] = sSleepTalkDescription,
    [MOVE_HEAL_BELL - 1] = sHealBellDescription,
    [MOVE_RETURN - 1] = sReturnDescription,
    [MOVE_PRESENT - 1] = sPresentDescription,
    [MOVE_FRUSTRATION - 1] = sFrustrationDescription,
    [MOVE_SAFEGUARD - 1] = sSafeguardDescription,
    [MOVE_PAIN_SPLIT - 1] = sPainSplitDescription,
    [MOVE_SACRED_FIRE - 1] = sSacredFireDescription,
    [MOVE_MAGNITUDE - 1] = sMagnitudeDescription,
    [MOVE_DYNAMIC_PUNCH - 1] = sDynamicPunchDescription,
    [MOVE_MEGAHORN - 1] = sMegahornDescription,
    [MOVE_DRAGON_BREATH - 1] = sDragonBreathDescription,
    [MOVE_BATON_PASS - 1] = sBatonPassDescription,
    [MOVE_ENCORE - 1] = sEncoreDescription,
    [MOVE_PURSUIT - 1] = sPursuitDescription,
    [MOVE_RAPID_SPIN - 1] = sRapidSpinDescription,
    [MOVE_SWEET_SCENT - 1] = sSweetScentDescription,
    [MOVE_IRON_TAIL - 1] = sIronTailDescription,
    [MOVE_METAL_CLAW - 1] = sMetalClawDescription,
    [MOVE_VITAL_THROW - 1] = sVitalThrowDescription,
    [MOVE_MORNING_SUN - 1] = sMorningSunDescription,
    [MOVE_SYNTHESIS - 1] = sSynthesisDescription,
    [MOVE_MOONLIGHT - 1] = sMoonlightDescription,
    [MOVE_HIDDEN_POWER - 1] = sHiddenPowerDescription,
    [MOVE_CROSS_CHOP - 1] = sCrossChopDescription,
    [MOVE_TWISTER - 1] = sTwisterDescription,
    [MOVE_RAIN_DANCE - 1] = sRainDanceDescription,
    [MOVE_SUNNY_DAY - 1] = sSunnyDayDescription,
    [MOVE_CRUNCH - 1] = sCrunchDescription,
    [MOVE_MIRROR_COAT - 1] = sMirrorCoatDescription,
    [MOVE_PSYCH_UP - 1] = sPsychUpDescription,
    [MOVE_EXTREME_SPEED - 1] = sExtremeSpeedDescription,
    [MOVE_ANCIENT_POWER - 1] = sAncientPowerDescription,
    [MOVE_SHADOW_BALL - 1] = sShadowBallDescription,
    [MOVE_FUTURE_SIGHT - 1] = sFutureSightDescription,
    [MOVE_ROCK_SMASH - 1] = sRockSmashDescription,
    [MOVE_WHIRLPOOL - 1] = sWhirlpoolDescription,
    [MOVE_BEAT_UP - 1] = sBeatUpDescription,
    [MOVE_FAKE_OUT - 1] = sFakeOutDescription,
    [MOVE_UPROAR - 1] = sUproarDescription,
    [MOVE_STOCKPILE - 1] = sStockpileDescription,
    [MOVE_SPIT_UP - 1] = sSpitUpDescription,
    [MOVE_SWALLOW - 1] = sSwallowDescription,
    [MOVE_HEAT_WAVE - 1] = sHeatWaveDescription,
    [MOVE_HAIL - 1] = sHailDescription,
    [MOVE_TORMENT - 1] = sTormentDescription,
    [MOVE_FLATTER - 1] = sFlatterDescription,
    [MOVE_WILL_O_WISP - 1] = sWillOWispDescription,
    [MOVE_MEMENTO - 1] = sMementoDescription,
    [MOVE_FACADE - 1] = sFacadeDescription,
    [MOVE_FOCUS_PUNCH - 1] = sFocusPunchDescription,
    [MOVE_SMELLING_SALTS - 1] = sSmellingSaltsDescription,
    [MOVE_FOLLOW_ME - 1] = sFollowMeDescription,
    [MOVE_NATURE_POWER - 1] = sNaturePowerDescription,
    [MOVE_CHARGE - 1] = sChargeDescription,
    [MOVE_TAUNT - 1] = sTauntDescription,
    [MOVE_HELPING_HAND - 1] = sHelpingHandDescription,
    [MOVE_TRICK - 1] = sTrickDescription,
    [MOVE_ROLE_PLAY - 1] = sRolePlayDescription,
    [MOVE_WISH - 1] = sWishDescription,
    [MOVE_ASSIST - 1] = sAssistDescription,
    [MOVE_INGRAIN - 1] = sIngrainDescription,
    [MOVE_SUPERPOWER - 1] = sSuperpowerDescription,
    [MOVE_MAGIC_COAT - 1] = sMagicCoatDescription,
    [MOVE_RECYCLE - 1] = sRecycleDescription,
    [MOVE_REVENGE - 1] = sRevengeDescription,
    [MOVE_BRICK_BREAK - 1] = sBrickBreakDescription,
    [MOVE_YAWN - 1] = sYawnDescription,
    [MOVE_KNOCK_OFF - 1] = sKnockOffDescription,
    [MOVE_ENDEAVOR - 1] = sEndeavorDescription,
    [MOVE_ERUPTION - 1] = sEruptionDescription,
    [MOVE_SKILL_SWAP - 1] = sSkillSwapDescription,
    [MOVE_IMPRISON - 1] = sImprisonDescription,
    [MOVE_REFRESH - 1] = sRefreshDescription,
    [MOVE_GRUDGE - 1] = sGrudgeDescription,
    [MOVE_SNATCH - 1] = sSnatchDescription,
    [MOVE_SECRET_POWER - 1] = sSecretPowerDescription,
    [MOVE_DIVE - 1] = sDiveDescription,
    [MOVE_ARM_THRUST - 1] = sArmThrustDescription,
    [MOVE_CAMOUFLAGE - 1] = sCamouflageDescription,
    [MOVE_TAIL_GLOW - 1] = sTailGlowDescription,
    [MOVE_LUSTER_PURGE - 1] = sLusterPurgeDescription,
    [MOVE_MIST_BALL - 1] = sMistBallDescription,
    [MOVE_FEATHER_DANCE - 1] = sFeatherDanceDescription,
    [MOVE_TEETER_DANCE - 1] = sTeeterDanceDescription,
    [MOVE_BLAZE_KICK - 1] = sBlazeKickDescription,
    [MOVE_MUD_SPORT - 1] = sMudSportDescription,
    [MOVE_ICE_BALL - 1] = sIceBallDescription,
    [MOVE_NEEDLE_ARM - 1] = sNeedleArmDescription,
    [MOVE_SLACK_OFF - 1] = sSlackOffDescription,
    [MOVE_HYPER_VOICE - 1] = sHyperVoiceDescription,
    [MOVE_POISON_FANG - 1] = sPoisonFangDescription,
    [MOVE_CRUSH_CLAW - 1] = sCrushClawDescription,
    [MOVE_BLAST_BURN - 1] = sBlastBurnDescription,
    [MOVE_HYDRO_CANNON - 1] = sHydroCannonDescription,
    [MOVE_METEOR_MASH - 1] = sMeteorMashDescription,
    [MOVE_ASTONISH - 1] = sAstonishDescription,
    [MOVE_WEATHER_BALL - 1] = sWeatherBallDescription,
    [MOVE_AROMATHERAPY - 1] = sAromatherapyDescription,
    [MOVE_FAKE_TEARS - 1] = sFakeTearsDescription,
    [MOVE_AIR_CUTTER - 1] = sAirCutterDescription,
    [MOVE_OVERHEAT - 1] = sOverheatDescription,
    [MOVE_ODOR_SLEUTH - 1] = sOdorSleuthDescription,
    [MOVE_ROCK_TOMB - 1] = sRockTombDescription,
    [MOVE_SILVER_WIND - 1] = sSilverWindDescription,
    [MOVE_METAL_SOUND - 1] = sMetalSoundDescription,
    [MOVE_GRASS_WHISTLE - 1] = sGrassWhistleDescription,
    [MOVE_TICKLE - 1] = sTickleDescription,
    [MOVE_COSMIC_POWER - 1] = sCosmicPowerDescription,
    [MOVE_WATER_SPOUT - 1] = sWaterSpoutDescription,
    [MOVE_SIGNAL_BEAM - 1] = sSignalBeamDescription,
    [MOVE_SHADOW_PUNCH - 1] = sShadowPunchDescription,
    [MOVE_EXTRASENSORY - 1] = sExtrasensoryDescription,
    [MOVE_SKY_UPPERCUT - 1] = sSkyUppercutDescription,
    [MOVE_SAND_TOMB - 1] = sSandTombDescription,
    [MOVE_SHEER_COLD - 1] = sSheerColdDescription,
    [MOVE_MUDDY_WATER - 1] = sMuddyWaterDescription,
    [MOVE_BULLET_SEED - 1] = sBulletSeedDescription,
    [MOVE_AERIAL_ACE - 1] = sAerialAceDescription,
    [MOVE_ICICLE_SPEAR - 1] = sIcicleSpearDescription,
    [MOVE_IRON_DEFENSE - 1] = sIronDefenseDescription,
    [MOVE_BLOCK - 1] = sBlockDescription,
    [MOVE_HOWL - 1] = sHowlDescription,
    [MOVE_DRAGON_CLAW - 1] = sDragonClawDescription,
    [MOVE_FRENZY_PLANT - 1] = sFrenzyPlantDescription,
    [MOVE_BULK_UP - 1] = sBulkUpDescription,
    [MOVE_BOUNCE - 1] = sBounceDescription,
    [MOVE_MUD_SHOT - 1] = sMudShotDescription,
    [MOVE_POISON_TAIL - 1] = sPoisonTailDescription,
    [MOVE_COVET - 1] = sCovetDescription,
    [MOVE_VOLT_TACKLE - 1] = sVoltTackleDescription,
    [MOVE_MAGICAL_LEAF - 1] = sMagicalLeafDescription,
    [MOVE_WATER_SPORT - 1] = sWaterSportDescription,
    [MOVE_CALM_MIND - 1] = sCalmMindDescription,
    [MOVE_LEAF_BLADE - 1] = sLeafBladeDescription,
    [MOVE_DRAGON_DANCE - 1] = sDragonDanceDescription,
    [MOVE_ROCK_BLAST - 1] = sRockBlastDescription,
    [MOVE_SHOCK_WAVE - 1] = sShockWaveDescription,
    [MOVE_WATER_PULSE - 1] = sWaterPulseDescription,
    [MOVE_DOOM_DESIRE - 1] = sDoomDesireDescription,
    [MOVE_PSYCHO_BOOST - 1] = sPsychoBoostDescription,
    [MOVE_ROOST - 1] = sRoostDescription,
    [MOVE_GRAVITY - 1] = sGravityDescription,
    [MOVE_MIRACLE_EYE - 1] = sMiracleEyeDescription,
    [MOVE_WAKE_UP_SLAP - 1] = sWakeUpSlapDescription,
    [MOVE_HAMMER_ARM - 1] = sHammerArmDescription,
    [MOVE_GYRO_BALL - 1] = sGyroBallDescription,
    [MOVE_HEALING_WISH - 1] = sHealingWishDescription,
    [MOVE_BRINE - 1] = sBrineDescription,
    [MOVE_NATURAL_GIFT - 1] = sNaturalGiftDescription,
    [MOVE_FEINT - 1] = sFeintDescription,
    [MOVE_PLUCK - 1] = sPluckDescription,
    [MOVE_TAILWIND - 1] = sTailwindDescription,
    [MOVE_ACUPRESSURE - 1] = sAcupressureDescription,
    [MOVE_METAL_BURST - 1] = sMetalBurstDescription,
    [MOVE_U_TURN - 1] = sUTurnDescription,
    [MOVE_CLOSE_COMBAT - 1] = sCloseCombatDescription,
    [MOVE_PAYBACK - 1] = sPaybackDescription,
    [MOVE_ASSURANCE - 1] = sAssuranceDescription,
    [MOVE_EMBARGO - 1] = sEmbargoDescription,
    [MOVE_FLING - 1] = sFlingDescription,
    [MOVE_PSYCHO_SHIFT - 1] = sPsychoShiftDescription,
    [MOVE_TRUMP_CARD - 1] = sTrumpCardDescription,
    [MOVE_HEAL_BLOCK - 1] = sHealBlockDescription,
    [MOVE_WRING_OUT - 1] = sWringOutDescription,
    [MOVE_POWER_TRICK - 1] = sPowerTrickDescription,
    [MOVE_GASTRO_ACID - 1] = sGastroAcidDescription,
    [MOVE_LUCKY_CHANT - 1] = sLuckyChantDescription,
    [MOVE_ME_FIRST - 1] = sMeFirstDescription,
    [MOVE_COPYCAT - 1] = sCopycatDescription,
    [MOVE_POWER_SWAP - 1] = sPowerSwapDescription,
    [MOVE_GUARD_SWAP - 1] = sGuardSwapDescription,
    [MOVE_PUNISHMENT - 1] = sPunishmentDescription,
    [MOVE_LAST_RESORT - 1] = sLastResortDescription,
    [MOVE_WORRY_SEED - 1] = sWorrySeedDescription,
    [MOVE_SUCKER_PUNCH - 1] = sSuckerPunchDescription,
    [MOVE_TOXIC_SPIKES - 1] = sToxicSpikesDescription,
    [MOVE_HEART_SWAP - 1] = sHeartSwapDescription,
    [MOVE_AQUA_RING - 1] = sAquaRingDescription,
    [MOVE_MAGNET_RISE - 1] = sMagnetRiseDescription,
    [MOVE_FLARE_BLITZ - 1] = sFlareBlitzDescription,
    [MOVE_FORCE_PALM - 1] = sForcePalmDescription,
    [MOVE_AURA_SPHERE - 1] = sAuraSphereDescription,
    [MOVE_ROCK_POLISH - 1] = sRockPolishDescription,
    [MOVE_POISON_JAB - 1] = sPoisonJabDescription,
    [MOVE_DARK_PULSE - 1] = sDarkPulseDescription,
    [MOVE_NIGHT_SLASH - 1] = sNightSlashDescription,
    [MOVE_AQUA_TAIL - 1] = sAquaTailDescription,
    [MOVE_SEED_BOMB - 1] = sSeedBombDescription,
    [MOVE_AIR_SLASH - 1] = sAirSlashDescription,
    [MOVE_X_SCISSOR - 1] = sXScissorDescription,
    [MOVE_BUG_BUZZ - 1] = sBugBuzzDescription,
    [MOVE_DRAGON_PULSE - 1] = sDragonPulseDescription,
    [MOVE_DRAGON_RUSH - 1] = sDragonRushDescription,
    [MOVE_POWER_GEM - 1] = sPowerGemDescription,
    [MOVE_DRAIN_PUNCH - 1] = sMegaDrainDescription,
    [MOVE_VACUUM_WAVE - 1] = sVacuumWaveDescription,
    [MOVE_FOCUS_BLAST - 1] = sFocusBlastDescription,
    [MOVE_ENERGY_BALL - 1] = sEnergyBallDescription,
    [MOVE_BRAVE_BIRD - 1] = sBraveBirdDescription,
    [MOVE_EARTH_POWER - 1] = sEarthPowerDescription,
    [MOVE_SWITCHEROO - 1] = sSwitcherooDescription,
    [MOVE_GIGA_IMPACT - 1] = sHyperBeamDescription,
    [MOVE_NASTY_PLOT - 1] = sNastyPlotDescription,
    [MOVE_BULLET_PUNCH - 1] = sBulletPunchDescription,
    [MOVE_AVALANCHE - 1] = sRevengeDescription,
    [MOVE_ICE_SHARD - 1] = sIceShardDescription,
    [MOVE_SHADOW_CLAW - 1] = sShadowClawDescription,
    [MOVE_THUNDER_FANG - 1] = sThunderFangDescription,
    [MOVE_ICE_FANG - 1] = sIceFangDescription,
    [MOVE_FIRE_FANG - 1] = sFireFangDescription,
    [MOVE_SHADOW_SNEAK - 1] = sShadowSneakDescription,
    [MOVE_MUD_BOMB - 1] = sMudBombDescription,
    [MOVE_PSYCHO_CUT - 1] = sPsychoCutDescription,
    [MOVE_ZEN_HEADBUTT - 1] = sZenHeadbuttDescription,
    [MOVE_MIRROR_SHOT - 1] = sMirrorShotDescription,
    [MOVE_FLASH_CANNON - 1] = sFlashCannonDescription,
    [MOVE_ROCK_CLIMB - 1] = sRockClimbDescription,
    [MOVE_DEFOG - 1] = sDefogDescription,
    [MOVE_TRICK_ROOM - 1] = sTrickRoomDescription,
    [MOVE_DRACO_METEOR - 1] = sDracoMeteorDescription,
    [MOVE_DISCHARGE - 1] = sDischargeDescription,
    [MOVE_LAVA_PLUME - 1] = sLavaPlumeDescription,
    [MOVE_LEAF_STORM - 1] = sLeafStormDescription,
    [MOVE_POWER_WHIP - 1] = sPowerWhipDescription,
    [MOVE_ROCK_WRECKER - 1] = sHyperBeamDescription,
    [MOVE_CROSS_POISON - 1] = sCrossPoisonDescription,
    [MOVE_GUNK_SHOT - 1] = sGunkShotDescription,
    [MOVE_IRON_HEAD - 1] = sIronHeadDescription,
    [MOVE_MAGNET_BOMB - 1] = sMagnetBombDescription,
    [MOVE_STONE_EDGE - 1] = sStoneEdgeDescription,
    [MOVE_CAPTIVATE - 1] = sCaptivateDescription,
    [MOVE_STEALTH_ROCK - 1] = sStealthRockDescription,
    [MOVE_GRASS_KNOT - 1] = sGrassKnotDescription,
    [MOVE_CHATTER - 1] = sChatterDescription,
    [MOVE_JUDGMENT - 1] = sJudgmentDescription,
    [MOVE_BUG_BITE - 1] = sPluckDescription,
    [MOVE_CHARGE_BEAM - 1] = sChargeBeamDescription,
    [MOVE_WOOD_HAMMER - 1] = sWoodHammerDescription,
    [MOVE_AQUA_JET - 1] = sAquaJetDescription,
    [MOVE_ATTACK_ORDER - 1] = sAttackOrderDescription,
    [MOVE_DEFEND_ORDER - 1] = sDefendOrderDescription,
    [MOVE_HEAL_ORDER - 1] = sHealOrderDescription,
    [MOVE_HEAD_SMASH - 1] = sHeadSmashDescription,
    [MOVE_DOUBLE_HIT - 1] = sDoubleHitDescription,
    [MOVE_ROAR_OF_TIME - 1] = sRoarOfTimeDescription,
    [MOVE_SPACIAL_REND - 1] = sSpacialRendDescription,
    [MOVE_LUNAR_DANCE - 1] = sHealingWishDescription,
    [MOVE_CRUSH_GRIP - 1] = sWringOutDescription,
    [MOVE_MAGMA_STORM - 1] = sMagmaStormDescription,
    [MOVE_DARK_VOID - 1] = sDarkVoidDescription,
    [MOVE_SEED_FLARE - 1] = sSeedFlareDescription,
    [MOVE_OMINOUS_WIND - 1] = sOminousWindDescription,
    [MOVE_SHADOW_FORCE - 1] = sShadowForceDescription,
    [MOVE_HONE_CLAWS - 1] = sHoneClawsDescription,
    [MOVE_WIDE_GUARD - 1] = sWideGuardDescription,
    [MOVE_GUARD_SPLIT - 1] = sGuardSplitDescription,
    [MOVE_POWER_SPLIT - 1] = sPowerSplitDescription,
    [MOVE_WONDER_ROOM - 1] = sWonderRoomDescription,
    [MOVE_PSYSHOCK - 1] = sPsyshockDescription,
    [MOVE_VENOSHOCK - 1] = sVenoshockDescription,
    [MOVE_AUTOTOMIZE - 1] = sAutotomizeDescription,
    [MOVE_RAGE_POWDER - 1] = sRagePowderDescription,
    [MOVE_TELEKINESIS - 1] = sTelekinesisDescription,
    [MOVE_MAGIC_ROOM - 1] = sMagicRoomDescription,
    [MOVE_SMACK_DOWN - 1] = sSmackDownDescription,
    [MOVE_STORM_THROW - 1] = sStormThrowDescription,
    [MOVE_FLAME_BURST - 1] = sFlameBurstDescription,
    [MOVE_SLUDGE_WAVE - 1] = sSludgeWaveDescription,
    [MOVE_QUIVER_DANCE - 1] = sQuiverDanceDescription,
    [MOVE_HEAVY_SLAM - 1] = sHeavySlamDescription,
    [MOVE_SYNCHRONOISE - 1] = sSynchronoiseDescription,
    [MOVE_ELECTRO_BALL - 1] = sElectroBallDescription,
    [MOVE_SOAK - 1] = sSoakDescription,
    [MOVE_FLAME_CHARGE - 1] = sFlameChargeDescription,
    [MOVE_COIL - 1] = sCoilDescription,
    [MOVE_LOW_SWEEP - 1] = sLowSweepDescription,
    [MOVE_ACID_SPRAY - 1] = sAcidSprayDescription,
    [MOVE_FOUL_PLAY - 1] = sFoulPlayDescription,
    [MOVE_SIMPLE_BEAM - 1] = sSimpleBeamDescription,
    [MOVE_ENTRAINMENT - 1] = sEntrainmentDescription,
    [MOVE_AFTER_YOU - 1] = sAfterYouDescription,
    [MOVE_ROUND - 1] = sRoundDescription,
    [MOVE_ECHOED_VOICE - 1] = sEchoedVoiceDescription,
    [MOVE_CHIP_AWAY - 1] = sChipAwayDescription,
    [MOVE_CLEAR_SMOG - 1] = sClearSmogDescription,
    [MOVE_STORED_POWER - 1] = sStoredPowerDescription,
    [MOVE_QUICK_GUARD - 1] = sQuickGuardDescription,
    [MOVE_ALLY_SWITCH - 1] = sAllySwitchDescription,
    [MOVE_SCALD - 1] = sScaldDescription,
    [MOVE_SHELL_SMASH - 1] = sShellSmashDescription,
    [MOVE_HEAL_PULSE - 1] = sHealPulseDescription,
    [MOVE_HEX - 1] = sHexDescription,
    [MOVE_SKY_DROP - 1] = sSkyDropDescription,
    [MOVE_SHIFT_GEAR - 1] = sShiftGearDescription,
    [MOVE_CIRCLE_THROW - 1] = sCircleThrowDescription,
    [MOVE_INCINERATE - 1] = sIncinerateDescription,
    [MOVE_QUASH - 1] = sQuashDescription,
    [MOVE_ACROBATICS - 1] = sAcrobaticsDescription,
    [MOVE_REFLECT_TYPE - 1] = sReflectTypeDescription,
    [MOVE_RETALIATE - 1] = sRetaliateDescription,
    [MOVE_FINAL_GAMBIT - 1] = sFinalGambitDescription,
    [MOVE_BESTOW - 1] = sBestowDescription,
    [MOVE_INFERNO - 1] = sInfernoDescription,
    [MOVE_WATER_PLEDGE - 1] = sWaterPledgeDescription,
    [MOVE_FIRE_PLEDGE - 1] = sFirePledgeDescription,
    [MOVE_GRASS_PLEDGE - 1] = sGrassPledgeDescription,
    [MOVE_VOLT_SWITCH - 1] = sUTurnDescription,
    [MOVE_STRUGGLE_BUG - 1] = sStruggleBugDescription,
    [MOVE_BULLDOZE - 1] = sBulldozeDescription,
    [MOVE_FROST_BREATH - 1] = sStormThrowDescription,
    [MOVE_DRAGON_TAIL - 1] = sCircleThrowDescription,
    [MOVE_WORK_UP - 1] = sWorkUpDescription,
    [MOVE_ELECTROWEB - 1] = sElectrowebDescription,
    [MOVE_WILD_CHARGE - 1] = sWildChargeDescription,
    [MOVE_DRILL_RUN - 1] = sDrillRunDescription,
    [MOVE_DUAL_CHOP - 1] = sDualChopDescription,
    [MOVE_HEART_STAMP - 1] = sHeartStampDescription,
    [MOVE_HORN_LEECH - 1] = sMegaDrainDescription,
    [MOVE_SACRED_SWORD - 1] = sChipAwayDescription,
    [MOVE_RAZOR_SHELL - 1] = sRazorShellDescription,
    [MOVE_HEAT_CRASH - 1] = sHeavySlamDescription,
    [MOVE_LEAF_TORNADO - 1] = sLeafTornadoDescription,
    [MOVE_STEAMROLLER - 1] = sSteamrollerDescription,
    [MOVE_COTTON_GUARD - 1] = sCottonGuardDescription,
    [MOVE_NIGHT_DAZE - 1] = sNightDazeDescription,
    [MOVE_PSYSTRIKE - 1] = sPsyshockDescription,
    [MOVE_TAIL_SLAP - 1] = sTailSlapDescription,
    [MOVE_HURRICANE - 1] = sHurricaneDescription,
    [MOVE_HEAD_CHARGE - 1] = sHeadChargeDescription,
    [MOVE_GEAR_GRIND - 1] = sGearGrindDescription,
    [MOVE_SEARING_SHOT - 1] = sLavaPlumeDescription,
    [MOVE_TECHNO_BLAST - 1] = sTechnoBlastDescription,
    [MOVE_RELIC_SONG - 1] = sRelicSongDescription,
    [MOVE_SECRET_SWORD - 1] = sSecretSwordDescription,
    [MOVE_GLACIATE - 1] = sGlaciateDescription,
    [MOVE_BOLT_STRIKE - 1] = sBoltStrikeDescription,
    [MOVE_BLUE_FLARE - 1] = sBlueFlareDescription,
    [MOVE_FIERY_DANCE - 1] = sFieryDanceDescription,
    [MOVE_FREEZE_SHOCK - 1] = sFreezeShockDescription,
    [MOVE_ICE_BURN - 1] = sIceBurnDescription,
    [MOVE_SNARL - 1] = sSnarlDescription,
    [MOVE_ICICLE_CRASH - 1] = sIcicleCrashDescription,
    [MOVE_V_CREATE - 1] = sVCreateDescription,
    [MOVE_FUSION_FLARE - 1] = sFusionFlareDescription,
    [MOVE_FUSION_BOLT - 1] = sFusionBoltDescription,
    [MOVE_FLYING_PRESS - 1] = sFlyingPressDescription,
    [MOVE_MAT_BLOCK - 1] = sMatBlockDescription,
    [MOVE_BELCH - 1] = sBelchDescription,
    [MOVE_ROTOTILLER - 1] = sRototillerDescription,
    [MOVE_STICKY_WEB - 1] = sStickyWebDescription,
    [MOVE_FELL_STINGER - 1] = sFellStingerDescription,
    [MOVE_PHANTOM_FORCE - 1] = sShadowForceDescription,
    [MOVE_TRICK_OR_TREAT - 1] = sTrickOrTreatDescription,
    [MOVE_NOBLE_ROAR - 1] = sNobleRoarDescription,
    [MOVE_ION_DELUGE - 1] = sIonDelugeDescription,
    [MOVE_PARABOLIC_CHARGE - 1] = sParabolicChargeDescription,
    [MOVE_FORESTS_CURSE - 1] = sForestsCurseDescription,
    [MOVE_PETAL_BLIZZARD - 1] = sPetalBlizzardDescription,
    [MOVE_FREEZE_DRY - 1] = sFreezeDryDescription,
    [MOVE_DISARMING_VOICE - 1] = sDisarmingVoiceDescription,
    [MOVE_PARTING_SHOT - 1] = sPartingShotDescription,
    [MOVE_TOPSY_TURVY - 1] = sTopsyTurvyDescription,
    [MOVE_DRAINING_KISS - 1] = sDrainingKissDescription,
    [MOVE_CRAFTY_SHIELD - 1] = sCraftyShieldDescription,
    [MOVE_FLOWER_SHIELD - 1] = sFlowerShieldDescription,
    [MOVE_GRASSY_TERRAIN - 1] = sGrassyTerrainDescription,
    [MOVE_MISTY_TERRAIN - 1] = sMistyTerrainDescription,
    [MOVE_ELECTRIFY - 1] = sElectrifyDescription,
    [MOVE_PLAY_ROUGH - 1] = sPlayRoughDescription,
    [MOVE_FAIRY_WIND - 1] = sFairyWindDescription,
    [MOVE_MOONBLAST - 1] = sMoonblastDescription,
    [MOVE_BOOMBURST - 1] = sBoomburstDescription,
    [MOVE_FAIRY_LOCK - 1] = sFairyLockDescription,
    [MOVE_KINGS_SHIELD - 1] = sKingsShieldDescription,
    [MOVE_PLAY_NICE - 1] = sPlayNiceDescription,
    [MOVE_CONFIDE - 1] = sConfideDescription,
    [MOVE_DIAMOND_STORM - 1] = sDiamondStormDescription,
    [MOVE_STEAM_ERUPTION - 1] = sSteamEruptionDescription,
    [MOVE_HYPERSPACE_HOLE - 1] = sHyperspaceHoleDescription,
    [MOVE_WATER_SHURIKEN - 1] = sWaterShurikenDescription,
    [MOVE_MYSTICAL_FIRE - 1] = sMysticalFireDescription,
    [MOVE_SPIKY_SHIELD - 1] = sSpikyShieldDescription,
    [MOVE_AROMATIC_MIST - 1] = sAromaticMistDescription,
    [MOVE_EERIE_IMPULSE - 1] = sEerieImpulseDescription,
    [MOVE_VENOM_DRENCH - 1] = sVenomDrenchDescription,
    [MOVE_POWDER - 1] = sPowderDescription,
    [MOVE_GEOMANCY - 1] = sGeomancyDescription,
    [MOVE_MAGNETIC_FLUX - 1] = sMagneticFluxDescription,
    [MOVE_HAPPY_HOUR - 1] = sHappyHourDescription,
    [MOVE_ELECTRIC_TERRAIN - 1] = sElectricTerrainDescription,
    [MOVE_DAZZLING_GLEAM - 1] = sDazzlingGleamDescription,
    [MOVE_CELEBRATE - 1] = sCelebrateDescription,
    [MOVE_HOLD_HANDS - 1] = sHoldHandsDescription,
    [MOVE_BABY_DOLL_EYES - 1] = sBabyDollEyesDescription,
    [MOVE_NUZZLE - 1] = sNuzzleDescription,
    [MOVE_HOLD_BACK - 1] = sFalseSwipeDescription,
    [MOVE_INFESTATION - 1] = sInfestationDescription,
    [MOVE_POWER_UP_PUNCH - 1] = sPowerUpPunchDescription,
    [MOVE_OBLIVION_WING - 1] = sDrainingKissDescription,
    [MOVE_THOUSAND_ARROWS - 1] = sThousandArrowsDescription,
    [MOVE_THOUSAND_WAVES - 1] = sThousandWavesDescription,
    [MOVE_LANDS_WRATH - 1] = sLandsWrathDescription,
    [MOVE_LIGHT_OF_RUIN - 1] = sLightOfRuinDescription,
    [MOVE_ORIGIN_PULSE - 1] = sOriginPulseDescription,
    [MOVE_PRECIPICE_BLADES - 1] = sPrecipiceBladesDescription,
    [MOVE_DRAGON_ASCENT - 1] = sCloseCombatDescription,
    [MOVE_HYPERSPACE_FURY - 1] = sHyperspaceHoleDescription,
    [MOVE_SHORE_UP - 1] = sShoreUpDescription,
    [MOVE_FIRST_IMPRESSION - 1] = sFirstImpressionDescription,
    [MOVE_BANEFUL_BUNKER - 1] = sBanefulBunkerDescription,
    [MOVE_SPIRIT_SHACKLE - 1] = sSpiritShackleDescription,
    [MOVE_DARKEST_LARIAT - 1] = sDarkestLariatDescription,
    [MOVE_SPARKLING_ARIA - 1] = sSparklingAriaDescription,
    [MOVE_ICE_HAMMER - 1] = sIceHammerDescription,
    [MOVE_FLORAL_HEALING - 1] = sFloralHealingDescription,
    [MOVE_HIGH_HORSEPOWER - 1] = sHighHorsepowerDescription,
    [MOVE_STRENGTH_SAP - 1] = sStrengthSapDescription,
    [MOVE_SOLAR_BLADE - 1] = sSolarBladeDescription,
    [MOVE_LEAFAGE - 1] = sLeafageDescription,
    [MOVE_SPOTLIGHT - 1] = sSpotlightDescription,
    [MOVE_TOXIC_THREAD - 1] = sToxicThreadDescription,
    [MOVE_LASER_FOCUS - 1] = sLaserFocusDescription,
    [MOVE_GEAR_UP - 1] = sGearUpDescription,
    [MOVE_THROAT_CHOP - 1] = sThroatChopDescription,
    [MOVE_POLLEN_PUFF - 1] = sPollenPuffDescription,
    [MOVE_ANCHOR_SHOT - 1] = sAnchorShotDescription,
    [MOVE_PSYCHIC_TERRAIN - 1] = sPsychicTerrainDescription,
    [MOVE_LUNGE - 1] = sLungeDescription,
    [MOVE_FIRE_LASH - 1] = sFireLashDescription,
    [MOVE_POWER_TRIP - 1] = sPowerTripDescription,
    [MOVE_BURN_UP - 1] = sBurnUpDescription,
    [MOVE_SPEED_SWAP - 1] = sSpeedSwapDescription,
    [MOVE_SMART_STRIKE - 1] = sSmartStrikeDescription,
    [MOVE_PURIFY - 1] = sPurifyDescription,
    [MOVE_REVELATION_DANCE - 1] = sRevelationDanceDescription,
    [MOVE_CORE_ENFORCER - 1] = sCoreEnforcerDescription,
    [MOVE_TROP_KICK - 1] = sTropKickDescription,
    [MOVE_INSTRUCT - 1] = sInstructDescription,
    [MOVE_BEAK_BLAST - 1] = sBeakBlastDescription,
    [MOVE_CLANGING_SCALES - 1] = sClangingScalesDescription,
    [MOVE_DRAGON_HAMMER - 1] = sDragonHammerDescription,
    [MOVE_BRUTAL_SWING - 1] = sBrutalSwingDescription,
    [MOVE_AURORA_VEIL - 1] = sAuroraVeilDescription,
    [MOVE_SHELL_TRAP - 1] = sShellTrapDescription,
    [MOVE_FLEUR_CANNON - 1] = sFleurCannonDescription,
    [MOVE_PSYCHIC_FANGS - 1] = sPsychicFangsDescription,
    [MOVE_STOMPING_TANTRUM - 1] = sStompingTantrumDescription,
    [MOVE_SHADOW_BONE - 1] = sShadowBoneDescription,
    [MOVE_ACCELEROCK - 1] = sAccelerockDescription,
    [MOVE_LIQUIDATION - 1] = sLiquidationDescription,
    [MOVE_PRISMATIC_LASER - 1] = sPrismaticLaserDescription,
    [MOVE_SPECTRAL_THIEF - 1] = sSpectralThiefDescription,
    [MOVE_SUNSTEEL_STRIKE - 1] = sSunsteelStrikeDescription,
    [MOVE_MOONGEIST_BEAM - 1] = sMoongeistBeamDescription,
    [MOVE_TEARFUL_LOOK - 1] = sTearfulLookDescription,
    [MOVE_ZING_ZAP - 1] = sZingZapDescription,
    [MOVE_NATURES_MADNESS - 1] = sNaturesMadnessDescription,
    [MOVE_MULTI_ATTACK - 1] = sMultiAttackDescription,
    [MOVE_MIND_BLOWN - 1] = sMindBlownDescription,
    [MOVE_PLASMA_FISTS - 1] = sPlasmaFistsDescription,
    [MOVE_PHOTON_GEYSER - 1] = sPhotonGeyserDescription,
    [MOVE_ZIPPY_ZAP - 1] = sZippyZapDescription,
    [MOVE_SPLISHY_SPLASH - 1] = sSplishySplashDescription,
    [MOVE_FLOATY_FALL - 1] = sFloatyFallDescription,
    [MOVE_PIKA_PAPOW - 1] = sPikaPapowDescription,
    [MOVE_BOUNCY_BUBBLE - 1] = sBouncyBubbleDescription,
    [MOVE_BUZZY_BUZZ - 1] = sBuzzyBuzzDescription,
    [MOVE_SIZZLY_SLIDE - 1] = sSizzlySlideDescription,
    [MOVE_GLITZY_GLOW - 1] = sGlitzyGlowDescription,
    [MOVE_BADDY_BAD - 1] = sBaddyBadDescription,
    [MOVE_SAPPY_SEED - 1] = sSappySeedDescription,
    [MOVE_FREEZY_FROST - 1] = sFreezyFrostDescription,
    [MOVE_SPARKLY_SWIRL - 1] = sSparklySwirlDescription,
    [MOVE_VEEVEE_VOLLEY - 1] = sVeeveeVolleyDescription,
    [MOVE_DOUBLE_IRON_BASH - 1] = sDoubleIronBashDescription,

    //GEN 8
    [MOVE_DYNAMAX_CANNON - 1] = sDynamaxCannonDescription,
    [MOVE_SNIPE_SHOT - 1] = sSnipeShotDescription,
    [MOVE_JAW_LOCK - 1] = sJawLockDescription,
    [MOVE_STUFF_CHEEKS - 1] = sStuffCheeksDescription,
    [MOVE_NO_RETREAT - 1] = sNoRetreatDescription,
    [MOVE_TAR_SHOT - 1] = sTarShotDescription,
    [MOVE_MAGIC_POWDER - 1] = sMagicPowderDescription,
    [MOVE_DRAGON_DARTS - 1] = sDragonDartsDescription,
    [MOVE_TEATIME - 1] = sTeatimeDescription,
    [MOVE_OCTOLOCK - 1] = sOctolockDescription,
    [MOVE_BOLT_BEAK - 1] = sBoltBeakDescription,
    [MOVE_FISHIOUS_REND - 1] = sFishiousRendDescription,
    [MOVE_COURT_CHANGE - 1] = sCourtChangeDescription,
    [MOVE_CLANGOROUS_SOUL - 1] = sClangorousSoulDescription,
    [MOVE_BODY_PRESS - 1] = sBodyPressDescription,
    [MOVE_DECORATE - 1] = sDecorateDescription,
    [MOVE_DRUM_BEATING - 1] = sDrumBeatingDescription,
    [MOVE_SNAP_TRAP - 1] = sSnapTrapDescription,
    [MOVE_PYRO_BALL - 1] = sPyroBallDescription,
    [MOVE_BEHEMOTH_BLADE - 1] = sBehemothBladeDescription,
    [MOVE_BEHEMOTH_BASH - 1] = sBehemothBashDescription,
    [MOVE_AURA_WHEEL - 1] = sAuraWheelDescription,
    [MOVE_BREAKING_SWIPE - 1] = sBreakingSwipeDescription,
    [MOVE_BRANCH_POKE - 1] = sBranchPokeDescription,
    [MOVE_OVERDRIVE - 1] = sOverdriveDescription,
    [MOVE_APPLE_ACID - 1] = sAppleAcidDescription,
    [MOVE_GRAV_APPLE - 1] = sGravAppleDescription,
    [MOVE_SPIRIT_BREAK - 1] = sSpiritBreakDescription,
    [MOVE_STRANGE_STEAM - 1] = sStrangeSteamDescription,
    [MOVE_LIFE_DEW - 1] = sLifeDewDescription,
    [MOVE_OBSTRUCT - 1] = sObstructDescription,
    [MOVE_FALSE_SURRENDER - 1] = sFalseSurrenderDescription,
    [MOVE_METEOR_ASSAULT - 1] = sMeteorAssaultDescription,
    [MOVE_ETERNABEAM - 1] = sEternabeamDescription,
    [MOVE_STEEL_BEAM - 1] = sSteelBeamDescription,
    [MOVE_EXPANDING_FORCE - 1] = sExpandingForceDescription,
    [MOVE_STEEL_ROLLER - 1] = sSteelRollerDescription,
    [MOVE_SCALE_SHOT - 1] = sScaleShotDescription,
    [MOVE_METEOR_BEAM - 1] = sMeteorBeamDescription,
    [MOVE_SHELL_SIDE_ARM - 1] = sShellSideArmDescription,
    [MOVE_MISTY_EXPLOSION - 1] = sMistyExplosionDescription,
    [MOVE_GRASSY_GLIDE - 1] = sGrassyGlideDescription,
    [MOVE_RISING_VOLTAGE - 1] = sRisingVoltageDescription,
    [MOVE_TERRAIN_PULSE - 1] = sTerrainPulseDescription,
    [MOVE_SKITTER_SMACK - 1] = sSkitterSmackDescription,
    [MOVE_BURNING_JEALOUSY - 1] = sBurningJealousyDescription,
    [MOVE_LASH_OUT - 1] = sLashOutDescription,
    [MOVE_POLTERGEIST - 1] = sPoltergeistDescription,
    [MOVE_CORROSIVE_GAS - 1] = sCorrosiveGasDescription,
    [MOVE_COACHING - 1] = sCoachingDescription,
    [MOVE_FLIP_TURN - 1] = sFlipTurnDescription,
    [MOVE_TRIPLE_AXEL - 1] = sTripleAxelDescription,
    [MOVE_DUAL_WINGBEAT - 1] = sDualWingbeatDescription,
    [MOVE_SCORCHING_SANDS - 1] = sScorchingSandsDescription,
    [MOVE_JUNGLE_HEALING - 1] = sJungleHealingDescription,
    [MOVE_WICKED_BLOW - 1] = sWickedBlowDescription,
    [MOVE_SURGING_STRIKES - 1] = sSurgingStrikesDescription,
    [MOVE_THUNDER_CAGE - 1] = sThunderCageDescription,
    [MOVE_DRAGON_ENERGY - 1] = sDragonEnergyDescription,
    [MOVE_FREEZING_GLARE - 1] = sFreezingGlareDescription,
    [MOVE_FIERY_WRATH - 1] = sFieryWrathDescription,
    [MOVE_THUNDEROUS_KICK - 1] = sThunderousKickDescription,
    [MOVE_GLACIAL_LANCE - 1] = sGlacialLanceDescription,
    [MOVE_ASTRAL_BARRAGE - 1] = sAstralBarrageDescription,
    [MOVE_EERIE_SPELL - 1] = sEerieSpellDescription,
    [MOVE_DIRE_CLAW - 1] = sDireClawDescription,
    [MOVE_PSYSHIELD_BASH - 1] = sPsyshieldBashDescription,
    [MOVE_POWER_SHIFT - 1] = sPowerShiftDescription,
    [MOVE_STONE_AXE - 1] = sStoneAxeDescription,
    [MOVE_SPRINGTIDE_STORM - 1] = sSpringtideStormDescription,
    [MOVE_MYSTICAL_POWER - 1] = sMysticalPowerDescription,
    [MOVE_RAGING_FURY - 1] = sRagingFuryDescription,
    [MOVE_WAVE_CRASH - 1] = sWaveCrashDescription,
    [MOVE_CHLOROBLAST - 1] = sChloroblastDescription,
    [MOVE_MOUNTAIN_GALE - 1] = sMountainGaleDescription,
    [MOVE_VICTORY_DANCE - 1] = sVictoryDanceDescription,
    [MOVE_HEADLONG_RUSH - 1] = sHeadlongRushDescription,
    [MOVE_BARB_BARRAGE - 1] = sBarbBarrageDescription,
    [MOVE_ESPER_WING - 1] = sEsperWingDescription,
    [MOVE_BITTER_MALICE - 1] = sBitterMaliceDescription,
    [MOVE_SHELTER - 1] = sShelterDescription,
    [MOVE_TRIPLE_ARROWS - 1] = sTripleArrowsDescription,
    [MOVE_INFERNAL_PARADE - 1] = sInfernalParadeDescription,
    [MOVE_CEASELESS_EDGE - 1] = sCeaselessEdgeDescription,
    [MOVE_BLEAKWIND_STORM - 1] = sBleakwindStormDescription,
    [MOVE_WILDBOLT_STORM - 1] = sWildboltStormDescription,
    [MOVE_SANDSEAR_STORM - 1] = sSandsearStormDescription,
    [MOVE_LUNAR_BLESSING - 1] = sLunarBlessingDescription,
    [MOVE_TAKE_HEART - 1] = sTakeHeartDescription,
    [MOVE_CHILLY_RECEPTION - 1] = sChillyReceptionDescription,
};
