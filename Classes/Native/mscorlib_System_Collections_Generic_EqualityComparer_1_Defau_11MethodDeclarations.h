#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t1803;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m12089_gshared (DefaultComparer_t1803 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12089(__this, method) (( void (*) (DefaultComparer_t1803 *, const MethodInfo*))DefaultComparer__ctor_m12089_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12090_gshared (DefaultComparer_t1803 * __this, Guid_t368  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12090(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1803 *, Guid_t368 , const MethodInfo*))DefaultComparer_GetHashCode_m12090_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12091_gshared (DefaultComparer_t1803 * __this, Guid_t368  ___x, Guid_t368  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12091(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1803 *, Guid_t368 , Guid_t368 , const MethodInfo*))DefaultComparer_Equals_m12091_gshared)(__this, ___x, ___y, method)
