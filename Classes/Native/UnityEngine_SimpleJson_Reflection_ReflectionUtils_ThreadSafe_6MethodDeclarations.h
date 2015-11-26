#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t1609;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t301;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t1607;
// System.Collections.IEnumerator
struct IEnumerator_t284;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1629;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1830;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m10299_gshared (ThreadSafeDictionary_2_t1609 * __this, ThreadSafeDictionaryValueFactory_2_t1607 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m10299(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t1609 *, ThreadSafeDictionaryValueFactory_2_t1607 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m10299_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10301_gshared (ThreadSafeDictionary_2_t1609 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10301(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1609 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10301_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m10303_gshared (ThreadSafeDictionary_2_t1609 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m10303(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1609 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m10303_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m10305_gshared (ThreadSafeDictionary_2_t1609 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m10305(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1609 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m10305_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m10307_gshared (ThreadSafeDictionary_2_t1609 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10307(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t1609 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m10307_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m10309_gshared (ThreadSafeDictionary_2_t1609 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m10309(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t1609 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m10309_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m10311_gshared (ThreadSafeDictionary_2_t1609 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m10311(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t1609 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m10311_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m10313_gshared (ThreadSafeDictionary_2_t1609 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m10313(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t1609 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m10313_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m10315_gshared (ThreadSafeDictionary_2_t1609 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m10315(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1609 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m10315_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m10317_gshared (ThreadSafeDictionary_2_t1609 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m10317(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t1609 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m10317_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m10319_gshared (ThreadSafeDictionary_2_t1609 * __this, KeyValuePair_2_t1497  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10319(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t1609 *, KeyValuePair_2_t1497 , const MethodInfo*))ThreadSafeDictionary_2_Add_m10319_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m10321_gshared (ThreadSafeDictionary_2_t1609 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m10321(__this, method) (( void (*) (ThreadSafeDictionary_2_t1609 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m10321_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m10323_gshared (ThreadSafeDictionary_2_t1609 * __this, KeyValuePair_2_t1497  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m10323(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t1609 *, KeyValuePair_2_t1497 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m10323_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m10325_gshared (ThreadSafeDictionary_2_t1609 * __this, KeyValuePair_2U5BU5D_t1629* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m10325(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t1609 *, KeyValuePair_2U5BU5D_t1629*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m10325_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m10327_gshared (ThreadSafeDictionary_2_t1609 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m10327(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t1609 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m10327_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m10329_gshared (ThreadSafeDictionary_2_t1609 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m10329(__this, method) (( bool (*) (ThreadSafeDictionary_2_t1609 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m10329_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m10331_gshared (ThreadSafeDictionary_2_t1609 * __this, KeyValuePair_2_t1497  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m10331(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t1609 *, KeyValuePair_2_t1497 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m10331_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m10333_gshared (ThreadSafeDictionary_2_t1609 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m10333(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t1609 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m10333_gshared)(__this, method)
