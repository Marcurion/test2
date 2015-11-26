#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1496;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t301;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t1499;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1503;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1494;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t1829;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t315;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1629;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t284;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1830;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t563;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m8793_gshared (Dictionary_2_t1496 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m8793(__this, method) (( void (*) (Dictionary_2_t1496 *, const MethodInfo*))Dictionary_2__ctor_m8793_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8794_gshared (Dictionary_2_t1496 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8794(__this, ___comparer, method) (( void (*) (Dictionary_2_t1496 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8794_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m8796_gshared (Dictionary_2_t1496 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m8796(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1496 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8796_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m8798_gshared (Dictionary_2_t1496 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m8798(__this, ___capacity, method) (( void (*) (Dictionary_2_t1496 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m8798_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8800_gshared (Dictionary_2_t1496 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8800(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1496 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8800_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m8802_gshared (Dictionary_2_t1496 * __this, SerializationInfo_t315 * ___info, StreamingContext_t316  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m8802(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1496 *, SerializationInfo_t315 *, StreamingContext_t316 , const MethodInfo*))Dictionary_2__ctor_m8802_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8804_gshared (Dictionary_2_t1496 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8804(__this, method) (( Object_t* (*) (Dictionary_2_t1496 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8804_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8806_gshared (Dictionary_2_t1496 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8806(__this, method) (( Object_t* (*) (Dictionary_2_t1496 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8806_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m8808_gshared (Dictionary_2_t1496 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m8808(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1496 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m8808_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m8810_gshared (Dictionary_2_t1496 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m8810(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1496 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m8810_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m8812_gshared (Dictionary_2_t1496 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m8812(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1496 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m8812_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m8814_gshared (Dictionary_2_t1496 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m8814(__this, ___key, method) (( bool (*) (Dictionary_2_t1496 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m8814_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m8816_gshared (Dictionary_2_t1496 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m8816(__this, ___key, method) (( void (*) (Dictionary_2_t1496 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m8816_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8818_gshared (Dictionary_2_t1496 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8818(__this, method) (( Object_t * (*) (Dictionary_2_t1496 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8818_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8820_gshared (Dictionary_2_t1496 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8820(__this, method) (( bool (*) (Dictionary_2_t1496 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8820_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8822_gshared (Dictionary_2_t1496 * __this, KeyValuePair_2_t1497  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8822(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1496 *, KeyValuePair_2_t1497 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8822_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8824_gshared (Dictionary_2_t1496 * __this, KeyValuePair_2_t1497  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8824(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1496 *, KeyValuePair_2_t1497 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8824_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8826_gshared (Dictionary_2_t1496 * __this, KeyValuePair_2U5BU5D_t1629* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8826(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1496 *, KeyValuePair_2U5BU5D_t1629*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8826_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8828_gshared (Dictionary_2_t1496 * __this, KeyValuePair_2_t1497  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8828(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1496 *, KeyValuePair_2_t1497 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8828_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m8830_gshared (Dictionary_2_t1496 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m8830(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1496 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m8830_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8832_gshared (Dictionary_2_t1496 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8832(__this, method) (( Object_t * (*) (Dictionary_2_t1496 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8832_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8834_gshared (Dictionary_2_t1496 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8834(__this, method) (( Object_t* (*) (Dictionary_2_t1496 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8834_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8836_gshared (Dictionary_2_t1496 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8836(__this, method) (( Object_t * (*) (Dictionary_2_t1496 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8836_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m8838_gshared (Dictionary_2_t1496 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m8838(__this, method) (( int32_t (*) (Dictionary_2_t1496 *, const MethodInfo*))Dictionary_2_get_Count_m8838_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m8840_gshared (Dictionary_2_t1496 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m8840(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1496 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m8840_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m8842_gshared (Dictionary_2_t1496 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m8842(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1496 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m8842_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m8844_gshared (Dictionary_2_t1496 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m8844(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1496 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m8844_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m8846_gshared (Dictionary_2_t1496 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m8846(__this, ___size, method) (( void (*) (Dictionary_2_t1496 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m8846_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m8848_gshared (Dictionary_2_t1496 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m8848(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1496 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m8848_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1497  Dictionary_2_make_pair_m8850_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m8850(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1497  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m8850_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m8852_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m8852(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m8852_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m8854_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m8854(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m8854_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m8856_gshared (Dictionary_2_t1496 * __this, KeyValuePair_2U5BU5D_t1629* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m8856(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1496 *, KeyValuePair_2U5BU5D_t1629*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m8856_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m8858_gshared (Dictionary_2_t1496 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m8858(__this, method) (( void (*) (Dictionary_2_t1496 *, const MethodInfo*))Dictionary_2_Resize_m8858_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m8860_gshared (Dictionary_2_t1496 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m8860(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1496 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m8860_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m8862_gshared (Dictionary_2_t1496 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m8862(__this, method) (( void (*) (Dictionary_2_t1496 *, const MethodInfo*))Dictionary_2_Clear_m8862_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m8864_gshared (Dictionary_2_t1496 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m8864(__this, ___key, method) (( bool (*) (Dictionary_2_t1496 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m8864_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m8866_gshared (Dictionary_2_t1496 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m8866(__this, ___value, method) (( bool (*) (Dictionary_2_t1496 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m8866_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m8868_gshared (Dictionary_2_t1496 * __this, SerializationInfo_t315 * ___info, StreamingContext_t316  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m8868(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1496 *, SerializationInfo_t315 *, StreamingContext_t316 , const MethodInfo*))Dictionary_2_GetObjectData_m8868_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m8870_gshared (Dictionary_2_t1496 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m8870(__this, ___sender, method) (( void (*) (Dictionary_2_t1496 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m8870_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m8872_gshared (Dictionary_2_t1496 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m8872(__this, ___key, method) (( bool (*) (Dictionary_2_t1496 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m8872_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m8874_gshared (Dictionary_2_t1496 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m8874(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1496 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m8874_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t1499 * Dictionary_2_get_Keys_m8876_gshared (Dictionary_2_t1496 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m8876(__this, method) (( KeyCollection_t1499 * (*) (Dictionary_2_t1496 *, const MethodInfo*))Dictionary_2_get_Keys_m8876_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1503 * Dictionary_2_get_Values_m8877_gshared (Dictionary_2_t1496 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m8877(__this, method) (( ValueCollection_t1503 * (*) (Dictionary_2_t1496 *, const MethodInfo*))Dictionary_2_get_Values_m8877_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m8879_gshared (Dictionary_2_t1496 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m8879(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1496 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m8879_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m8881_gshared (Dictionary_2_t1496 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m8881(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1496 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m8881_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m8883_gshared (Dictionary_2_t1496 * __this, KeyValuePair_2_t1497  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m8883(__this, ___pair, method) (( bool (*) (Dictionary_2_t1496 *, KeyValuePair_2_t1497 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m8883_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1501  Dictionary_2_GetEnumerator_m8885_gshared (Dictionary_2_t1496 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m8885(__this, method) (( Enumerator_t1501  (*) (Dictionary_2_t1496 *, const MethodInfo*))Dictionary_2_GetEnumerator_m8885_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t564  Dictionary_2_U3CCopyToU3Em__0_m8887_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m8887(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t564  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m8887_gshared)(__this /* static, unused */, ___key, ___value, method)
