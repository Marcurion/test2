#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t1707;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1695;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11465_gshared (ShimEnumerator_t1707 * __this, Dictionary_2_t1695 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11465(__this, ___host, method) (( void (*) (ShimEnumerator_t1707 *, Dictionary_2_t1695 *, const MethodInfo*))ShimEnumerator__ctor_m11465_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11466_gshared (ShimEnumerator_t1707 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11466(__this, method) (( bool (*) (ShimEnumerator_t1707 *, const MethodInfo*))ShimEnumerator_MoveNext_m11466_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t564  ShimEnumerator_get_Entry_m11467_gshared (ShimEnumerator_t1707 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11467(__this, method) (( DictionaryEntry_t564  (*) (ShimEnumerator_t1707 *, const MethodInfo*))ShimEnumerator_get_Entry_m11467_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11468_gshared (ShimEnumerator_t1707 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11468(__this, method) (( Object_t * (*) (ShimEnumerator_t1707 *, const MethodInfo*))ShimEnumerator_get_Key_m11468_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11469_gshared (ShimEnumerator_t1707 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11469(__this, method) (( Object_t * (*) (ShimEnumerator_t1707 *, const MethodInfo*))ShimEnumerator_get_Value_m11469_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11470_gshared (ShimEnumerator_t1707 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11470(__this, method) (( Object_t * (*) (ShimEnumerator_t1707 *, const MethodInfo*))ShimEnumerator_get_Current_m11470_gshared)(__this, method)
