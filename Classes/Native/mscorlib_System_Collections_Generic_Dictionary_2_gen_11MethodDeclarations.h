#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1512;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t301;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1812;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t1515;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1519;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1494;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t1837;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t315;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1838;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t284;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t1839;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t563;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m9018_gshared (Dictionary_2_t1512 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9018(__this, method) (( void (*) (Dictionary_2_t1512 *, const MethodInfo*))Dictionary_2__ctor_m9018_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9020_gshared (Dictionary_2_t1512 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9020(__this, ___comparer, method) (( void (*) (Dictionary_2_t1512 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9020_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9022_gshared (Dictionary_2_t1512 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9022(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1512 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9022_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9023_gshared (Dictionary_2_t1512 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9023(__this, ___capacity, method) (( void (*) (Dictionary_2_t1512 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9023_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9025_gshared (Dictionary_2_t1512 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9025(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1512 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9025_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9027_gshared (Dictionary_2_t1512 * __this, SerializationInfo_t315 * ___info, StreamingContext_t316  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9027(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1512 *, SerializationInfo_t315 *, StreamingContext_t316 , const MethodInfo*))Dictionary_2__ctor_m9027_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9029_gshared (Dictionary_2_t1512 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9029(__this, method) (( Object_t* (*) (Dictionary_2_t1512 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9029_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9031_gshared (Dictionary_2_t1512 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9031(__this, method) (( Object_t* (*) (Dictionary_2_t1512 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9031_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9033_gshared (Dictionary_2_t1512 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9033(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1512 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9033_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9035_gshared (Dictionary_2_t1512 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9035(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1512 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9035_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9037_gshared (Dictionary_2_t1512 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9037(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1512 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9037_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9039_gshared (Dictionary_2_t1512 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9039(__this, ___key, method) (( bool (*) (Dictionary_2_t1512 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9039_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9041_gshared (Dictionary_2_t1512 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9041(__this, ___key, method) (( void (*) (Dictionary_2_t1512 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9041_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9043_gshared (Dictionary_2_t1512 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9043(__this, method) (( Object_t * (*) (Dictionary_2_t1512 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9043_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9045_gshared (Dictionary_2_t1512 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9045(__this, method) (( bool (*) (Dictionary_2_t1512 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9045_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9047_gshared (Dictionary_2_t1512 * __this, KeyValuePair_2_t1513  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9047(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1512 *, KeyValuePair_2_t1513 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9047_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9049_gshared (Dictionary_2_t1512 * __this, KeyValuePair_2_t1513  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9049(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1512 *, KeyValuePair_2_t1513 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9049_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9051_gshared (Dictionary_2_t1512 * __this, KeyValuePair_2U5BU5D_t1838* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9051(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1512 *, KeyValuePair_2U5BU5D_t1838*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9051_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9053_gshared (Dictionary_2_t1512 * __this, KeyValuePair_2_t1513  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9053(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1512 *, KeyValuePair_2_t1513 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9053_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9055_gshared (Dictionary_2_t1512 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9055(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1512 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9055_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9057_gshared (Dictionary_2_t1512 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9057(__this, method) (( Object_t * (*) (Dictionary_2_t1512 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9057_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9059_gshared (Dictionary_2_t1512 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9059(__this, method) (( Object_t* (*) (Dictionary_2_t1512 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9059_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9061_gshared (Dictionary_2_t1512 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9061(__this, method) (( Object_t * (*) (Dictionary_2_t1512 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9061_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9063_gshared (Dictionary_2_t1512 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9063(__this, method) (( int32_t (*) (Dictionary_2_t1512 *, const MethodInfo*))Dictionary_2_get_Count_m9063_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m9065_gshared (Dictionary_2_t1512 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9065(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1512 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9065_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9067_gshared (Dictionary_2_t1512 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9067(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1512 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m9067_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9069_gshared (Dictionary_2_t1512 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9069(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1512 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9069_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9071_gshared (Dictionary_2_t1512 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9071(__this, ___size, method) (( void (*) (Dictionary_2_t1512 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9071_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9073_gshared (Dictionary_2_t1512 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9073(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1512 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9073_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1513  Dictionary_2_make_pair_m9075_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9075(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1513  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m9075_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m9077_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9077(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m9077_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m9079_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9079(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m9079_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9081_gshared (Dictionary_2_t1512 * __this, KeyValuePair_2U5BU5D_t1838* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9081(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1512 *, KeyValuePair_2U5BU5D_t1838*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9081_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m9083_gshared (Dictionary_2_t1512 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9083(__this, method) (( void (*) (Dictionary_2_t1512 *, const MethodInfo*))Dictionary_2_Resize_m9083_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9085_gshared (Dictionary_2_t1512 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9085(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1512 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m9085_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m9087_gshared (Dictionary_2_t1512 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9087(__this, method) (( void (*) (Dictionary_2_t1512 *, const MethodInfo*))Dictionary_2_Clear_m9087_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9089_gshared (Dictionary_2_t1512 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9089(__this, ___key, method) (( bool (*) (Dictionary_2_t1512 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9089_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9091_gshared (Dictionary_2_t1512 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9091(__this, ___value, method) (( bool (*) (Dictionary_2_t1512 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m9091_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9093_gshared (Dictionary_2_t1512 * __this, SerializationInfo_t315 * ___info, StreamingContext_t316  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9093(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1512 *, SerializationInfo_t315 *, StreamingContext_t316 , const MethodInfo*))Dictionary_2_GetObjectData_m9093_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9095_gshared (Dictionary_2_t1512 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9095(__this, ___sender, method) (( void (*) (Dictionary_2_t1512 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9095_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9097_gshared (Dictionary_2_t1512 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9097(__this, ___key, method) (( bool (*) (Dictionary_2_t1512 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9097_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9099_gshared (Dictionary_2_t1512 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9099(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1512 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m9099_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t1515 * Dictionary_2_get_Keys_m9101_gshared (Dictionary_2_t1512 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9101(__this, method) (( KeyCollection_t1515 * (*) (Dictionary_2_t1512 *, const MethodInfo*))Dictionary_2_get_Keys_m9101_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1519 * Dictionary_2_get_Values_m9103_gshared (Dictionary_2_t1512 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9103(__this, method) (( ValueCollection_t1519 * (*) (Dictionary_2_t1512 *, const MethodInfo*))Dictionary_2_get_Values_m9103_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9105_gshared (Dictionary_2_t1512 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9105(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1512 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9105_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m9107_gshared (Dictionary_2_t1512 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9107(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1512 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9107_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9109_gshared (Dictionary_2_t1512 * __this, KeyValuePair_2_t1513  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9109(__this, ___pair, method) (( bool (*) (Dictionary_2_t1512 *, KeyValuePair_2_t1513 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9109_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1517  Dictionary_2_GetEnumerator_m9111_gshared (Dictionary_2_t1512 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9111(__this, method) (( Enumerator_t1517  (*) (Dictionary_2_t1512 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9111_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t564  Dictionary_2_U3CCopyToU3Em__0_m9113_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9113(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t564  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9113_gshared)(__this /* static, unused */, ___key, ___value, method)
