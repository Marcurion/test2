#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t1729;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t499;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11670_gshared (ShimEnumerator_t1729 * __this, Dictionary_2_t499 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11670(__this, ___host, method) (( void (*) (ShimEnumerator_t1729 *, Dictionary_2_t499 *, const MethodInfo*))ShimEnumerator__ctor_m11670_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11671_gshared (ShimEnumerator_t1729 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11671(__this, method) (( bool (*) (ShimEnumerator_t1729 *, const MethodInfo*))ShimEnumerator_MoveNext_m11671_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t564  ShimEnumerator_get_Entry_m11672_gshared (ShimEnumerator_t1729 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11672(__this, method) (( DictionaryEntry_t564  (*) (ShimEnumerator_t1729 *, const MethodInfo*))ShimEnumerator_get_Entry_m11672_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11673_gshared (ShimEnumerator_t1729 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11673(__this, method) (( Object_t * (*) (ShimEnumerator_t1729 *, const MethodInfo*))ShimEnumerator_get_Key_m11673_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11674_gshared (ShimEnumerator_t1729 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11674(__this, method) (( Object_t * (*) (ShimEnumerator_t1729 *, const MethodInfo*))ShimEnumerator_get_Value_m11674_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11675_gshared (ShimEnumerator_t1729 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11675(__this, method) (( Object_t * (*) (ShimEnumerator_t1729 *, const MethodInfo*))ShimEnumerator_get_Current_m11675_gshared)(__this, method)
