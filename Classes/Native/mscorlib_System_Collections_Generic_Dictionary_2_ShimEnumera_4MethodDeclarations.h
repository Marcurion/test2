#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t1640;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t1631;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10794_gshared (ShimEnumerator_t1640 * __this, Dictionary_2_t1631 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10794(__this, ___host, method) (( void (*) (ShimEnumerator_t1640 *, Dictionary_2_t1631 *, const MethodInfo*))ShimEnumerator__ctor_m10794_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10795_gshared (ShimEnumerator_t1640 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10795(__this, method) (( bool (*) (ShimEnumerator_t1640 *, const MethodInfo*))ShimEnumerator_MoveNext_m10795_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t564  ShimEnumerator_get_Entry_m10796_gshared (ShimEnumerator_t1640 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10796(__this, method) (( DictionaryEntry_t564  (*) (ShimEnumerator_t1640 *, const MethodInfo*))ShimEnumerator_get_Entry_m10796_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10797_gshared (ShimEnumerator_t1640 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10797(__this, method) (( Object_t * (*) (ShimEnumerator_t1640 *, const MethodInfo*))ShimEnumerator_get_Key_m10797_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10798_gshared (ShimEnumerator_t1640 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10798(__this, method) (( Object_t * (*) (ShimEnumerator_t1640 *, const MethodInfo*))ShimEnumerator_get_Value_m10798_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10799_gshared (ShimEnumerator_t1640 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10799(__this, method) (( Object_t * (*) (ShimEnumerator_t1640 *, const MethodInfo*))ShimEnumerator_get_Current_m10799_gshared)(__this, method)
