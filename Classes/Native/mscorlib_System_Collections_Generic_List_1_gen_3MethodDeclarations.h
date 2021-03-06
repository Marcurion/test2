﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t106;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t108;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t1846;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t284;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t752;
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m1243(__this, method) (( void (*) (List_1_t106 *, const MethodInfo*))List_1__ctor_m1282_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Int32)
#define List_1__ctor_m9381(__this, ___capacity, method) (( void (*) (List_1_t106 *, int32_t, const MethodInfo*))List_1__ctor_m8390_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.cctor()
#define List_1__cctor_m9382(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8392_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9383(__this, method) (( Object_t* (*) (List_1_t106 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8394_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9384(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t106 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8396_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9385(__this, method) (( Object_t * (*) (List_1_t106 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8398_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9386(__this, ___item, method) (( int32_t (*) (List_1_t106 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8400_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9387(__this, ___item, method) (( bool (*) (List_1_t106 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8402_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9388(__this, ___item, method) (( int32_t (*) (List_1_t106 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8404_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9389(__this, ___index, ___item, method) (( void (*) (List_1_t106 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8406_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9390(__this, ___item, method) (( void (*) (List_1_t106 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8408_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9391(__this, method) (( bool (*) (List_1_t106 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8410_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9392(__this, method) (( Object_t * (*) (List_1_t106 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8412_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9393(__this, ___index, method) (( Object_t * (*) (List_1_t106 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8414_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9394(__this, ___index, ___value, method) (( void (*) (List_1_t106 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8416_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
#define List_1_Add_m9395(__this, ___item, method) (( void (*) (List_1_t106 *, ByteU5BU5D_t108*, const MethodInfo*))List_1_Add_m8418_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9396(__this, ___newCount, method) (( void (*) (List_1_t106 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8420_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
#define List_1_Clear_m9397(__this, method) (( void (*) (List_1_t106 *, const MethodInfo*))List_1_Clear_m8422_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Contains(T)
#define List_1_Contains_m9398(__this, ___item, method) (( bool (*) (List_1_t106 *, ByteU5BU5D_t108*, const MethodInfo*))List_1_Contains_m8424_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9399(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t106 *, ByteU5BU5DU5BU5D_t752*, int32_t, const MethodInfo*))List_1_CopyTo_m8426_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
#define List_1_GetEnumerator_m9400(__this, method) (( Enumerator_t1534  (*) (List_1_t106 *, const MethodInfo*))List_1_GetEnumerator_m8427_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::IndexOf(T)
#define List_1_IndexOf_m9401(__this, ___item, method) (( int32_t (*) (List_1_t106 *, ByteU5BU5D_t108*, const MethodInfo*))List_1_IndexOf_m8429_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9402(__this, ___start, ___delta, method) (( void (*) (List_1_t106 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8431_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9403(__this, ___index, method) (( void (*) (List_1_t106 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8433_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Insert(System.Int32,T)
#define List_1_Insert_m9404(__this, ___index, ___item, method) (( void (*) (List_1_t106 *, int32_t, ByteU5BU5D_t108*, const MethodInfo*))List_1_Insert_m8435_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Remove(T)
#define List_1_Remove_m9405(__this, ___item, method) (( bool (*) (List_1_t106 *, ByteU5BU5D_t108*, const MethodInfo*))List_1_Remove_m8437_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9406(__this, ___index, method) (( void (*) (List_1_t106 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8439_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
#define List_1_ToArray_m9407(__this, method) (( ByteU5BU5DU5BU5D_t752* (*) (List_1_t106 *, const MethodInfo*))List_1_ToArray_m8441_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Capacity()
#define List_1_get_Capacity_m9408(__this, method) (( int32_t (*) (List_1_t106 *, const MethodInfo*))List_1_get_Capacity_m8443_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9409(__this, ___value, method) (( void (*) (List_1_t106 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8445_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
#define List_1_get_Count_m9410(__this, method) (( int32_t (*) (List_1_t106 *, const MethodInfo*))List_1_get_Count_m8447_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
#define List_1_get_Item_m9411(__this, ___index, method) (( ByteU5BU5D_t108* (*) (List_1_t106 *, int32_t, const MethodInfo*))List_1_get_Item_m8449_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
#define List_1_set_Item_m9412(__this, ___index, ___value, method) (( void (*) (List_1_t106 *, int32_t, ByteU5BU5D_t108*, const MethodInfo*))List_1_set_Item_m8451_gshared)(__this, ___index, ___value, method)
