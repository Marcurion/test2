#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Security.Policy.StrongName>
struct List_1_t1434;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t1230;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t1938;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t284;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t1790;
// System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"

// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m11999(__this, method) (( void (*) (List_1_t1434 *, const MethodInfo*))List_1__ctor_m1282_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Int32)
#define List_1__ctor_m8313(__this, ___capacity, method) (( void (*) (List_1_t1434 *, int32_t, const MethodInfo*))List_1__ctor_m8390_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.cctor()
#define List_1__cctor_m12000(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8392_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12001(__this, method) (( Object_t* (*) (List_1_t1434 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8394_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m12002(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1434 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8396_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12003(__this, method) (( Object_t * (*) (List_1_t1434 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8398_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m12004(__this, ___item, method) (( int32_t (*) (List_1_t1434 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8400_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m12005(__this, ___item, method) (( bool (*) (List_1_t1434 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8402_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m12006(__this, ___item, method) (( int32_t (*) (List_1_t1434 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8404_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m12007(__this, ___index, ___item, method) (( void (*) (List_1_t1434 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8406_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m12008(__this, ___item, method) (( void (*) (List_1_t1434 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8408_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12009(__this, method) (( bool (*) (List_1_t1434 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8410_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m12010(__this, method) (( Object_t * (*) (List_1_t1434 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8412_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m12011(__this, ___index, method) (( Object_t * (*) (List_1_t1434 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8414_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m12012(__this, ___index, ___value, method) (( void (*) (List_1_t1434 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8416_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Add(T)
#define List_1_Add_m12013(__this, ___item, method) (( void (*) (List_1_t1434 *, StrongName_t1230 *, const MethodInfo*))List_1_Add_m8418_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m12014(__this, ___newCount, method) (( void (*) (List_1_t1434 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8420_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Clear()
#define List_1_Clear_m12015(__this, method) (( void (*) (List_1_t1434 *, const MethodInfo*))List_1_Clear_m8422_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Contains(T)
#define List_1_Contains_m12016(__this, ___item, method) (( bool (*) (List_1_t1434 *, StrongName_t1230 *, const MethodInfo*))List_1_Contains_m8424_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m12017(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1434 *, StrongNameU5BU5D_t1790*, int32_t, const MethodInfo*))List_1_CopyTo_m8426_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetEnumerator()
#define List_1_GetEnumerator_m12018(__this, method) (( Enumerator_t1791  (*) (List_1_t1434 *, const MethodInfo*))List_1_GetEnumerator_m8427_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::IndexOf(T)
#define List_1_IndexOf_m12019(__this, ___item, method) (( int32_t (*) (List_1_t1434 *, StrongName_t1230 *, const MethodInfo*))List_1_IndexOf_m8429_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m12020(__this, ___start, ___delta, method) (( void (*) (List_1_t1434 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8431_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m12021(__this, ___index, method) (( void (*) (List_1_t1434 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8433_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define List_1_Insert_m12022(__this, ___index, ___item, method) (( void (*) (List_1_t1434 *, int32_t, StrongName_t1230 *, const MethodInfo*))List_1_Insert_m8435_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Remove(T)
#define List_1_Remove_m12023(__this, ___item, method) (( bool (*) (List_1_t1434 *, StrongName_t1230 *, const MethodInfo*))List_1_Remove_m8437_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m12024(__this, ___index, method) (( void (*) (List_1_t1434 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8439_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Security.Policy.StrongName>::ToArray()
#define List_1_ToArray_m12025(__this, method) (( StrongNameU5BU5D_t1790* (*) (List_1_t1434 *, const MethodInfo*))List_1_ToArray_m8441_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Capacity()
#define List_1_get_Capacity_m12026(__this, method) (( int32_t (*) (List_1_t1434 *, const MethodInfo*))List_1_get_Capacity_m8443_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m12027(__this, ___value, method) (( void (*) (List_1_t1434 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8445_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Count()
#define List_1_get_Count_m12028(__this, method) (( int32_t (*) (List_1_t1434 *, const MethodInfo*))List_1_get_Count_m8447_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define List_1_get_Item_m12029(__this, ___index, method) (( StrongName_t1230 * (*) (List_1_t1434 *, int32_t, const MethodInfo*))List_1_get_Item_m8449_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define List_1_set_Item_m12030(__this, ___index, ___value, method) (( void (*) (List_1_t1434 *, int32_t, StrongName_t1230 *, const MethodInfo*))List_1_set_Item_m8451_gshared)(__this, ___index, ___value, method)
