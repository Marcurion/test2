#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t1799;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m12068_gshared (DefaultComparer_t1799 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12068(__this, method) (( void (*) (DefaultComparer_t1799 *, const MethodInfo*))DefaultComparer__ctor_m12068_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12069_gshared (DefaultComparer_t1799 * __this, DateTimeOffset_t367  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12069(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1799 *, DateTimeOffset_t367 , const MethodInfo*))DefaultComparer_GetHashCode_m12069_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12070_gshared (DefaultComparer_t1799 * __this, DateTimeOffset_t367  ___x, DateTimeOffset_t367  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12070(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1799 *, DateTimeOffset_t367 , DateTimeOffset_t367 , const MethodInfo*))DefaultComparer_Equals_m12070_gshared)(__this, ___x, ___y, method)
