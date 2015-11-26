#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t1552;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m9597_gshared (DefaultComparer_t1552 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m9597(__this, method) (( void (*) (DefaultComparer_t1552 *, const MethodInfo*))DefaultComparer__ctor_m9597_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m9598_gshared (DefaultComparer_t1552 * __this, UILineInfo_t155  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m9598(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1552 *, UILineInfo_t155 , const MethodInfo*))DefaultComparer_GetHashCode_m9598_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m9599_gshared (DefaultComparer_t1552 * __this, UILineInfo_t155  ___x, UILineInfo_t155  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m9599(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1552 *, UILineInfo_t155 , UILineInfo_t155 , const MethodInfo*))DefaultComparer_Equals_m9599_gshared)(__this, ___x, ___y, method)
