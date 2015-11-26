#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t68;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t67;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t1824;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t284;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t1490;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m1210(__this, method) (( void (*) (List_1_t68 *, const MethodInfo*))List_1__ctor_m1282_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m8756(__this, ___capacity, method) (( void (*) (List_1_t68 *, int32_t, const MethodInfo*))List_1__ctor_m8390_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m8757(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8392_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8758(__this, method) (( Object_t* (*) (List_1_t68 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8394_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m8759(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t68 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8396_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m8760(__this, method) (( Object_t * (*) (List_1_t68 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8398_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m8761(__this, ___item, method) (( int32_t (*) (List_1_t68 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8400_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m8762(__this, ___item, method) (( bool (*) (List_1_t68 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8402_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m8763(__this, ___item, method) (( int32_t (*) (List_1_t68 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8404_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m8764(__this, ___index, ___item, method) (( void (*) (List_1_t68 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8406_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m8765(__this, ___item, method) (( void (*) (List_1_t68 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8408_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8766(__this, method) (( bool (*) (List_1_t68 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8410_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m8767(__this, method) (( Object_t * (*) (List_1_t68 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8412_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m8768(__this, ___index, method) (( Object_t * (*) (List_1_t68 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8414_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m8769(__this, ___index, ___value, method) (( void (*) (List_1_t68 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8416_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m8770(__this, ___item, method) (( void (*) (List_1_t68 *, GUILayoutEntry_t67 *, const MethodInfo*))List_1_Add_m8418_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m8771(__this, ___newCount, method) (( void (*) (List_1_t68 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8420_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m8772(__this, method) (( void (*) (List_1_t68 *, const MethodInfo*))List_1_Clear_m8422_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m8773(__this, ___item, method) (( bool (*) (List_1_t68 *, GUILayoutEntry_t67 *, const MethodInfo*))List_1_Contains_m8424_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m8774(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t68 *, GUILayoutEntryU5BU5D_t1490*, int32_t, const MethodInfo*))List_1_CopyTo_m8426_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m1204(__this, method) (( Enumerator_t326  (*) (List_1_t68 *, const MethodInfo*))List_1_GetEnumerator_m8427_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m8775(__this, ___item, method) (( int32_t (*) (List_1_t68 *, GUILayoutEntry_t67 *, const MethodInfo*))List_1_IndexOf_m8429_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m8776(__this, ___start, ___delta, method) (( void (*) (List_1_t68 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8431_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m8777(__this, ___index, method) (( void (*) (List_1_t68 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8433_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m8778(__this, ___index, ___item, method) (( void (*) (List_1_t68 *, int32_t, GUILayoutEntry_t67 *, const MethodInfo*))List_1_Insert_m8435_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m8779(__this, ___item, method) (( bool (*) (List_1_t68 *, GUILayoutEntry_t67 *, const MethodInfo*))List_1_Remove_m8437_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m8780(__this, ___index, method) (( void (*) (List_1_t68 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8439_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m8781(__this, method) (( GUILayoutEntryU5BU5D_t1490* (*) (List_1_t68 *, const MethodInfo*))List_1_ToArray_m8441_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m8782(__this, method) (( int32_t (*) (List_1_t68 *, const MethodInfo*))List_1_get_Capacity_m8443_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m8783(__this, ___value, method) (( void (*) (List_1_t68 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8445_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m8784(__this, method) (( int32_t (*) (List_1_t68 *, const MethodInfo*))List_1_get_Count_m8447_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m8785(__this, ___index, method) (( GUILayoutEntry_t67 * (*) (List_1_t68 *, int32_t, const MethodInfo*))List_1_get_Item_m8449_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m8786(__this, ___index, ___value, method) (( void (*) (List_1_t68 *, int32_t, GUILayoutEntry_t67 *, const MethodInfo*))List_1_set_Item_m8451_gshared)(__this, ___index, ___value, method)
