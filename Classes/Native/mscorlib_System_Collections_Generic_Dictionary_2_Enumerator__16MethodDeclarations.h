#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
struct Enumerator_t1701;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1695;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11419_gshared (Enumerator_t1701 * __this, Dictionary_2_t1695 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11419(__this, ___dictionary, method) (( void (*) (Enumerator_t1701 *, Dictionary_2_t1695 *, const MethodInfo*))Enumerator__ctor_m11419_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11420_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11420(__this, method) (( Object_t * (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11420_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t564  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11421_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11421(__this, method) (( DictionaryEntry_t564  (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11421_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11422_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11422(__this, method) (( Object_t * (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11422_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11423_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11423(__this, method) (( Object_t * (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11423_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11424_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11424(__this, method) (( bool (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_MoveNext_m11424_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t1696  Enumerator_get_Current_m11425_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11425(__this, method) (( KeyValuePair_2_t1696  (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_get_Current_m11425_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11426_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11426(__this, method) (( Object_t * (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_get_CurrentKey_m11426_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m11427_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11427(__this, method) (( bool (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_get_CurrentValue_m11427_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m11428_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11428(__this, method) (( void (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_VerifyState_m11428_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11429_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11429(__this, method) (( void (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_VerifyCurrent_m11429_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m11430_gshared (Enumerator_t1701 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11430(__this, method) (( void (*) (Enumerator_t1701 *, const MethodInfo*))Enumerator_Dispose_m11430_gshared)(__this, method)
