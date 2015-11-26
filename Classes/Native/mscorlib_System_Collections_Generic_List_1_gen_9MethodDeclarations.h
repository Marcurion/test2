#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t379;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t1910;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t284;
// System.Type[]
struct TypeU5BU5D_t201;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m1332(__this, method) (( void (*) (List_1_t379 *, const MethodInfo*))List_1__ctor_m1282_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m10916(__this, ___capacity, method) (( void (*) (List_1_t379 *, int32_t, const MethodInfo*))List_1__ctor_m8390_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m10917(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8392_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10918(__this, method) (( Object_t* (*) (List_1_t379 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8394_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m10919(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t379 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8396_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10920(__this, method) (( Object_t * (*) (List_1_t379 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8398_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m10921(__this, ___item, method) (( int32_t (*) (List_1_t379 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8400_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m10922(__this, ___item, method) (( bool (*) (List_1_t379 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8402_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m10923(__this, ___item, method) (( int32_t (*) (List_1_t379 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8404_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m10924(__this, ___index, ___item, method) (( void (*) (List_1_t379 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8406_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m10925(__this, ___item, method) (( void (*) (List_1_t379 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8408_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10926(__this, method) (( bool (*) (List_1_t379 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8410_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m10927(__this, method) (( Object_t * (*) (List_1_t379 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8412_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m10928(__this, ___index, method) (( Object_t * (*) (List_1_t379 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8414_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m10929(__this, ___index, ___value, method) (( void (*) (List_1_t379 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8416_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m10930(__this, ___item, method) (( void (*) (List_1_t379 *, Type_t *, const MethodInfo*))List_1_Add_m8418_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m10931(__this, ___newCount, method) (( void (*) (List_1_t379 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8420_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m10932(__this, method) (( void (*) (List_1_t379 *, const MethodInfo*))List_1_Clear_m8422_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m10933(__this, ___item, method) (( bool (*) (List_1_t379 *, Type_t *, const MethodInfo*))List_1_Contains_m8424_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m10934(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t379 *, TypeU5BU5D_t201*, int32_t, const MethodInfo*))List_1_CopyTo_m8426_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m10935(__this, method) (( Enumerator_t1657  (*) (List_1_t379 *, const MethodInfo*))List_1_GetEnumerator_m8427_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m10936(__this, ___item, method) (( int32_t (*) (List_1_t379 *, Type_t *, const MethodInfo*))List_1_IndexOf_m8429_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m10937(__this, ___start, ___delta, method) (( void (*) (List_1_t379 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8431_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m10938(__this, ___index, method) (( void (*) (List_1_t379 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8433_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m10939(__this, ___index, ___item, method) (( void (*) (List_1_t379 *, int32_t, Type_t *, const MethodInfo*))List_1_Insert_m8435_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m10940(__this, ___item, method) (( bool (*) (List_1_t379 *, Type_t *, const MethodInfo*))List_1_Remove_m8437_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m10941(__this, ___index, method) (( void (*) (List_1_t379 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8439_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m1333(__this, method) (( TypeU5BU5D_t201* (*) (List_1_t379 *, const MethodInfo*))List_1_ToArray_m8441_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m10942(__this, method) (( int32_t (*) (List_1_t379 *, const MethodInfo*))List_1_get_Capacity_m8443_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m10943(__this, ___value, method) (( void (*) (List_1_t379 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8445_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m10944(__this, method) (( int32_t (*) (List_1_t379 *, const MethodInfo*))List_1_get_Count_m8447_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m10945(__this, ___index, method) (( Type_t * (*) (List_1_t379 *, int32_t, const MethodInfo*))List_1_get_Item_m8449_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m10946(__this, ___index, ___value, method) (( void (*) (List_1_t379 *, int32_t, Type_t *, const MethodInfo*))List_1_set_Item_m8451_gshared)(__this, ___index, ___value, method)
