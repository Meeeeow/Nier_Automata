#pragma once
#ifndef __CLIENT_DEFINES_H__
#define __CLIENT_DEFINES_H__

static const unsigned int g_iWinCX = 1280;
static const unsigned int g_iWinCY = 720;

extern HWND			g_hWnd;
extern HINSTANCE	g_hInst;

#include "Client_ComponentKey.h"
#include "Client_GameObjectKey.h"
#include "Client_ShaderPathKey.h"
#include "Client_ItemCode.h"

namespace Client
{
	enum class LEVEL : unsigned int
	{
		STATIC				= 0,
		LOGO				= 1,
		STAGE1				= 2,
		ROBOTMILITARY		= 3,
		ZHUANGZISTAGE		= 4,
		ROBOTGENERAL		= 5,
		AMUSEMENTPARK		= 6,
		OPERABACKSTAGE		= 7,
		LOADING				= 8,
		COUNT				= 9
	};
	enum class WEAPONSTATE : unsigned int
	{
		IDLE = 0,
		ATTACK = 1,
		KATANAPOWERATTACK = 2,
		KATANAJUMPATTACK = 3,
		KATANAJUMPPOWERATTACK = 4,
		LONGPOWERATTACK = 5,
		SPEARPOWERATTACK = 6,
		SPEARJUMPATTACK = 7,
		GAUNTLETPOWERATTACK = 8,
		GAUNTLETJUMPATTACK = 9,
		GAUNTLETJUMPPOWERATTACK = 10,
		ATTACKIDLE = 11,
		NONE = 12
	};
	enum class LAYER : unsigned int {
		BACKGROUND = 0,
		OBSTACLE = 1,
		ENVIRONMENT = 2,
		MONSTER = 3,
		BOSS = 4,
		COUNT = 5
	};

	enum class ITEMCATEGORY : unsigned int
	{
		MONEY			= 0,
		EXPENDABLE		= 1,
		RESOURCE		= 2,
		SPECIAL			= 3,
		SHORTSWORD		= 4,
		LONGSWORD		= 5,
		SPEAR			= 6,
		GAUNTLET		= 7,
		ENFORCECHIP		= 8,
		COUNT			= 9
	};	// Select Key For ListLineIcon

	enum class ITEMRARITY : unsigned int
	{
		NORMAL		= 0,	// 0 1 2
		RARE		= 1,	// 3 4
		UNIQUE		= 2,	// 5 6
		LEGENDARY	= 3,	// 7 8
		EPIC		= 4,	// 9
		COUNT		= 5
	};	// Select Key For ListLineText

	enum class PODSTATE : unsigned int {
		IDLE			= 0,
		ATTACK			= 1,
		HANG			= 2,
		LASERATTACK		= 3,
		COUNTERATTACK	= 4,
		NONE			= 5
	};

	enum class MESH_PASS_INDEX : unsigned int {
		NONANIM					= 0,
		ANIM					= 1,
		NONANIM_NONECULL		= 2,
		NONANIM_ALPHA			= 3,
		ANIM_ALPHA				= 4,
		NONANIM_WIREFRAME		= 5,
		ANIM_WIREFRAME			= 6,
		ANIM_PLAYER				= 7,
		ANIM_ROBOT				= 8,
		NONANIM_SHADOWDEPTH		= 9,
		ANIM_SHADOWDEPTH		= 10,
		NONANIM_DISSOLVE		= 11,
		ANIM_DISSOLVE			= 12,
		SKY						= 13,
		MOTIONBLUR				= 14,
		RIMDODGE				= 15,
		VENDINGMACHINE			= 16,
		WEAPON_DISSOLVE			= 17,
		COUNT					= 18
	};


	enum class EFFECTMESH_PASS_INDEX : unsigned int {
		IMAGEEFFECT = 0,
		IMAGELESSEFFECT = 1,
		IMAGELESSEFFECT_WIREFRAME = 2,
		IMAGEEFFECT_DISSOLVE = 3,
		COUNT = 4,
	};

	enum class POINTBILLBOARD_PASS_INDEX : unsigned int {
		DEFAULT_PASS = 0,
		EMPTY_PASS = 1,
		AFTERIMAGE_PASS = 2,
		COUNT = 3,
	};

	enum class POINTINSTANCE_PASS_INDEX : unsigned int {
		DEFAULT_PASS = 0,
	};


	enum class DISSOLVE_STATE : int
	{
		DISSOLVE_UP = 0,
		DISSOLVE_DOWN = 1,
		DISSOLVE_IDLE = 2,
		DISSOLVE_COUNT = 3,
	};


	enum class WEAPONEQUIP : unsigned int {
		EQUIP = 0,
		NONEQUIP = 1,
		NONE = 2
	};

};

// Observer Reference Key
#define CHECKSUM_UI_HUD_PLAYER_HPBAR			0x00000001
#define CHECKSUM_UI_HUD_PLAYER_HPBAR_FRAME		0x00000002
#define CHECKSUM_UI_HUD_MONSTER_HPBAR			0x00000003
#define CHECKSUM_UI_HUD_MONSTER_HPBAR_FRAME		0x00000004
#define CHECKSUM_UI_HUD_DAMAGE					0x00000005
#define CHECKSUM_UI_HUD_TARGET					0x00000006
#define CHECKSUM_UI_HUD_PODCOOLTIME				0x00000007
#define CHECKSUM_UI_HUD_POINTER					0x00000008
#define CHECKSUM_UI_HUD_DIRECTION_INDICATOR		0x00000009
#define CHECKSUM_UI_HUD_STAGE_OBJECTIVE			0x0000000A
#define CHECKSUM_UI_HUD_STAGE_OBJECTIVE_STATE	0x0000000B
#define CHECKSUM_UI_HUD_MINIGAMESCREEN			0x0000000C

#define CHECKSUM_UI_CORE_BACKGROUND				0x00000010
#define CHECKSUM_UI_CORE_CURSOR					0x00000011
#define CHECKSUM_UI_CORE_CINEMATIC				0x00000012
#define CHECKSUM_UI_CORE_TITLE					0x00000013
#define CHECKSUM_UI_CORE_HEADBUTTON				0x00000014
#define CHECKSUM_UI_CORE_HEADBUTTON_LOCK		0x00000015
#define CHECKSUM_UI_CORE_DECOLINE				0x00000016
#define CHECKSUM_UI_CORE_SCROLLLIST				0x00000017
#define CHECKSUM_UI_CORE_SCROLLLIST_CONTROL		0x00000018
#define CHECKSUM_UI_CORE_SELECTLIST				0x00000019
#define CHECKSUM_UI_CORE_SELECTLIST_CONTROL		0x0000001A

#define CHECKSUM_UI_CORE_DETAIL					0x00000020
#define CHECKSUM_UI_CORE_DETAIL_UPDATE			0x00000021
#define CHECKSUM_UI_CORE_STATUS					0x00000022
#define CHECKSUM_UI_CORE_STATUS_UPDATE			0x00000023

#define CHECKSUM_UI_DIALOGUE_SYSMSG				0x00000024
#define CHECKSUM_UI_DIALOGUE_HIGHLIGHTMSG		0x00000025
#define CHECKSUM_UI_DIALOGUE_ENGAGEMSG			0x00000026

#define CHECKSUM_UI_CORE_LISTLINE_STATE			0x00000027
#define CHECKSUM_UI_CORE_LISTLINE_UPDATE		0x00000028
#define CHECKSUM_UI_CORE_LISTLINE_COMMAND		0x00000029
#define CHECKSUM_UI_CORE_LISTLINE_POSITION		0x0000002A
#define CHECKSUM_UI_CORE_SELECTLINE_STATE		0x0000002B
#define CHECKSUM_UI_CORE_SELECTLINE_UPDATE		0x0000002C
#define CHECKSUM_UI_CORE_WEAPONSLOT_STATE		0x0000002D
#define CHECKSUM_UI_CORE_WEAPONSLOT_UPDATE		0x0000002E

#define CHECKSUM_UI_HUD_CONTROLLER				0x00000031
#define CHECKSUM_UI_CORE_CONTROLLER				0x00000032
#define CHECKSUM_UI_DIALOGUE_CONTROLLER			0x00000033

#define CHECKSUM_UI_DIALOGUE_HACKINGMSG			0x00000034
#define CHECKSUM_UI_DIALOGUE_HACKINGSSCMSG		0x00000035
#define CHECKSUM_CONTROLLER_REQUEST				0x00000038
#define CHECKSUM_UI_HUD_MINIGAME_HPBAR			0x00000039
#define CHECKSUM_UI_HUD_MINIGAME_HPBAR_STATE	0x00000040
#define CHECKSUM_UI_HUD_QUICKSLOT				0x00000041

#define CHECKSUM_COMMON_INTERACTION				0x00000100
#define CHECKSUM_ONLY_UISTATE					0x00000200
#define CHECKSUM_RELEASE_UI						0x00000400
#define CHECKSUM_MONSTER_HIT_COLLISION			0x00001000
#define CHECKSUM_9S_ANDROID_DATAPACKET			0x00002000

// Effect Checksums
#define	CHECKSUM_EFFECT_MONSTER_BULLET_BIG					0x00010000
#define	CHECKSUM_EFFECT_MONSTER_BULLET_SMALL				0x00010001
#define	CHECKSUM_EFFECT_POD_BULLET							0x00010002
#define CHECKSUM_EFFECT_ENEMYBULLET							0x00010003
#define CHECKSUM_EFFECT_ENEMYBULLET_BIG						0x00010004
#define CHECKSUM_EFFECT_ENEMYBULLETEXPLOSION				0x00010005
#define CHECKSUM_EFFECT_ENEMYBULLETEXPLOSION_BIG			0x00010006
#define CHECKSUM_EFFECT_KATANA_SPARK						0x00010007
#define CHECKSUM_EFFECT_PODBULLET							0x00010008
#define CHECKSUM_EFFECT_PODBULLET_EXPLOSION					0x00010009
#define CHECKSUM_EFFECT_ROBOT_DEATH_EXPLOSION_SPARK4		0x0001000A
#define CHECKSUM_EFFECT_KATANA_DECORATION_EFFECT			0x0001000B
#define CHECKSUM_EFFECT_LONGKATANA_DECORATION_EFFECT		0x0001000C
#define CHECKSUM_EFFECT_SPEAR_DECORATION_EFFECT				0x0001000D
#define CHECKSUM_EFFECT_MONSTER_HIT_ELECTRICITY				0x0001000E
#define CHECKSUM_EFFECT_BEAVOIR_SPARK0						0x00010010
#define CHECKSUM_EFFECT_ELECTRIC_DONUT						0x00010011
#define CHECKSUM_EFFECT_ELECTRIC_DONUT_EXPLOSION			0x00010012
#define CHECKSUM_EFFECT_MISSILE_EXPLOSION					0x00010013
#define CHECKSUM_EFFECT_BEAVOIR_DONUT_UP					0x00010014
#define CHECKSUM_EFFECT_BEAVOIR_DONUT_DOWN					0x00010015
#define CHECKSUM_EFFECT_BEAVOIR_SEMI_LASER					0x00010016
#define CHECKSUM_EFFECT_BEAVOIR_REAL_LASER					0x00010017
#define CHECKSUM_EFFECT_SWORD_TRAIL							0x00010018
#define CHECKSUM_EFFECT_JUMP_SMOKE							0x00010019
#define CHECKSUM_EFFECT_TANK_LASER							0x0001001A
#define CHECKSUM_EFFECT_TANK_COMFETTI						0x0001001B
#define CHECKSUM_EFFECT_CLOWN_COMFETTI						0x0001001C
#define CHECKSUM_EFFECT_BEAUVOIR_RING_WAVE					0x0001001D
#define CHECKSUM_EFFECT_BEAUVOIR_DONUT_UP0					0x0001001E
#define CHECKSUM_EFFECT_BEAUVOIR_DONUT_DOWN0				0x00010020
#define CHECKSUM_EFFECT_BEAUVOIR_DONUT_UP1					0x00010021
#define CHECKSUM_EFFECT_BEAUVOIR_DONUT_DOWN1				0x00010022
#define CHECKSUM_EFFECT_BEAUVOIR_DONUT_UP2					0x00010023
#define CHECKSUM_EFFECT_BEAUVOIR_DONUT_DOWN2				0x00010024

#define CHECKSUM_EFFECT_ZHUANGZI_IMPACT_PLANE				0x00010025
#define CHECKSUM_EFFECT_ZHUANGZI_IMPACT_SMOKE				0x00010026
#define CHECKSUM_EFFECT_ZHUANGZI_IMPACT_SPARK				0x00010027
#define CHECKSUM_EFFECT_ZHUANGZI_RING						0x00010028
#define CHECKSUM_EFFECT_ZHUANGZI_BODY_SHIELD				0x00010029
#define CHECKSUM_EFFECT_ZHUANGZI_LEG_SHIELD					0x0001002A
#define CHECKSUM_EFFECT_ZHUANGZI_WEAPONTRAIL				0x0001002B
#define CHECKSUM_EFFECT_ZHUANGZI_FRONTBLADE_SPARK			0x0001002C
#define CHECKSUM_EFFECT_ZHUANGZI_RING_SPARK					0x0001002D
#define CHECKSUM_EFFECT_ZHUANGZI_TAILSWEEP_SPARK			0x0001002E
#define CHECKSUM_EFFECT_ENGELS_RANDOM_BULLET				0x00010030

#define CHECKSUM_EFFECT_POD_LASER_READY						0x00010030
#define CHECKSUM_EFFECT_POD_LASER0							0x00010031
#define CHECKSUM_EFFECT_POD_LASER1							0x00010032
#define CHECKSUM_EFFECT_POD_CHARGING						0x00010033


#define CHECKSUM_EFFECT_FIREWORK_PURPLE_UP					0x00010034
#define CHECKSUM_EFFECT_FIREWORK_PURPLE_EXPLOSION			0x00010035
#define CHECKSUM_EFFECT_FIREWORK_RED_UP						0x00010036
#define CHECKSUM_EFFECT_FIREWORK_RED_EXPLOSION				0x00010037

#define CHECKSUM_EFFECT_ENGLES_CLAP							0x00010038
#define CHECKSUM_EFFECT_ENGLES_STAMP						0x00010039
#define CHECKSUM_EFFECT_ENGLES_SPARK_HOLD					0x0001003A
#define CHECKSUM_EFFECT_ENGLES_MISSILE_LAUNCH				0x0001003B
#define CHECKSUM_EFFECT_ENGLES_MISSILE_EXPLOSION			0x0001003C

#define CHECKSUM_EFFECT_LONGKATANA_CHARGING					0x0001003D
#define CHECKSUM_EFFECT_POD_COUNTERSHOTGUN_GUNFIRE			0x0001003E
#define CHECKSUM_EFFECT_POD_COUNTERSHOTGUN_SPARK			0x00010040
#define CHECKSUM_EFFECT_POD_COUNTERATTACK					0x00010041

#define CHECKSUM_EFFECT_BEAUVOIR_SONIC						0x00010042
#define CHECKSUM_EFFECT_LONGKATANA_CHARGING_END				0x00010043

#define CHECKSUM_EFFECT_SPEARATTACK							0x00010044
#define CHECKSUM_EFFECT_GAUNTLETATTACK						0x00010045

#define CHECKSUM_EFFECT_ENGELS_WATERSPLASH					0x00010046
#define CHECKSUM_EFFECT_SPEARATTACK_LONG					0x00010047
#define CHECKSUM_EFFECT_ENGELS_HOLD_SMOKE					0x00010048

#define CHECKSUM_EFFECT_FIREWORK_UP_BLUE					0x00010049
#define CHECKSUM_EFFECT_FIREWORK_UP_GREEN					0x0001004A
#define CHECKSUM_EFFECT_FIREWORK_UP_ORANGE					0x0001004B
#define CHECKSUM_EFFECT_FIREWORK_UP_PURPLE					0x0001004C
#define CHECKSUM_EFFECT_FIREWORK_UP_RED						0x0001004D
#define CHECKSUM_EFFECT_FIREWORK_UP_YELLOW					0x0001004E
#define CHECKSUM_EFFECT_FIREWORK_EXPLOSION_BLUE				0x00010050
#define CHECKSUM_EFFECT_FIREWORK_EXPLOSION_GREEN			0x00010051
#define CHECKSUM_EFFECT_FIREWORK_EXPLOSION_ORANGE			0x00010052
#define CHECKSUM_EFFECT_FIREWORK_EXPLOSION_PURPLE			0x00010053
#define CHECKSUM_EFFECT_FIREWORK_EXPLOSION_RED				0x00010054
#define CHECKSUM_EFFECT_FIREWORK_EXPLOSION_YELLOW			0x00010055

#define CHECKSUM_EFFECT_POD_COUNTERSHOTGUN_BULLET			0x00010056
#define CHECKSUM_EFFECT_POD_COUNTERSHOTGUN_EXPLOSION		0x00010057

#define CHECKSUM_EFFECT_PURPLISHREDFIRE						0x00010058
#define CHECKSUM_EFFECT_TEKKEN_BLUEFIRE						0x00010059
#define CHECKSUM_EFFECT_9S_SPIRAL							0x0001005A

#define CHECKSUM_EFFECT_9S_APPEAR							0x0001005B

#define CHECKSUM_EFFECT_BEAUVOIR_REDFIRE					0x0001005C

// Laser Hit Effect
#define CHECKSUM_EFFECT_LASER_HIT_EFFECT_S					0x00100000


#define WEAPON_DISSOLVE_SPEED				0.8f
#define MISSILE_TRAIL_NUMBER				30




#define TARGETANIMATION_PODLASER							100000

#define FIREWORK_UP_SPEED									33.f
// Object Original ID For UI
#define OriginID_2B					1
#define OriginID_9S					5
#define OriginID_Pod2B				10
#define OriginID_Pod9S				15
#define OriginID_HumanoidSmall		100
#define OriginID_HumanoidBig		500
#define OriginID_CrossAndroid		600
#define OriginID_ClownFly			700
#define OriginID_Tank				1000
#define OriginID_Beauvoir			1010
#define OriginID_Zhuangzi			1020
#define OriginID_Engels				1030
#define OriginID_Dragoon			1100
#define OriginID_TreasureBox		1300
#define OriginID_HumanoidClown		1400
#define OriginID_VendingMachine		1500
#define OriginID_ZhuangziEnviron	1550

#define OriginID_Iron9S				2000
#define OriginID_IronHumanoidSmall	3000

// Flag UI Call 
#define FLAG_UI_CALL_INITIALIZE		0x00000000
#define	FLAG_UI_CALL_HPBAR			0x00000001
#define	FLAG_UI_CALL_TARGET			0x00000002
#define	FLAG_UI_CALL_DAMAGE			0x00000004
#define FLAG_UI_CALL_PODCOOLTIME	0x00000008
#define FLAG_UI_CALL_SYSMSG			0x00000010
#define FLAG_UI_CALL_POINTER		0x00000020
#define FLAG_UI_CALL_CINEMATIC		0x00000040
#define FLAG_UI_CALL_ENGAGE			0x00000080
#define FLAG_UI_CALL_DIRECTION		0x00000100

// Flag Collision 
#define	FLAG_COLLISION_INITIALIZE	0x00000000
#define	FLAG_COLLISION_HITBOX		0x00000001
#define FLAG_COLLISION_ATTACKBOX	0x00000002
#define FLAG_COLLISION_RAY			0x00000004
#define FLAG_COLLISION_WHOLERANGE	0x00000008
#define FLAG_COLLISION_DONUT0		0x00000010
#define FLAG_COLLISION_B_RING		0x00000020
#define FLAG_COLLISION_Z_RING		0x00000040

// Color Pallette
#define COLOR_CORE_BASE				XMVectorSet(194.f ,192.f, 168.f, 0.f)
#define COLOR_CORE_BUTTON_BASE		XMVectorSet(174.f, 170.f, 149.f, 0.f)
#define COLOR_CORE_BUTTON_PRESSED	XMVectorSet(80.f, 77.f, 66.f, 0.f)

// For MiniGame
#define MINIGAME_IRONFIST			 L"IronFist"
#define MINIGAME_PLAYER				 L"MiniGame_Player"
#define MINIGAME_WEAPON				 L"MiniGame_WP"
#define MINIGAME_MONSTER			 L"MiniGame_Mon"
#define MINIGAME_IRONFIST_CAMERA	 L"IronFistCam"
#define MINIGAME_IRONFIST_BACKGROUND L"IronFistBackGround"

template <typename T>
bool CompareLength(T& Dst, T& Src)
{
	return Dst.fLength < Src.fLength;
}

template <typename T>
bool CompareDistance(T& Dst, T& Src)
{
	return Dst.iDistance > Src.iDistance;
}

#include "Client_Struct.h"

#define EQUIP_OFFSET 0.785f
#define SUBEQUIP_OFFSET 0.805f

#define SUCCESS		1

#define JUMPPOWER	1.75f
#define SECPERFRAME 0.017f
#define SPURTSPEED  9.f
#define RUNSPEED    5.2f
#define WALKSPEED	3.f
#define ZEROPOINTONE 0.1f
#define PLAYER_MAX_HEALTH 500
#define PLAYER_DFL_DEFENCE 50
#define TUTORIAL_START_POSITION			XMVectorSet(-0.98f, 19.03f, -33.92f, 1.f)
#define AMUSEMENT_START_POSITION		XMVectorSet(-232.29f, 7.3f, 100.9f, 1.f)
#define OPERA_START_POSITION			XMVectorSet(-1.219f, -5.767f, 0.15154f, 1.f)
#define AMUSEMENT_COASTER_ENDPOSITION	XMVectorSet(112.839172f, 20.2811642f, -41.2737579f, 1.f)
#define ZHUANGZI_START_POSITION		XMVectorSet(606.824f, 48.0791f, 212.695f, 1.f)
#define ZHUANGZI_START_POSITION2		XMVectorSet(603.56f, 48.0791f, 212.429f, 1.f)
#define ENGELS_START_POSITION		XMVectorSet(-0.363903f, 0.285289f, -19.6074f, 1.f)
#define IRONFIST_PLAYER_START_POSITION		XMVectorSet(12.4963f, 0.5f, -0.42784f, 1.f)
#define IRONFIST_MONSTER_START_POSITION		XMVectorSet(-2.8323f, 0.5f, -0.4f, 1.f)
// #define IRONFIST_PLAYER_START_POSITION		XMVectorSet(9.99288082f, 0.5f, -0.42784f, 1.f)
// #define IRONFIST_MONSTER_START_POSITION		XMVectorSet(6.00617313f, 0.5f, -0.4f, 1.f)

#define BEAUVOIR_JUMPSTART_TO_STAGE_POSITION		_float4(38.4865f, -5.76292f, -0.283294f, 1.f)

#define PLAYER_HIT_RECOVERY 1.2f

#define PLAYER_COLLIDER_HITBOX			0.5f, 0.8f, 0.5f

#define PLAYER_START_POSITION			-232.96f, -12.1862f, 105.33f, 1.f
#define PLAYER_START_POSITION_RIDES		-11.f, 1.16f, 7.93f, 1.f
#define PLAYER_START_POSITION_CHARIOT	60.37f, 9.00f, -27.84f, 1.f
#define PLAYER_START_POSITION_VILLAGE	-141.f, -12.2f, 105.18f

#define PLAYER_HIT_RECOVERY 1.2f
#define PLAYER_LONGKATANA_TRAIL_DEALY 0.5f

#define MISSILE_TRAIL_NUMBER			30


#define BEAUVOIR_FASTRUN 4.5f
#define BEAUVOIR_RUN 2.0f
#define BEAUVOIR_JUMPRUN 12.f

#define BEAUVOIR_JUMPRUNSPEED 30.f

#define BEAUVOIR_NAVIBULLET_SPEED 5.f
#define CROSSANDROID_NAVIBULLET_SPEED 8.f

#define BEAUVOIR_BULLET_JUMP 2.3f
#define BEAUVOIR_BULLET_POWERJUMP 2.7f

#define BEAUVOIR_BULLET_JUMP_COUNT 1
#define BEAUVOIR_BULLET_POWERJUMP_COUNT 2

#define BEAUVOIR_SEMI_LASER_DURATION 2.f

#define BEAUVOIR_HIT_RECOVERAY			1.f
#define BEAUVOIR_MAX_LIFE				4000.f
#define BEAUVOIR_ATTACK_DAMAGE			20

#define BEAUVOIR_JUMPBULLET_MAX_LIFETIME			5.f
#define BEAUVOIR_NAVIBULLET_MAX_LIFETIME			10.f
#define BEAUVOIR_RISINGBULLET_MAX_LIFETIME			7.f
#define BEAUVOIR_RISINGBULLET_SPEED					3.25f

#define BEAUVOIR_SKIRT_DISSOLVE_SPEED				0.3f

#define TANK_MAX_HP									2000
#define TANK_ATTACK_DAMAGE							20
#define TANK_DISSOLVE_SPEED							0.1f
// Player Animation Index/
#define ANIM_WALK									1				
#define ANIM_RUN									2				
#define ANIM_RUNSLIDING_RIGHT						3				
#define ANIM_RUNSLIDING_LEFT						4				
#define ANIM_SPURT									5				
#define ANIM_SPURTSLIDING_RIGHT						6				
#define ANIM_SPURTTORUN								7
#define ANIM_JUMPLANDING_RUN						10
#define ANIM_JUMP									13				
#define ANIM_JUMP_DW								14				
#define ANIM_JUMPLANDING							15				
#define ANIM_DOUBLEJUMP								19				
#define ANIM_HANG									26

#define ANIM_JUSTAVOID_FRONT						27
#define ANIM_JUSTAVOID_BACK							28
#define ANIM_JUSTAVOID_RIGHT						29
#define ANIM_JUSTAVOID_LEFT							30

#define ANIM_IDLE									46				
#define ANIM_FRONT_AVOID							62				
#define ANIM_FRONT_AVOID_SLIDING					63				
#define ANIM_BACK_AVOID								65				
#define ANIM_BACK_AVOID_SLIDING						66				
#define ANIM_RIGHT_AVOID							68				
#define ANIM_RIGHT_AVOID_SLIDING					69				
#define ANIM_LEFT_AVOID								71				
#define ANIM_LEFT_AVOID_SLIDING						72				
//--------------------------------Attack----------------------------------
#define ANIM_POD_LASERSTART							118				
#define ANIM_POD_LASERDW							119				

#define ANIM_KATANA_ATTACK1							147				
#define ANIM_KATANA_ATTACK2							148				
#define ANIM_KATANA_ATTACK3							149				
#define ANIM_KATANA_ATTACK4							150				
#define ANIM_KATANA_ATTACK5							151				
#define ANIM_KATANA_ATTACK6							152				
#define ANIM_KATANA_ATTACK7							153				

#define ANIM_KATANA_POWERATTACK1					154				
#define ANIM_KATANA_POWERATTACK2					155				

#define ANIM_KATANA_JUMPATTACK						161				
#define ANIM_KATANA_JUMPATTACK2						162				
#define ANIM_KATANA_JUMPATTACK3						163				

#define ANIM_KATANA_JUMPDW_POWERATTACK				169				
#define ANIM_KATANA_JUMPDW_POWERATTACK_SPIKE		170				
#define ANIM_KATANA_JUMPDW_POWERATTACK_END			171					

#define ANIM_LONGKATANA_ATTACK1						183				
#define ANIM_LONGKATANA_ATTACK2						184				
#define ANIM_LONGKATANA_ATTACK3						185				
#define ANIM_LONGKATANA_ATTACK4						186				

#define ANIM_LONGKATANA_POWERATTACK1				187				
#define ANIM_LONGKATANA_POWERATTACK2				190				
#define ANIM_LONGKATANA_POWERATTACK3				193				

#define ANIM_LONGKATANA_STARTCHARGE					194				
#define ANIM_LONGKATANA_CHARGEDW					197				
#define ANIM_LONGKATANA_CHARGEATTACK				198				

#define ANIM_LONGKATANA_JUMPDW_ATTACK				202				
#define ANIM_LONGKATANA_JUMPDW_ATTACK_SPIKE			203				
#define ANIM_LONGKATANA_JUMPDW_ATTACK_END			204				

#define ANIM_LONGKATANA_IDLE						214				

#define ANIM_SPEAR_ATTACK1							215				
#define ANIM_SPEAR_ATTACK2							216				
#define ANIM_SPEAR_ATTACK3							217				
#define ANIM_SPEAR_ATTACK4							218				
#define ANIM_SPEAR_ATTACK5							219				
#define ANIM_SPEAR_ATTACK6							220				

#define ANIM_SPEAR_POWERATTACK						222				

#define ANIM_SPEAR_JUMPATTACK1						223				
#define ANIM_SPEAR_JUMPATTACK2						224				
#define ANIM_SPEAR_JUMPATTACK3						225				

#define ANIM_GAUNTLET_ATTACK1						227				
#define ANIM_GAUNTLET_ATTACK2						228				
#define ANIM_GAUNTLET_ATTACK3						229				
#define ANIM_GAUNTLET_ATTACK4						230				
#define ANIM_GAUNTLET_ATTACK5						231				
#define ANIM_GAUNTLET_ATTACK6						232				
#define ANIM_GAUNTLET_ATTACK7						233				
#define ANIM_GAUNTLET_ATTACK8						234				

#define ANIM_GAUNTLET_POWERATTACK1					235				
#define ANIM_GAUNTLET_POWERATTACK2					236				
#define ANIM_GAUNTLET_POWERATTACK3					237				

#define ANIM_GAUNTLET_JUMPATTACK1					238				
#define ANIM_GAUNTLET_JUMPATTACK2					239				
#define ANIM_GAUNTLET_JUMPATTACK3					240				

#define ANIM_GAUNTLET_JUMPPOWERATTACK				241				
#define ANIM_GAUNTLET_JUMPPOWERATTACK_DW			242			

#define ANIM_JUSTAVOID_COUNTERATTACK				244

#define ANIM_HIT_FRONT								245
#define ANIM_HIT_BACK								246
#define ANIM_POWERHIT_FRONT							247
#define ANIM_POWERHIT_BACK							248

////////////////////////////////////////////////////////////////////////////////////////////////////
#define ANIM_9S_IDLE2								0

#define ANIM_9S_SPURTSLIDING						6
#define ANIM_9S_JUMPLANDINGRUN						7

#define ANIM_9S_JUMP								10
#define ANIM_9S_JUMPDW								11
#define ANIM_9S_JUMPLANDING							12

#define ANIM_9S_DOUBLEJUMP							14

#define ANIM_9S_ATTACK1								78				
#define ANIM_9S_ATTACK2								79				
#define ANIM_9S_ATTACK3								80				
#define ANIM_9S_ATTACK4								81				
#define ANIM_9S_ATTACK5								82				
#define ANIM_9S_ATTACK6								83	

#define ANIM_9S_HIT_FRONT							131

#define ANIM_9S_IDLE								151		

#define COASTER_9S_NAVIINDEX						80


/////////////// 9S SPEAR ////////////////

#define ANDROID_9S_SPEAR_DAMAGE						20


/////////////////// Bullet /////////////

#define MONSTER_BULLET_SPEED						7.f
#define MONSTER_BULLET_MAXLIFE						20.f

#define BEAUVOIR_BULLET_SPEED						8.3f
#define BEAUVOIR_BULLET_FASTSPEED					11.f

#define POD_BULLET_SPEED							25.f
#define POD_COUNTERATTACK_SPEED						0.f
#define POD_BULLET_MAXLIFE							20.f
#define POD_COUNTERATTACK_MAXLIFE					0.1f			

#define POD_LASER_DAMAGE							300
#define POD_LASER_SPEED								60.f
#define ROBOT_HIT_EFFECT_DEALY						1.f
#define ROBOT_HIT_EFFECT_DURATION					0.5f

////////////////// Beauvoir ////////////
#define ANIM_BEAUVOIR_IDLE							0

#define ANIM_BEAUVOIR_SHOOTMISSILE					11

#define ANIM_MELEE_ROTATE_START						12
#define ANIM_MELEE_ROTATE_DW						13
#define ANIM_MELEE_ROTATE_END						14

#define ANIM_FIRE_MISSILES							19

#define ANIM_LASER_RING_START						20
#define ANIM_ROTATE_LASER_DW						21
#define ANIM_LASER_RING_END							22
#define ANIM_ROTATE_LASER_START						23
#define ANIM_ROTATE_LASER_END						25

#define ANIM_SPREADBULLET_START						26
#define ANIM_SPREADBULLET_DW						27
#define ANIM_SPREADBULLET_END						28

#define ANIM_CHANGE_IDLE							32
#define ANIM_CHANGE_APPEARANCE						33
#define ANIM_CHANGE_BEAUVOIR_RUN_DW					34
#define ANIM_CHANGE_BEAUVOIR_RUN_START				35
#define ANIM_CHANGE_BEAUVOIR_JUMP					42
#define ANIM_CHANGE_BEAUVOIR_CREATE_RING			43

#define BEAUVOIR_DEADMAXRATIO						0.65068

#define ANIM_BEAUVOIR_JUMP							45

#define ANIM_BEAUVOIR_HOWL							47

#define BEAUVOIR_ATTACKBOX_VALUE					2000
#define BEAVOIR_JUMPBULLET_MAX_LIFETIME				5.f
#define BEAUVOIR_SPHERE_COLLIDER_RADIUS				7.f
#define BEAUVOIR_ATTACKBOX_COLLIDER_RADIUS			3.5f

#define BEAUVOIR_CREATE_RINGWAVE_FIRST_RATIO		0.1
#define BEAUVOIR_CREATE_RINGWAVE_SECOND_RATIO		0.38
#define BEAUVOIR_CREATE_RINGWAVE_THIRD_RATIO		0.66
#define BEAUVOIR_CREATE_RINGWAVE_FOURTH_RATIO		0.94

#define BEAUVOIR_RINGWAVE_SPEED						10.f

////////////////////// Zhuangzi //////////////////////////

#define ANIM_ZHUANGZI_GROGGY_START					6

#define ANIM_ZHUANGZI_CHANGE_SPHERE					13

#define ANIM_ZHUANGZI_ROTATE_BACKWARD				14
#define ANIM_ZHUANGZI_STABTAIL						15

#define ANIM_ZHUANGZI_BEATING_DW					20

#define ANIM_ZHUANGZI_IDLE							27

#define ANIM_ZHUANGZI_APPEARANCE_IDLE				28

#define ANIM_ZHUANGZI_ROTATE_SWEEPFLOOR				30

#define ANIM_ZHUANGZI_ROTATE_FORWARD				34

#define ANIM_ZHUANGZI_APPEARANCE_JUMP				35

#define ANIM_ZHUANGZI_MISSILE_END					45

#define ANIM_ZHUANGZI_CHANGE_INERTIA				46

#define ANIM_ZHUANGZI_CHANGE_JUMPCHASE				53

#define ANIM_ZHUANGZI_SPIKE_TAIL					61

#define ANIM_ZHUANGZI_GROGGY_END					63

#define ANIM_ZHUANGZI_BEATING_END					65

#define ANIM_ZHUANGZI_CHANGE_DIZZY					69

#define ANIM_ZHUANGZI_BEATING_START					74

#define ANIM_ZHUANGZI_MISSILE_START					77

#define ANIM_ZHUANGZI_CHASE_START					82
#define ANIM_ZHUANGZI_CHASE_END						83

#define ANIM_ZHUANGZI_CHANGE_JUMPSPIKE				85

#define ANIM_ZHUANGZI_CHANGE_WEEKJUMP_CHASE_STOP	87

#define ANIM_ZHUANGZI_CHASE_DW						92

#define ANIM_ZHUANGZI_CHARGE_BLOW					96

#define ANIM_ZHUANGZI_SHOOTTRAIL					99

#define ANIM_ZHUANGZI_JUMP_BLOW						103

#define ANIM_ZHUANGZI_UNBEATABLE_MOTION				105

#define ANIM_ZHUANGZI_MISSILE_DW					119

#define ANIM_ZHUANGZI_CHANGE_CHASE_TARGET			120

#define ANIM_ZHUANGZI_GROGGY_DW						123

#define ZHUANGZI_HIT_RECOVERY						1.f
#define ZHUANGZI_MAX_LIFE							2000.f
#define ZHUANGZI_ATTACK_DAMAGE						15

#define WHOLERANGERADIUS							2000.f
#define ZHUANGZI_WHOLERANGEATTACK_DAMAGE			30

#define ZHUANGZI_STABTAIL_CREATEBOX_RATIO			0.196f
#define ZHUANGZI_WEAPONTRAIL_SPEED					22.f

#define ZHUANGZI_SCENE_ONCELL						33
#define ZHUANGZI_SCENE_EXIT_ONCELL					65

#define EXITBRIDGE_LAYERINDEX						1
#define EXITDOOR_LAYERINDEX							1

/////////////////////////////////////////////////////////////////////////////
//define Engels.h

#define ENGELS_HIT_RECOVERY							1.f
#define ENGELS_MAX_LIFE								4000.f
#define ENGELS_ATTACK_DAMAGE						30

////////////// TANK ////////////////////////

#define TANK_LSWEEP			12
#define	TANK_RSWEEP			60
#define TANK_LSTAMP			34
#define TANK_RSTAMP			61
#define TANK_BCRASH			22	
#define TANK_DESTROY		5
#define TANK_RUSH			23
#define TANK_LASER			63
#define TANK_MONINGSTAR		35
#define TANK_FOWARD			69
#define	TANK_IDLE			40
#define TANK_TURN_IDLE		42

//////////// HUMANOID_SMALL /////////////////

#define SMALL_IDLE			12
#define SMALL_WALK			15
#define SMALL_RUSH_READY	92
#define SMALL_RUSHING		93
#define SMALL_RUSH_END		94
#define SMALL_PUNCH			76
#define SMALL_BACKSTEP		25
#define SMALL_JUMP_FOWARD	19
#define SMALL_HEADING		75
#define SMALL_SIDESTEP		17
#define SMALL_HIT1			31
#define SMALL_HIT2			33
#define SMALL_DROP			45
#define SMALL_LANDING		46
#define	SMALL_STANDING		63

//////////// HUMANOID_BIG /////////////////

#define BIG_IDLE			51
#define BIG_BACKJUMP		89
#define BIG_BACKSTEP		137
#define BIG_FIRE_READY		140
#define BIG_FIRE_MINI		143
#define BIG_FIRE_BIG		90
#define BIG_MELEE			62
#define BIG_HIT				55
#define BIG_DROP			27
#define BIG_DROPING			228
#define BIG_LANDING			107

/////////////// HUMANOID_CLOWN /////////////////////

#define CLOWN_IDLE			14
#define CLOWN_CONFETTI		3
#define CLOWN_DANCE_BEGIN	8
#define CLOWN_DANCING		9
#define CLOWN_DANCE_END		10
#define CLOWN_WALK			0	

/////////////// CLOWN_FLY ///////////////////////

#define FLY_IDLE			15
#define FLY_ATTACK			26
#define FLY_STUN			10
#define FLY_HIT				13
#define	FLY_UP				20
#define FLY_DOWN			21
#define FLY_BULLET_COOL		3.0

/////////////// CAMERA ///////////////////////

#ifdef _DEBUG
#define CAM_PLUS_Y_LIMIT				200
#define CAM_MINUS_Y_LIMIT				-180
#define CAM_PLUS_X_LIMIT				100
#define CAM_MINUS_X_LIMIT				-100
#else 
#define CAM_PLUS_Y_LIMIT				430
#define CAM_MINUS_Y_LIMIT				-490
#define CAM_PLUS_X_LIMIT				100
#define CAM_MINUS_X_LIMIT				-100
#endif


#define CAM_DISTNACE_NORMAL				5.f
#define CAM_DISTANCE_SPURT				6.f
#define CAM_JUMPATK_DISTANCE_PLUS		4.01f
#define CAM_JUMPATK_DISTANCE_MINUS		3.99f
#define CAM_JUMPATK_DISTANCE_NORMAL		4.f
#define CAM_CHECK_POSITION_DISTANCE		0.0003f


//////////// WHEEL //////////////////////////
#define WHEEL_POSITION_X				27.6745f
#define WHEEL_POSITION_Z				0.8421f


//////////// STAIR ///////////////////////////
#define STAIR_POSITION_X				125.5f
#define STAIR_POSITION_Y				35.26f
#define STAIR_POSITION_EYE_Z			-36.82f
#define STAIR_POSITION_AT_Z				-30.82f


#include <time.h>

using namespace Client;

#endif // !__CLIENT_DEFINES_H__