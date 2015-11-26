#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>
struct DefaultComparer_t1710;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::.ctor()
extern "C" void DefaultComparer__ctor_m11479_gshared (DefaultComparer_t1710 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m11479(__this, method) (( void (*) (DefaultComparer_t1710 *, const MethodInfo*))DefaultComparer__ctor_m11479_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m11480_gshared (DefaultComparer_t1710 * __this, bool ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m11480(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1710 *, bool, const MethodInfo*))DefaultComparer_GetHashCode_m11480_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11481_gshared (DefaultComparer_t1710 * __this, bool ___x, bool ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m11481(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1710 *, bool, bool, const MethodInfo*))DefaultComparer_Equals_m11481_gshared)(__this, ___x, ___y, method)
