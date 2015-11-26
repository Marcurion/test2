#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ShimEnumerator_t1677;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t1665;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11141_gshared (ShimEnumerator_t1677 * __this, Dictionary_2_t1665 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11141(__this, ___host, method) (( void (*) (ShimEnumerator_t1677 *, Dictionary_2_t1665 *, const MethodInfo*))ShimEnumerator__ctor_m11141_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11142_gshared (ShimEnumerator_t1677 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11142(__this, method) (( bool (*) (ShimEnumerator_t1677 *, const MethodInfo*))ShimEnumerator_MoveNext_m11142_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Entry()
extern "C" DictionaryEntry_t564  ShimEnumerator_get_Entry_m11143_gshared (ShimEnumerator_t1677 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11143(__this, method) (( DictionaryEntry_t564  (*) (ShimEnumerator_t1677 *, const MethodInfo*))ShimEnumerator_get_Entry_m11143_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11144_gshared (ShimEnumerator_t1677 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11144(__this, method) (( Object_t * (*) (ShimEnumerator_t1677 *, const MethodInfo*))ShimEnumerator_get_Key_m11144_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11145_gshared (ShimEnumerator_t1677 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11145(__this, method) (( Object_t * (*) (ShimEnumerator_t1677 *, const MethodInfo*))ShimEnumerator_get_Value_m11145_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11146_gshared (ShimEnumerator_t1677 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11146(__this, method) (( Object_t * (*) (ShimEnumerator_t1677 *, const MethodInfo*))ShimEnumerator_get_Current_m11146_gshared)(__this, method)
