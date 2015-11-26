#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t1555;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t301;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t1850;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t1559;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t1563;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1494;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t1854;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t315;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t1855;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t284;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t1856;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t563;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m9601_gshared (Dictionary_2_t1555 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9601(__this, method) (( void (*) (Dictionary_2_t1555 *, const MethodInfo*))Dictionary_2__ctor_m9601_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9603_gshared (Dictionary_2_t1555 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9603(__this, ___comparer, method) (( void (*) (Dictionary_2_t1555 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9603_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9605_gshared (Dictionary_2_t1555 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9605(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1555 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9605_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9607_gshared (Dictionary_2_t1555 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9607(__this, ___capacity, method) (( void (*) (Dictionary_2_t1555 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9607_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9609_gshared (Dictionary_2_t1555 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9609(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1555 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9609_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9611_gshared (Dictionary_2_t1555 * __this, SerializationInfo_t315 * ___info, StreamingContext_t316  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9611(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1555 *, SerializationInfo_t315 *, StreamingContext_t316 , const MethodInfo*))Dictionary_2__ctor_m9611_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9613_gshared (Dictionary_2_t1555 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9613(__this, method) (( Object_t* (*) (Dictionary_2_t1555 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9613_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9615_gshared (Dictionary_2_t1555 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9615(__this, method) (( Object_t* (*) (Dictionary_2_t1555 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9615_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9617_gshared (Dictionary_2_t1555 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9617(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1555 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9617_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9619_gshared (Dictionary_2_t1555 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9619(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1555 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9619_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9621_gshared (Dictionary_2_t1555 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9621(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1555 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9621_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9623_gshared (Dictionary_2_t1555 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9623(__this, ___key, method) (( bool (*) (Dictionary_2_t1555 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9623_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9625_gshared (Dictionary_2_t1555 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9625(__this, ___key, method) (( void (*) (Dictionary_2_t1555 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9625_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9627_gshared (Dictionary_2_t1555 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9627(__this, method) (( Object_t * (*) (Dictionary_2_t1555 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9627_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9629_gshared (Dictionary_2_t1555 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9629(__this, method) (( bool (*) (Dictionary_2_t1555 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9629_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9631_gshared (Dictionary_2_t1555 * __this, KeyValuePair_2_t1556  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9631(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1555 *, KeyValuePair_2_t1556 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9631_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9633_gshared (Dictionary_2_t1555 * __this, KeyValuePair_2_t1556  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9633(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1555 *, KeyValuePair_2_t1556 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9633_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9635_gshared (Dictionary_2_t1555 * __this, KeyValuePair_2U5BU5D_t1855* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9635(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1555 *, KeyValuePair_2U5BU5D_t1855*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9635_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9637_gshared (Dictionary_2_t1555 * __this, KeyValuePair_2_t1556  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9637(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1555 *, KeyValuePair_2_t1556 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9637_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9639_gshared (Dictionary_2_t1555 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9639(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1555 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9639_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9641_gshared (Dictionary_2_t1555 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9641(__this, method) (( Object_t * (*) (Dictionary_2_t1555 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9641_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9643_gshared (Dictionary_2_t1555 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9643(__this, method) (( Object_t* (*) (Dictionary_2_t1555 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9643_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9645_gshared (Dictionary_2_t1555 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9645(__this, method) (( Object_t * (*) (Dictionary_2_t1555 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9645_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9647_gshared (Dictionary_2_t1555 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9647(__this, method) (( int32_t (*) (Dictionary_2_t1555 *, const MethodInfo*))Dictionary_2_get_Count_m9647_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m9649_gshared (Dictionary_2_t1555 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9649(__this, ___key, method) (( int64_t (*) (Dictionary_2_t1555 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9649_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9651_gshared (Dictionary_2_t1555 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9651(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1555 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m9651_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9653_gshared (Dictionary_2_t1555 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9653(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1555 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9653_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9655_gshared (Dictionary_2_t1555 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9655(__this, ___size, method) (( void (*) (Dictionary_2_t1555 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9655_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9657_gshared (Dictionary_2_t1555 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9657(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1555 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9657_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1556  Dictionary_2_make_pair_m9659_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9659(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1556  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m9659_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m9661_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9661(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m9661_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m9663_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9663(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m9663_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9665_gshared (Dictionary_2_t1555 * __this, KeyValuePair_2U5BU5D_t1855* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9665(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1555 *, KeyValuePair_2U5BU5D_t1855*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9665_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m9667_gshared (Dictionary_2_t1555 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9667(__this, method) (( void (*) (Dictionary_2_t1555 *, const MethodInfo*))Dictionary_2_Resize_m9667_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9669_gshared (Dictionary_2_t1555 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9669(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1555 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m9669_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m9671_gshared (Dictionary_2_t1555 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9671(__this, method) (( void (*) (Dictionary_2_t1555 *, const MethodInfo*))Dictionary_2_Clear_m9671_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9673_gshared (Dictionary_2_t1555 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9673(__this, ___key, method) (( bool (*) (Dictionary_2_t1555 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9673_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9675_gshared (Dictionary_2_t1555 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9675(__this, ___value, method) (( bool (*) (Dictionary_2_t1555 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m9675_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9677_gshared (Dictionary_2_t1555 * __this, SerializationInfo_t315 * ___info, StreamingContext_t316  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9677(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1555 *, SerializationInfo_t315 *, StreamingContext_t316 , const MethodInfo*))Dictionary_2_GetObjectData_m9677_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9679_gshared (Dictionary_2_t1555 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9679(__this, ___sender, method) (( void (*) (Dictionary_2_t1555 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9679_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9681_gshared (Dictionary_2_t1555 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9681(__this, ___key, method) (( bool (*) (Dictionary_2_t1555 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9681_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9683_gshared (Dictionary_2_t1555 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9683(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1555 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m9683_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t1559 * Dictionary_2_get_Keys_m9685_gshared (Dictionary_2_t1555 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9685(__this, method) (( KeyCollection_t1559 * (*) (Dictionary_2_t1555 *, const MethodInfo*))Dictionary_2_get_Keys_m9685_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t1563 * Dictionary_2_get_Values_m9687_gshared (Dictionary_2_t1555 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9687(__this, method) (( ValueCollection_t1563 * (*) (Dictionary_2_t1555 *, const MethodInfo*))Dictionary_2_get_Values_m9687_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9689_gshared (Dictionary_2_t1555 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9689(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1555 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9689_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m9691_gshared (Dictionary_2_t1555 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9691(__this, ___value, method) (( int64_t (*) (Dictionary_2_t1555 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9691_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9693_gshared (Dictionary_2_t1555 * __this, KeyValuePair_2_t1556  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9693(__this, ___pair, method) (( bool (*) (Dictionary_2_t1555 *, KeyValuePair_2_t1556 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9693_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t1561  Dictionary_2_GetEnumerator_m9695_gshared (Dictionary_2_t1555 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9695(__this, method) (( Enumerator_t1561  (*) (Dictionary_2_t1555 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9695_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t564  Dictionary_2_U3CCopyToU3Em__0_m9697_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9697(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t564  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9697_gshared)(__this /* static, unused */, ___key, ___value, method)
