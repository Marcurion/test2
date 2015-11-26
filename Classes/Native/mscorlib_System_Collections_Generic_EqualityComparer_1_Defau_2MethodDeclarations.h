#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
struct DefaultComparer_t1548;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m9546_gshared (DefaultComparer_t1548 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m9546(__this, method) (( void (*) (DefaultComparer_t1548 *, const MethodInfo*))DefaultComparer__ctor_m9546_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m9547_gshared (DefaultComparer_t1548 * __this, UICharInfo_t154  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m9547(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1548 *, UICharInfo_t154 , const MethodInfo*))DefaultComparer_GetHashCode_m9547_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m9548_gshared (DefaultComparer_t1548 * __this, UICharInfo_t154  ___x, UICharInfo_t154  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m9548(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1548 *, UICharInfo_t154 , UICharInfo_t154 , const MethodInfo*))DefaultComparer_Equals_m9548_gshared)(__this, ___x, ___y, method)
