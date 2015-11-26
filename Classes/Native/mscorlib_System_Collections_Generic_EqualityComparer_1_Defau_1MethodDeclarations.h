#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t1544;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m9495_gshared (DefaultComparer_t1544 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m9495(__this, method) (( void (*) (DefaultComparer_t1544 *, const MethodInfo*))DefaultComparer__ctor_m9495_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m9496_gshared (DefaultComparer_t1544 * __this, UIVertex_t163  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m9496(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1544 *, UIVertex_t163 , const MethodInfo*))DefaultComparer_GetHashCode_m9496_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m9497_gshared (DefaultComparer_t1544 * __this, UIVertex_t163  ___x, UIVertex_t163  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m9497(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1544 *, UIVertex_t163 , UIVertex_t163 , const MethodInfo*))DefaultComparer_Equals_m9497_gshared)(__this, ___x, ___y, method)
