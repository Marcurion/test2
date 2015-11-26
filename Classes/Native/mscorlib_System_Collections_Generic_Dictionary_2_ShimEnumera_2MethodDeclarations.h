#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t1567;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t1555;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9778_gshared (ShimEnumerator_t1567 * __this, Dictionary_2_t1555 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9778(__this, ___host, method) (( void (*) (ShimEnumerator_t1567 *, Dictionary_2_t1555 *, const MethodInfo*))ShimEnumerator__ctor_m9778_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9779_gshared (ShimEnumerator_t1567 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9779(__this, method) (( bool (*) (ShimEnumerator_t1567 *, const MethodInfo*))ShimEnumerator_MoveNext_m9779_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t564  ShimEnumerator_get_Entry_m9780_gshared (ShimEnumerator_t1567 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9780(__this, method) (( DictionaryEntry_t564  (*) (ShimEnumerator_t1567 *, const MethodInfo*))ShimEnumerator_get_Entry_m9780_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9781_gshared (ShimEnumerator_t1567 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9781(__this, method) (( Object_t * (*) (ShimEnumerator_t1567 *, const MethodInfo*))ShimEnumerator_get_Key_m9781_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9782_gshared (ShimEnumerator_t1567 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9782(__this, method) (( Object_t * (*) (ShimEnumerator_t1567 *, const MethodInfo*))ShimEnumerator_get_Value_m9782_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9783_gshared (ShimEnumerator_t1567 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9783(__this, method) (( Object_t * (*) (ShimEnumerator_t1567 *, const MethodInfo*))ShimEnumerator_get_Current_m9783_gshared)(__this, method)
