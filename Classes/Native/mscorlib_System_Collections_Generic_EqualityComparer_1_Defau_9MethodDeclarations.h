#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t1795;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m12051_gshared (DefaultComparer_t1795 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12051(__this, method) (( void (*) (DefaultComparer_t1795 *, const MethodInfo*))DefaultComparer__ctor_m12051_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12052_gshared (DefaultComparer_t1795 * __this, DateTime_t60  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12052(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1795 *, DateTime_t60 , const MethodInfo*))DefaultComparer_GetHashCode_m12052_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12053_gshared (DefaultComparer_t1795 * __this, DateTime_t60  ___x, DateTime_t60  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12053(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1795 *, DateTime_t60 , DateTime_t60 , const MethodInfo*))DefaultComparer_Equals_m12053_gshared)(__this, ___x, ___y, method)
