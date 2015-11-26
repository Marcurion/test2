#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// AngleTest
#include "AssemblyU2DCSharp_AngleTest.h"
#ifndef _MSC_VER
#else
#endif
// AngleTest
#include "AssemblyU2DCSharp_AngleTestMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"


// System.Void AngleTest::.ctor()
extern "C" void AngleTest__ctor_m0 (AngleTest_t2 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m5(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AngleTest::Update()
extern TypeInfo* Input_t5_il2cpp_TypeInfo_var;
extern "C" void AngleTest_Update_m1 (AngleTest_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t5_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m6(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		AngleTest_getAngleTowards_m2(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Single AngleTest::getAngleTowards()
extern TypeInfo* Mathf_t7_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t8_il2cpp_TypeInfo_var;
extern "C" float AngleTest_getAngleTowards_m2 (AngleTest_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t7_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Single_t8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t6  V_0 = {0};
	float V_1 = 0.0f;
	Vector3_t6  V_2 = {0};
	Vector3_t6  V_3 = {0};
	Vector3_t6  V_4 = {0};
	Vector3_t6  V_5 = {0};
	Vector3_t6  V_6 = {0};
	{
		Transform_t1 * L_0 = (__this->___target_2);
		NullCheck(L_0);
		Vector3_t6  L_1 = Transform_get_position_m7(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		float L_2 = ((&V_2)->___x_0);
		Transform_t1 * L_3 = Component_get_transform_m8(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t6  L_4 = Transform_get_position_m7(L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		float L_5 = ((&V_3)->___y_1);
		Transform_t1 * L_6 = (__this->___target_2);
		NullCheck(L_6);
		Vector3_t6  L_7 = Transform_get_position_m7(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		float L_8 = ((&V_4)->___z_2);
		Vector3_t6  L_9 = {0};
		Vector3__ctor_m9(&L_9, L_2, L_5, L_8, /*hidden argument*/NULL);
		Transform_t1 * L_10 = Component_get_transform_m8(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t6  L_11 = Transform_get_position_m7(L_10, /*hidden argument*/NULL);
		Vector3_t6  L_12 = Vector3_op_Subtraction_m10(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		Vector3_t6  L_13 = V_0;
		float L_14 = Vector3_get_magnitude_m11((&V_0), /*hidden argument*/NULL);
		Vector3_t6  L_15 = Vector3_op_Division_m12(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		float L_16 = ((&V_0)->___x_0);
		float L_17 = ((&V_0)->___z_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t7_il2cpp_TypeInfo_var);
		float L_18 = atan2f(L_16, L_17);
		Transform_t1 * L_19 = Component_get_transform_m8(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t6  L_20 = Transform_get_forward_m13(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		float L_21 = ((&V_5)->___x_0);
		Transform_t1 * L_22 = Component_get_transform_m8(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t6  L_23 = Transform_get_forward_m13(L_22, /*hidden argument*/NULL);
		V_6 = L_23;
		float L_24 = ((&V_6)->___z_2);
		float L_25 = atan2f(L_21, L_24);
		V_1 = ((float)((float)L_18-(float)L_25));
		float L_26 = V_1;
		float L_27 = L_26;
		Object_t * L_28 = Box(Single_t8_il2cpp_TypeInfo_var, &L_27);
		Debug_Log_m14(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		float L_29 = V_1;
		return L_29;
	}
}
// Move
#include "AssemblyU2DCSharp_Move.h"
#ifndef _MSC_VER
#else
#endif
// Move
#include "AssemblyU2DCSharp_MoveMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"


// System.Void Move::.ctor()
extern "C" void Move__ctor_m3 (Move_t4 * __this, const MethodInfo* method)
{
	{
		__this->___speed_2 = (5.0f);
		MonoBehaviour__ctor_m5(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Move::Update()
extern TypeInfo* Input_t5_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern Il2CppCodeGenString* _stringLiteral1;
extern "C" void Move_Update_m4 (Move_t4 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t1 * L_0 = Component_get_transform_m8(__this, /*hidden argument*/NULL);
		Transform_t1 * L_1 = L_0;
		NullCheck(L_1);
		Vector3_t6  L_2 = Transform_get_position_m7(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t5_il2cpp_TypeInfo_var);
		float L_3 = Input_GetAxis_m15(NULL /*static, unused*/, _stringLiteral0, /*hidden argument*/NULL);
		float L_4 = Time_get_deltaTime_m16(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = (__this->___speed_2);
		float L_6 = Input_GetAxis_m15(NULL /*static, unused*/, _stringLiteral1, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m16(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = (__this->___speed_2);
		Vector3_t6  L_9 = {0};
		Vector3__ctor_m9(&L_9, ((float)((float)((float)((float)L_3*(float)L_4))*(float)L_5)), (0.0f), ((float)((float)((float)((float)L_6*(float)L_7))*(float)L_8)), /*hidden argument*/NULL);
		Vector3_t6  L_10 = Vector3_op_Addition_m17(NULL /*static, unused*/, L_2, L_9, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_m18(L_1, L_10, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
