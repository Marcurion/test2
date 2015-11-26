#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t1801;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m12080_gshared (DefaultComparer_t1801 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12080(__this, method) (( void (*) (DefaultComparer_t1801 *, const MethodInfo*))DefaultComparer__ctor_m12080_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12081_gshared (DefaultComparer_t1801 * __this, Guid_t368  ___x, Guid_t368  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12081(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t1801 *, Guid_t368 , Guid_t368 , const MethodInfo*))DefaultComparer_Compare_m12081_gshared)(__this, ___x, ___y, method)
