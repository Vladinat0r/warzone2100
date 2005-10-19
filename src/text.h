/*
 * Text.h (was Strings.h)
 *
 * String management functions
 *
 */
#ifndef _text_h
#define _text_h

//the two defines below are MUTUALLY EXCLUSIVE! don't have both defined...
//#define RESOURCE_NAMES
#define	STORE_RESOURCE_ID

/* ID numbers for all the fixed strings */
enum _fixed_str_id
{
	// The default (id == 0) string
	STR_DEFAULT,

	// Reticule strings
	STR_RET_OPTIONS,
	STR_RET_INTELLIGENCE,
	STR_RET_MANUFACTURE,
	STR_RET_DESIGN,
	STR_RET_RESEARCH,
	STR_RET_BUILD,
	STR_RET_CLOSE,
	STR_RET_COMMAND,

	// Miscellaneous strings
	STR_MISC_CLOSE,
	STR_MISC_LOADGAME,
	STR_MISC_SAVEGAME,
	STR_MISC_QUIT,
	STR_MISC_PAUSED,

	// Design screen strings
	STR_DES_NEWVEH,
	STR_DES_STORE,
	STR_DES_CANCEL,
	STR_DES_DEL,
	STR_DES_NEW,
	STR_DES_ARMOUR_KIN,
	STR_DES_ARMOUR_HEAT,
	STR_DES_POWER,
	STR_DES_WEIGHT,
	STR_DES_POWERUSE,
	STR_DES_SENSOR_RANGE,
	STR_DES_SENSOR_POWER,
	STR_DES_ECM_POWER,
	STR_DES_BUILD_POINTS,
	STR_DES_RANGE,
	STR_DES_DAMAGE,
	STR_DES_ROF,
	STR_DES_AIR,
	STR_DES_ROAD,
	STR_DES_OFFROAD,
	STR_DES_WATER,
	STR_DES_WEAPONS,
	STR_DES_OTHER,
	STR_DES_COMMAND,
	STR_DES_BODY,
	STR_DES_PROPULSION,
	STR_DES_TURRET,
	STR_DES_TEMPPOWER,
	STR_DES_TEMPBODY,

	// Other interface strings
	STR_INT_BLDPROGRESS,
	STR_INT_BLDSPEED,
	STR_INT_PWRUSAGE,
	STR_INT_RESMESSAGE,
	STR_INT_GENMESSAGE,
	STR_INT_MISMESSAGE,
    STR_INT_RESCOMPLETED,
	STR_INT_TRANSPORTER,
	STR_INT_TRANSLAUNCH,
	STR_INT_DPOINT,
	STR_INT_LOOP,
	STR_INT_POWERACCRUED,
    STR_INT_POWER,


	// multiplayer strings
	STR_MUL_PHONENO,	
	STR_MUL_IPADDR,	
	STR_MUL_COM1,	
	STR_MUL_COM2,	
	STR_MUL_COM3,	
	STR_MUL_COM4,	
	STR_MUL_CANCEL,		
	STR_MUL_OK,			
	STR_MUL_PLAYER,		
	STR_MUL_GAME,		
	STR_MUL_MAXPLAY,		
	STR_MUL_ARENA,		
	STR_MUL_CAMPAIGN,	
//	STR_MUL_RESLO,	
//	STR_MUL_RESMED,		
//	STR_MUL_RESHI,		
//	STR_MUL_HELPON,	
//	STR_MUL_HELPOFF,		
	STR_MUL_REFRESH,	
	STR_MUL_HOST,	
	STR_MUL_CLEAR,	
	STR_MUL_DEFAULT,	
	STR_MUL_LOAD,		
	STR_MUL_SAVE,		
	STR_MUL_DESIGN,		

	STR_MUL_SEARCHING,
	STR_MUL_14400,	
	STR_MUL_19200,	
	STR_MUL_56000,			
	STR_MUL_115200,			
	STR_MUL_SIDECONNECTION,	
	STR_MUL_SIDEOPTIONS	,		
	STR_MUL_SIDEGAMES	,	
	STR_MUL_SIDEPLAYERS	,		
	STR_MUL_SIDEFORCE,			
	STR_MUL_SIDETEMPLATES,			
	STR_MUL_SIDEINFO,				

	STR_MUL_CHAT,
	STR_MUL_STARTING,	
	STR_MUL_ALLIANCES,		
	STR_MUL_SCORE,		
	STR_MUL_KILLS,			
	STR_MUL_PING,			
	STR_MUL_POWLO,		
	STR_MUL_POWMED,	
	STR_MUL_POWHI,	
	STR_MUL_TECH1,		
	STR_MUL_TECH2,		
	STR_MUL_TECH3,		
	STR_MUL_CAMPCLEAN,	
	STR_MUL_CAMPDEFENCE,
	STR_MUL_CAMPBASE,
	STR_MUL_PLAYERIC,
	STR_MUL_FORCEIC,
	STR_MUL_MAPIC,		
	STR_MUL_GAMEIC,	
	STR_MUL_ALLIANCEN,
	STR_MUL_ALLIANCEY,
	STR_MUL_NOLIM,		
	STR_MUL_TIMELIM,	
	STR_MUL_FRAGLIM,
	STR_CON_MODEM,	
	STR_CON_INTERNET,
	STR_CON_LAN	,
	STR_CON_CABLE,	
	STR_CON_MORE,		
	STR_GAMES_GAMES,		
	STR_LABEL_TYPE	,	
	STR_LABEL_ALLI,	
	STR_LABEL_TEC,		
	STR_LABEL_BASE,
	STR_LABEL_LIMIT,
	STR_LABEL_FOG,
	STR_MUL_PLAYERS,		
	STR_MUL_PLAY,	

	STR_MUL_COMP,
	STR_MUL_COMP_Y,	
	STR_MUL_COMP_N,		
	STR_MUL_STRLIM,	
	STR_MUL_SKIRMISH,	
	STR_MUL_TEAMPLAY,
	STR_MUL_FOG_ON,			
	STR_MUL_FOG_OFF,	

	STR_ALLI_STATE,		
	STR_ALLI_VIS,		
	STR_ALLI_TEC,		
	STR_ALLI_DRO,		
	STR_ALLI_POW,			
	STR_ALLI_REQ,		
	STR_ALLI_OFF,			
	STR_ALLI_BRK,		
	STR_ALLI_FRM,		

	STR_GIFT_VIS,			
	STR_GIFT_DRO,		
	STR_GIFT_TEC,		
	STR_GIFT_POW,

	STR_MUL_ARTIF,

	STR_COMPATIBLE,			
	STR_PLAYER_NAME,		
	STR_GAME_NAME,			

	//ingame ops.
	STR_GAME_QUIT,
	STR_GAME_RESUME,

	// FrontEnd STrings
	STR_FE_SIDEMAIN ,		
	STR_FE_SINGLE ,			
	STR_FE_MULTI ,		
	STR_FE_OPTIONS,				
	STR_FE_INTRO,				
	STR_FE_QUIT	,					
	STR_FE_SIDESINGLE1,		
	STR_FE_SIDESINGLE2,				
	STR_FE_SIDETUT,
	STR_FE_NEW ,					
	STR_FE_LOAD,
	STR_FE_TUT,
	STR_FE_FASTPLAY,
	STR_FE_RETURN ,					
	STR_FE_SIDEMULTI,	
	STR_FE_HOST	,	
	STR_FE_JOIN ,			
	STR_FE_FORCEEDIT,
	STR_FE_SKIRMISH,
	STR_FE_SIDEOPTIONS,	
	STR_FE_MOUSE,				
	STR_FE_SCROLL,		
	STR_FE_GAMMA,					
	STR_FE_FX,			
	STR_FE_3D_FX,			
	STR_FE_MUSIC,		
	STR_FE_CLAN,
	STR_FE_CRAPFOG,
	STR_FE_GOODFOG,

	STR_FE_VIDEO,				
	STR_FE_SOFTWARE,	
	STR_FE_DIRECTX,	
	STR_FE_OPENGL,	
	STR_FE_GLIDE,	
	STR_FE_GAME,		
	STR_FE_GRAPHICS,	
	STR_FE_TEXTURE,		
	STR_FE_EFFECTS,		
	STR_FE_FOG,			
	STR_FE_TRANSPARENCY,

	STR_FE_DIFFICULTY,
	STR_EASY,
	STR_NORMAL,
	STR_HARD,

  	STR_MUL_LEAVE,			
	STR_MUL_JOINING,	
	STR_MUL_RESPOND,	

	STR_DORD_RANGE1,
	STR_DORD_RANGE2,
	STR_DORD_RANGE3,
	STR_DORD_REPAIR1,
	STR_DORD_REPAIR2,
	STR_DORD_REPAIR3,
	STR_DORD_FIRE1,
	STR_DORD_FIRE2,
	STR_DORD_FIRE3,
	STR_DORD_PATROL,
	STR_DORD_PERSUE,
	STR_DORD_GUARD,
	STR_DORD_HOLDPOS,
	STR_DORD_RETREPAIR,
	STR_DORD_RETBASE,
	STR_DORD_EMBARK,
	STR_DORD_ARMRECYCLE,
	STR_DORD_RECYCLE,
	STR_DORD_FACTORY,

	STR_GAM_DERRICK,
	STR_GAM_DROIDSTATE,
	STR_GAM_UNITLOST,
	STR_GAM_NORTH,
	STR_GAM_ENERGY,
	STR_GAM_RESREM,
	STR_GAM_POWCON,
	STR_GAM_STRDAM,
	STR_GAM_ELECDAM,
	STR_GAM_STRREST,
	STR_GAM_GOHQ,
	STR_GAM_NOHQ,
	STR_GAM_RESREWARD,
	STR_GAM_UNITSEL,
	STR_GAM_REINF,
	STR_GAM_GAMEOVER,
	STR_GAM_JOINING,
	STR_GAM_REWELEC,
	STR_GAM_REWPROP,			
	STR_GAM_REWBODY,	
	STR_GAM_REWWEAP,	
	STR_GAM_REWNOWT,		
	STR_GAM_REWREPA,	
	STR_GAM_REWREPN, 
	STR_GAM_RESNOTFOUND,
	STR_GAM_REPNOTFOUND,
	STR_GP_SELECTED,	
	STR_GP_ASSIGNED,	
	STR_GP_CENTERED,	
	STR_GP_ALLIGN, 	
	STR_MR_OBJECTIVE_ACHIEVED,		
	STR_MR_OBJECTIVE_FAILED,		 	
	STR_MR_SAVE_GAME,			 	
	STR_MR_LOAD_GAME,			 	
	STR_MR_QUIT_TO_MAIN,			 	
	STR_MR_CONTINUE,				 	
	STR_MR_UNIT_LOSSES,				   
	STR_MR_STRUCTURE_LOSSES,		   
	STR_MR_FORCE_INFO,	
	STR_MR_RANKINGS,
	STR_MR_UNITS_BUILT,		 
	STR_MR_UNITS_KILLED,	 
	STR_MR_UNITS_LOST,		 
	STR_MR_UNITS_NOW,		 
	STR_MR_AV_UNIT_EL,		 
	STR_MR_STR_BUILT,		 
	STR_MR_STR_BLOWN_UP,	 
	STR_MR_STR_LOST,	 
	STR_MR_STR_NOW,
	STR_MR_ARTEFACTS_FOUND,	 
	STR_MR_MISSION_TIME,	 
	STR_MR_GAME_TIME,	 
	STR_MR_SHOTS_ON_TARGET,	 
	STR_MR_SHOTS_OFF_TARGET, 
	STR_MR_BABAS_RUN_OVER, 
	
	STR_MR_LEVEL_ROOKIE,
	STR_MR_LEVEL_GREEN,	
	STR_MR_LEVEL_TRAINED,
	STR_MR_LEVEL_REGULAR,
	STR_MR_LEVEL_PROF,	
	STR_MR_LEVEL_VETERAN,
	STR_MR_LEVEL_CRACK,	
	STR_MR_LEVEL_ELITE,
	STR_MR_LEVEL_SPECIAL,
	STR_MR_LEVEL_ACE,
	
	STR_DL_LEVEL_ROOKIE, 	   
	STR_DL_LEVEL_GREEN,	 	   
	STR_DL_LEVEL_TRAINED,	   
	STR_DL_LEVEL_REGULAR, 	   
	STR_DL_LEVEL_PROF,	 	   
	STR_DL_LEVEL_VETERAN, 	   
	STR_DL_LEVEL_CRACK,	 	   
	STR_DL_LEVEL_ELITE,	 	   
	STR_DL_LEVEL_SPECIAL, 	   
	STR_DL_LEVEL_ACE,	 	   
	STR_CD_CHANGE,
	STR_CD_CHANGE_1OR2,

	STR_GAME_REPLAY,
	STR_GAME_SAVED,				   
	STR_GAME_LOADED,			   
	STR_DORD_CYBORG_FACTORY,	   
	STR_GAME_RESTART,			   

	STR_GAM_MAXUNITSREACHED,

	// keymap editor.
	STR_KM_KEYMAP,
	STR_KM_KEYMAP_SIDE,
	STR_BIND_CHOMAN,		
	STR_BIND_CHORES,		
	STR_BIND_CHOBUI,		
	STR_BIND_CHODES	,		
	STR_BIND_CHOINT	,		
	STR_BIND_CHOCOM	,		
	STR_BIND_TOGRAD	,		
	STR_BIND_TOGCON	,		
	STR_BIND_BARS	,		
	STR_BIND_SHOT,			
	STR_BIND_PAUSE,			
	STR_BIND_PREV,			
	STR_BIND_AS1,			
	STR_BIND_AS2,			
	STR_BIND_AS3,			
	STR_BIND_AS4,			
	STR_BIND_AS5,			
	STR_BIND_AS6,			
	STR_BIND_AS7,			
	STR_BIND_AS8,			
	STR_BIND_AS9,			
	STR_BIND_GR1,			
	STR_BIND_GR2,			
	STR_BIND_GR3,			
	STR_BIND_GR4,			
	STR_BIND_GR5,			
	STR_BIND_GR6,			
	STR_BIND_GR7,			
	STR_BIND_GR8,			
	STR_BIND_GR9,			
	STR_BIND_MULOP,			
	STR_BIND_AUDON,			
	STR_BIND_AUDOFF,		
	STR_BIND_NORTH	,		
	STR_BIND_TRACK	,		
	STR_BIND_OPT	,		
	STR_BIND_RIN	,		
	STR_BIND_ROUT	,		
	STR_BIND_ZIN	,		
	STR_BIND_ZOUT	,		
	STR_BIND_PF		,		
	STR_BIND_RL		,		
	STR_BIND_RP		,		
	STR_BIND_RR		,		
	STR_BIND_PB		,		
	STR_BIND_ORD	,		
	STR_BIND_RESJ	,		
	STR_BIND_REPJ	,		
	STR_BIND_OVERL	,		
	STR_BIND_CENTV	,		
	STR_BIND_CEASE	,		
	STR_BIND_UNITJ	,		
	STR_BIND_ENGAG	,		
	STR_BIND_FAW	,		
	STR_BIND_RTB	,		
	STR_BIND_DEFR	 ,		
	STR_BIND_SPLIM	,		
	STR_BIND_SHOR	,		
	STR_BIND_PURS	,		
	STR_BIND_PATR	,		
	STR_BIND_REPA	,		
	STR_BIND_DSTOP	,		
	STR_BIND_SENDT	,		
	STR_BIND_LONGR	,		
	STR_BIND_SCAT	,		
	STR_BIND_LDAM	,		
	STR_BIND_HDAM	,		
	STR_BIND_NDAM	,		
	STR_BIND_ACU	,		
	STR_BIND_ABDU	,		
	STR_BIND_AHTR	,		
	STR_BIND_AHOV	,		
	STR_BIND_RECY	,		
	STR_BIND_ASCR	,		
	STR_BIND_ATR	,		
	STR_BIND_ALL	,		
	STR_BIND_AVTOL	,		
	STR_BIND_AWHE	,		
	STR_BIND_ASIMIL	,		

// something else.
	STR_GAM_DERRICK_BURNING,
	STR_SEL_NO_STRUCTURE,

	STR_FE_SHADOW,	//shadow toggle -Q
	STR_FE_SSHAKE,							
	STR_FE_MFLIP,							
	STR_FE_ON,								
	STR_FE_OFF,								
	
	STR_FE_GREEN,				
	STR_FE_ORANGE,				
	STR_FE_GREY	,		
	STR_FE_BLACK,			
	STR_FE_RED	,			
	STR_FE_BLUE	,	
	STR_FE_PINK	,				
	STR_FE_CYAN	,

	//added by alex 26-01-99
	STR_BIND_CONJ,		
	STR_BIND_SENJ,		
	STR_BIND_COMJ,		

	STR_GAM_CONNOTFOUND,	
	STR_GAM_SENNOTFOUND,	
	STR_GAM_COMNOTFOUND,	

	STR_BIND_CMD1,
	STR_BIND_CMD2,
	STR_BIND_CMD3,
	STR_BIND_CMD4,
	STR_BIND_CMD5,
	STR_BIND_CMD6,
	STR_BIND_CMD7,
	STR_BIND_CMD8,
	STR_BIND_CMD9,

	STR_BIND_SELFACTORY,	   	   
	STR_BIND_SELRESEARCH,   	   
	STR_BIND_SELPOWER,	   		   
	STR_BIND_SELCYBORG,	   	   
	STR_BIND_CONSOLE,	   		   
	STR_BIND_UP,		     
	STR_BIND_DOWN,			 
	STR_BIND_RIGHT,			 
	STR_BIND_LEFT,			 

	STR_BIND_SPEED_UP,
	STR_BIND_SLOW_DOWN,
	STR_BIND_NORMAL_SPEED,
	STR_GAM_SPEED_UP,
	STR_GAM_SLOW_DOWN,
	STR_GAM_NORMAL_SPEED,

	STR_BIND_RELOAD,
	STR_BIND_RADJUMP,

	STR_DORD_FIREDES,
	STR_DORD_VTOL_FACTORY,

	STR_FE_SUBTITLES,
	STR_BIND_REOPEN_BUILD,
	STR_GAM_BUILD_REOPEN,
	STR_GAM_BUILD_NO_REOPEN,
	STR_GAM_FORMATION_ON,
	STR_GAM_FORMATION_OFF,

	STR_SEQ_PLAYBACK,
	STR_SEQ_FULL,		
	STR_SEQ_WINDOW,		
	STR_SEQ_MINIMAL,	

	STR_MAX_ID,			// number of string ID's
};

/* The string resource object */
extern STR_RES *psStringRes;

/* Initialise the string system */
extern BOOL stringsInitialise(void);

/* Shut down the string system */
extern void stringsShutDown(void);

#endif

