#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t1805;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m12097_gshared (DefaultComparer_t1805 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12097(__this, method) (( void (*) (DefaultComparer_t1805 *, const MethodInfo*))DefaultComparer__ctor_m12097_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12098_gshared (DefaultComparer_t1805 * __this, TimeSpan_t467  ___x, TimeSpan_t467  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12098(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t1805 *, TimeSpan_t467 , TimeSpan_t467 , const MethodInfo*))DefaultComparer_Compare_m12098_gshared)(__this, ___x, ___y, method)
