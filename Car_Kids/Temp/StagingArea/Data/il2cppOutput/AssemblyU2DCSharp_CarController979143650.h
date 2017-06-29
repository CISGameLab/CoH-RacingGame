#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CarController
struct  CarController_t979143650  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CarController::ReadyText
	GameObject_t1756533147 * ___ReadyText_2;
	// UnityEngine.GameObject CarController::Settext
	GameObject_t1756533147 * ___Settext_3;
	// UnityEngine.GameObject CarController::GoText
	GameObject_t1756533147 * ___GoText_4;
	// UnityEngine.GameObject CarController::StartBtn
	GameObject_t1756533147 * ___StartBtn_5;
	// UnityEngine.GameObject CarController::cam
	GameObject_t1756533147 * ___cam_6;
	// UnityEngine.UI.Text CarController::ScoreText
	Text_t356221433 * ___ScoreText_7;
	// UnityEngine.UI.Text CarController::BlinkerText
	Text_t356221433 * ___BlinkerText_8;
	// UnityEngine.UI.Text CarController::Timer
	Text_t356221433 * ___Timer_9;
	// UnityEngine.GameObject CarController::Panel
	GameObject_t1756533147 * ___Panel_10;
	// UnityEngine.UI.Text CarController::header
	Text_t356221433 * ___header_11;
	// UnityEngine.UI.Text CarController::PanelScore
	Text_t356221433 * ___PanelScore_12;
	// UnityEngine.UI.Text CarController::PanelFinishBonus
	Text_t356221433 * ___PanelFinishBonus_13;
	// UnityEngine.UI.Text CarController::PanelTotalScore
	Text_t356221433 * ___PanelTotalScore_14;
	// UnityEngine.UI.Text CarController::GoFoods
	Text_t356221433 * ___GoFoods_15;
	// UnityEngine.UI.Text CarController::SlowFoods
	Text_t356221433 * ___SlowFoods_16;
	// UnityEngine.UI.Text CarController::WhoaFoods
	Text_t356221433 * ___WhoaFoods_17;
	// UnityEngine.GameObject CarController::QuitPanel
	GameObject_t1756533147 * ___QuitPanel_18;
	// System.Int32 CarController::currentTime
	int32_t ___currentTime_19;
	// System.Int32 CarController::carVel
	int32_t ___carVel_20;
	// System.Int32 CarController::score
	int32_t ___score_21;
	// System.Int32 CarController::greenCount
	int32_t ___greenCount_22;
	// System.Int32 CarController::orangeCount
	int32_t ___orangeCount_23;
	// System.Int32 CarController::redCount
	int32_t ___redCount_24;
	// System.Boolean CarController::canMove
	bool ___canMove_25;

public:
	inline static int32_t get_offset_of_ReadyText_2() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___ReadyText_2)); }
	inline GameObject_t1756533147 * get_ReadyText_2() const { return ___ReadyText_2; }
	inline GameObject_t1756533147 ** get_address_of_ReadyText_2() { return &___ReadyText_2; }
	inline void set_ReadyText_2(GameObject_t1756533147 * value)
	{
		___ReadyText_2 = value;
		Il2CppCodeGenWriteBarrier(&___ReadyText_2, value);
	}

	inline static int32_t get_offset_of_Settext_3() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___Settext_3)); }
	inline GameObject_t1756533147 * get_Settext_3() const { return ___Settext_3; }
	inline GameObject_t1756533147 ** get_address_of_Settext_3() { return &___Settext_3; }
	inline void set_Settext_3(GameObject_t1756533147 * value)
	{
		___Settext_3 = value;
		Il2CppCodeGenWriteBarrier(&___Settext_3, value);
	}

	inline static int32_t get_offset_of_GoText_4() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___GoText_4)); }
	inline GameObject_t1756533147 * get_GoText_4() const { return ___GoText_4; }
	inline GameObject_t1756533147 ** get_address_of_GoText_4() { return &___GoText_4; }
	inline void set_GoText_4(GameObject_t1756533147 * value)
	{
		___GoText_4 = value;
		Il2CppCodeGenWriteBarrier(&___GoText_4, value);
	}

	inline static int32_t get_offset_of_StartBtn_5() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___StartBtn_5)); }
	inline GameObject_t1756533147 * get_StartBtn_5() const { return ___StartBtn_5; }
	inline GameObject_t1756533147 ** get_address_of_StartBtn_5() { return &___StartBtn_5; }
	inline void set_StartBtn_5(GameObject_t1756533147 * value)
	{
		___StartBtn_5 = value;
		Il2CppCodeGenWriteBarrier(&___StartBtn_5, value);
	}

	inline static int32_t get_offset_of_cam_6() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___cam_6)); }
	inline GameObject_t1756533147 * get_cam_6() const { return ___cam_6; }
	inline GameObject_t1756533147 ** get_address_of_cam_6() { return &___cam_6; }
	inline void set_cam_6(GameObject_t1756533147 * value)
	{
		___cam_6 = value;
		Il2CppCodeGenWriteBarrier(&___cam_6, value);
	}

	inline static int32_t get_offset_of_ScoreText_7() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___ScoreText_7)); }
	inline Text_t356221433 * get_ScoreText_7() const { return ___ScoreText_7; }
	inline Text_t356221433 ** get_address_of_ScoreText_7() { return &___ScoreText_7; }
	inline void set_ScoreText_7(Text_t356221433 * value)
	{
		___ScoreText_7 = value;
		Il2CppCodeGenWriteBarrier(&___ScoreText_7, value);
	}

	inline static int32_t get_offset_of_BlinkerText_8() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___BlinkerText_8)); }
	inline Text_t356221433 * get_BlinkerText_8() const { return ___BlinkerText_8; }
	inline Text_t356221433 ** get_address_of_BlinkerText_8() { return &___BlinkerText_8; }
	inline void set_BlinkerText_8(Text_t356221433 * value)
	{
		___BlinkerText_8 = value;
		Il2CppCodeGenWriteBarrier(&___BlinkerText_8, value);
	}

	inline static int32_t get_offset_of_Timer_9() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___Timer_9)); }
	inline Text_t356221433 * get_Timer_9() const { return ___Timer_9; }
	inline Text_t356221433 ** get_address_of_Timer_9() { return &___Timer_9; }
	inline void set_Timer_9(Text_t356221433 * value)
	{
		___Timer_9 = value;
		Il2CppCodeGenWriteBarrier(&___Timer_9, value);
	}

	inline static int32_t get_offset_of_Panel_10() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___Panel_10)); }
	inline GameObject_t1756533147 * get_Panel_10() const { return ___Panel_10; }
	inline GameObject_t1756533147 ** get_address_of_Panel_10() { return &___Panel_10; }
	inline void set_Panel_10(GameObject_t1756533147 * value)
	{
		___Panel_10 = value;
		Il2CppCodeGenWriteBarrier(&___Panel_10, value);
	}

	inline static int32_t get_offset_of_header_11() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___header_11)); }
	inline Text_t356221433 * get_header_11() const { return ___header_11; }
	inline Text_t356221433 ** get_address_of_header_11() { return &___header_11; }
	inline void set_header_11(Text_t356221433 * value)
	{
		___header_11 = value;
		Il2CppCodeGenWriteBarrier(&___header_11, value);
	}

	inline static int32_t get_offset_of_PanelScore_12() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___PanelScore_12)); }
	inline Text_t356221433 * get_PanelScore_12() const { return ___PanelScore_12; }
	inline Text_t356221433 ** get_address_of_PanelScore_12() { return &___PanelScore_12; }
	inline void set_PanelScore_12(Text_t356221433 * value)
	{
		___PanelScore_12 = value;
		Il2CppCodeGenWriteBarrier(&___PanelScore_12, value);
	}

	inline static int32_t get_offset_of_PanelFinishBonus_13() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___PanelFinishBonus_13)); }
	inline Text_t356221433 * get_PanelFinishBonus_13() const { return ___PanelFinishBonus_13; }
	inline Text_t356221433 ** get_address_of_PanelFinishBonus_13() { return &___PanelFinishBonus_13; }
	inline void set_PanelFinishBonus_13(Text_t356221433 * value)
	{
		___PanelFinishBonus_13 = value;
		Il2CppCodeGenWriteBarrier(&___PanelFinishBonus_13, value);
	}

	inline static int32_t get_offset_of_PanelTotalScore_14() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___PanelTotalScore_14)); }
	inline Text_t356221433 * get_PanelTotalScore_14() const { return ___PanelTotalScore_14; }
	inline Text_t356221433 ** get_address_of_PanelTotalScore_14() { return &___PanelTotalScore_14; }
	inline void set_PanelTotalScore_14(Text_t356221433 * value)
	{
		___PanelTotalScore_14 = value;
		Il2CppCodeGenWriteBarrier(&___PanelTotalScore_14, value);
	}

	inline static int32_t get_offset_of_GoFoods_15() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___GoFoods_15)); }
	inline Text_t356221433 * get_GoFoods_15() const { return ___GoFoods_15; }
	inline Text_t356221433 ** get_address_of_GoFoods_15() { return &___GoFoods_15; }
	inline void set_GoFoods_15(Text_t356221433 * value)
	{
		___GoFoods_15 = value;
		Il2CppCodeGenWriteBarrier(&___GoFoods_15, value);
	}

	inline static int32_t get_offset_of_SlowFoods_16() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___SlowFoods_16)); }
	inline Text_t356221433 * get_SlowFoods_16() const { return ___SlowFoods_16; }
	inline Text_t356221433 ** get_address_of_SlowFoods_16() { return &___SlowFoods_16; }
	inline void set_SlowFoods_16(Text_t356221433 * value)
	{
		___SlowFoods_16 = value;
		Il2CppCodeGenWriteBarrier(&___SlowFoods_16, value);
	}

	inline static int32_t get_offset_of_WhoaFoods_17() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___WhoaFoods_17)); }
	inline Text_t356221433 * get_WhoaFoods_17() const { return ___WhoaFoods_17; }
	inline Text_t356221433 ** get_address_of_WhoaFoods_17() { return &___WhoaFoods_17; }
	inline void set_WhoaFoods_17(Text_t356221433 * value)
	{
		___WhoaFoods_17 = value;
		Il2CppCodeGenWriteBarrier(&___WhoaFoods_17, value);
	}

	inline static int32_t get_offset_of_QuitPanel_18() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___QuitPanel_18)); }
	inline GameObject_t1756533147 * get_QuitPanel_18() const { return ___QuitPanel_18; }
	inline GameObject_t1756533147 ** get_address_of_QuitPanel_18() { return &___QuitPanel_18; }
	inline void set_QuitPanel_18(GameObject_t1756533147 * value)
	{
		___QuitPanel_18 = value;
		Il2CppCodeGenWriteBarrier(&___QuitPanel_18, value);
	}

	inline static int32_t get_offset_of_currentTime_19() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___currentTime_19)); }
	inline int32_t get_currentTime_19() const { return ___currentTime_19; }
	inline int32_t* get_address_of_currentTime_19() { return &___currentTime_19; }
	inline void set_currentTime_19(int32_t value)
	{
		___currentTime_19 = value;
	}

	inline static int32_t get_offset_of_carVel_20() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___carVel_20)); }
	inline int32_t get_carVel_20() const { return ___carVel_20; }
	inline int32_t* get_address_of_carVel_20() { return &___carVel_20; }
	inline void set_carVel_20(int32_t value)
	{
		___carVel_20 = value;
	}

	inline static int32_t get_offset_of_score_21() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___score_21)); }
	inline int32_t get_score_21() const { return ___score_21; }
	inline int32_t* get_address_of_score_21() { return &___score_21; }
	inline void set_score_21(int32_t value)
	{
		___score_21 = value;
	}

	inline static int32_t get_offset_of_greenCount_22() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___greenCount_22)); }
	inline int32_t get_greenCount_22() const { return ___greenCount_22; }
	inline int32_t* get_address_of_greenCount_22() { return &___greenCount_22; }
	inline void set_greenCount_22(int32_t value)
	{
		___greenCount_22 = value;
	}

	inline static int32_t get_offset_of_orangeCount_23() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___orangeCount_23)); }
	inline int32_t get_orangeCount_23() const { return ___orangeCount_23; }
	inline int32_t* get_address_of_orangeCount_23() { return &___orangeCount_23; }
	inline void set_orangeCount_23(int32_t value)
	{
		___orangeCount_23 = value;
	}

	inline static int32_t get_offset_of_redCount_24() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___redCount_24)); }
	inline int32_t get_redCount_24() const { return ___redCount_24; }
	inline int32_t* get_address_of_redCount_24() { return &___redCount_24; }
	inline void set_redCount_24(int32_t value)
	{
		___redCount_24 = value;
	}

	inline static int32_t get_offset_of_canMove_25() { return static_cast<int32_t>(offsetof(CarController_t979143650, ___canMove_25)); }
	inline bool get_canMove_25() const { return ___canMove_25; }
	inline bool* get_address_of_canMove_25() { return &___canMove_25; }
	inline void set_canMove_25(bool value)
	{
		___canMove_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
