#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1468;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1812;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t301;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1473;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1477;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1465;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t1817;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t315;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t1818;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t284;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1819;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t563;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m8500_gshared (Dictionary_2_t1468 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m8500(__this, method) (( void (*) (Dictionary_2_t1468 *, const MethodInfo*))Dictionary_2__ctor_m8500_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8502_gshared (Dictionary_2_t1468 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8502(__this, ___comparer, method) (( void (*) (Dictionary_2_t1468 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8502_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m8504_gshared (Dictionary_2_t1468 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m8504(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1468 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8504_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m8506_gshared (Dictionary_2_t1468 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m8506(__this, ___capacity, method) (( void (*) (Dictionary_2_t1468 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m8506_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8508_gshared (Dictionary_2_t1468 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8508(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1468 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8508_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m8510_gshared (Dictionary_2_t1468 * __this, SerializationInfo_t315 * ___info, StreamingContext_t316  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m8510(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1468 *, SerializationInfo_t315 *, StreamingContext_t316 , const MethodInfo*))Dictionary_2__ctor_m8510_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8512_gshared (Dictionary_2_t1468 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8512(__this, method) (( Object_t* (*) (Dictionary_2_t1468 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8512_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8514_gshared (Dictionary_2_t1468 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8514(__this, method) (( Object_t* (*) (Dictionary_2_t1468 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8514_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m8516_gshared (Dictionary_2_t1468 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m8516(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1468 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m8516_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m8518_gshared (Dictionary_2_t1468 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m8518(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1468 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m8518_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m8520_gshared (Dictionary_2_t1468 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m8520(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1468 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m8520_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m8522_gshared (Dictionary_2_t1468 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m8522(__this, ___key, method) (( bool (*) (Dictionary_2_t1468 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m8522_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m8524_gshared (Dictionary_2_t1468 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m8524(__this, ___key, method) (( void (*) (Dictionary_2_t1468 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m8524_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8526_gshared (Dictionary_2_t1468 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8526(__this, method) (( Object_t * (*) (Dictionary_2_t1468 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8526_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8528_gshared (Dictionary_2_t1468 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8528(__this, method) (( bool (*) (Dictionary_2_t1468 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8528_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8530_gshared (Dictionary_2_t1468 * __this, KeyValuePair_2_t1469  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8530(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1468 *, KeyValuePair_2_t1469 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8530_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8532_gshared (Dictionary_2_t1468 * __this, KeyValuePair_2_t1469  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8532(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1468 *, KeyValuePair_2_t1469 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8532_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8534_gshared (Dictionary_2_t1468 * __this, KeyValuePair_2U5BU5D_t1818* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8534(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1468 *, KeyValuePair_2U5BU5D_t1818*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8534_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8536_gshared (Dictionary_2_t1468 * __this, KeyValuePair_2_t1469  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8536(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1468 *, KeyValuePair_2_t1469 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8536_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m8538_gshared (Dictionary_2_t1468 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m8538(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1468 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m8538_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8540_gshared (Dictionary_2_t1468 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8540(__this, method) (( Object_t * (*) (Dictionary_2_t1468 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8540_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8542_gshared (Dictionary_2_t1468 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8542(__this, method) (( Object_t* (*) (Dictionary_2_t1468 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8542_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8544_gshared (Dictionary_2_t1468 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8544(__this, method) (( Object_t * (*) (Dictionary_2_t1468 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8544_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m8546_gshared (Dictionary_2_t1468 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m8546(__this, method) (( int32_t (*) (Dictionary_2_t1468 *, const MethodInfo*))Dictionary_2_get_Count_m8546_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m8548_gshared (Dictionary_2_t1468 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m8548(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1468 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m8548_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m8550_gshared (Dictionary_2_t1468 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m8550(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1468 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m8550_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m8552_gshared (Dictionary_2_t1468 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m8552(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1468 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m8552_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m8554_gshared (Dictionary_2_t1468 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m8554(__this, ___size, method) (( void (*) (Dictionary_2_t1468 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m8554_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m8556_gshared (Dictionary_2_t1468 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m8556(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1468 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m8556_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1469  Dictionary_2_make_pair_m8558_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m8558(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1469  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m8558_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m8560_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m8560(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m8560_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m8562_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m8562(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m8562_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m8564_gshared (Dictionary_2_t1468 * __this, KeyValuePair_2U5BU5D_t1818* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m8564(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1468 *, KeyValuePair_2U5BU5D_t1818*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m8564_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m8566_gshared (Dictionary_2_t1468 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m8566(__this, method) (( void (*) (Dictionary_2_t1468 *, const MethodInfo*))Dictionary_2_Resize_m8566_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m8568_gshared (Dictionary_2_t1468 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m8568(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1468 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m8568_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m8570_gshared (Dictionary_2_t1468 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m8570(__this, method) (( void (*) (Dictionary_2_t1468 *, const MethodInfo*))Dictionary_2_Clear_m8570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m8572_gshared (Dictionary_2_t1468 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m8572(__this, ___key, method) (( bool (*) (Dictionary_2_t1468 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m8572_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m8574_gshared (Dictionary_2_t1468 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m8574(__this, ___value, method) (( bool (*) (Dictionary_2_t1468 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m8574_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m8576_gshared (Dictionary_2_t1468 * __this, SerializationInfo_t315 * ___info, StreamingContext_t316  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m8576(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1468 *, SerializationInfo_t315 *, StreamingContext_t316 , const MethodInfo*))Dictionary_2_GetObjectData_m8576_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m8578_gshared (Dictionary_2_t1468 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m8578(__this, ___sender, method) (( void (*) (Dictionary_2_t1468 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m8578_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m8580_gshared (Dictionary_2_t1468 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m8580(__this, ___key, method) (( bool (*) (Dictionary_2_t1468 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m8580_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m8582_gshared (Dictionary_2_t1468 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m8582(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1468 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m8582_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t1473 * Dictionary_2_get_Keys_m8584_gshared (Dictionary_2_t1468 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m8584(__this, method) (( KeyCollection_t1473 * (*) (Dictionary_2_t1468 *, const MethodInfo*))Dictionary_2_get_Keys_m8584_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1477 * Dictionary_2_get_Values_m8586_gshared (Dictionary_2_t1468 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m8586(__this, method) (( ValueCollection_t1477 * (*) (Dictionary_2_t1468 *, const MethodInfo*))Dictionary_2_get_Values_m8586_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m8588_gshared (Dictionary_2_t1468 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m8588(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1468 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m8588_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m8590_gshared (Dictionary_2_t1468 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m8590(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1468 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m8590_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m8592_gshared (Dictionary_2_t1468 * __this, KeyValuePair_2_t1469  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m8592(__this, ___pair, method) (( bool (*) (Dictionary_2_t1468 *, KeyValuePair_2_t1469 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m8592_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1475  Dictionary_2_GetEnumerator_m8594_gshared (Dictionary_2_t1468 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m8594(__this, method) (( Enumerator_t1475  (*) (Dictionary_2_t1468 *, const MethodInfo*))Dictionary_2_GetEnumerator_m8594_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t564  Dictionary_2_U3CCopyToU3Em__0_m8596_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m8596(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t564  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m8596_gshared)(__this /* static, unused */, ___key, ___value, method)
