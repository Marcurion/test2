#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t156;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t1847;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t284;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t292;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m9452_gshared (List_1_t156 * __this, const MethodInfo* method);
#define List_1__ctor_m9452(__this, method) (( void (*) (List_1_t156 *, const MethodInfo*))List_1__ctor_m9452_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1254_gshared (List_1_t156 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1254(__this, ___capacity, method) (( void (*) (List_1_t156 *, int32_t, const MethodInfo*))List_1__ctor_m1254_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m9453_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m9453(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9453_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9454_gshared (List_1_t156 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9454(__this, method) (( Object_t* (*) (List_1_t156 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9454_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m9455_gshared (List_1_t156 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m9455(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t156 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m9455_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m9456_gshared (List_1_t156 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9456(__this, method) (( Object_t * (*) (List_1_t156 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m9456_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m9457_gshared (List_1_t156 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m9457(__this, ___item, method) (( int32_t (*) (List_1_t156 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m9457_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m9458_gshared (List_1_t156 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m9458(__this, ___item, method) (( bool (*) (List_1_t156 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m9458_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m9459_gshared (List_1_t156 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m9459(__this, ___item, method) (( int32_t (*) (List_1_t156 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m9459_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m9460_gshared (List_1_t156 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m9460(__this, ___index, ___item, method) (( void (*) (List_1_t156 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m9460_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m9461_gshared (List_1_t156 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m9461(__this, ___item, method) (( void (*) (List_1_t156 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m9461_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9462_gshared (List_1_t156 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9462(__this, method) (( bool (*) (List_1_t156 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9462_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m9463_gshared (List_1_t156 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m9463(__this, method) (( Object_t * (*) (List_1_t156 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m9463_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m9464_gshared (List_1_t156 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m9464(__this, ___index, method) (( Object_t * (*) (List_1_t156 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m9464_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m9465_gshared (List_1_t156 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m9465(__this, ___index, ___value, method) (( void (*) (List_1_t156 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m9465_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m9466_gshared (List_1_t156 * __this, UIVertex_t163  ___item, const MethodInfo* method);
#define List_1_Add_m9466(__this, ___item, method) (( void (*) (List_1_t156 *, UIVertex_t163 , const MethodInfo*))List_1_Add_m9466_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m9467_gshared (List_1_t156 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m9467(__this, ___newCount, method) (( void (*) (List_1_t156 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9467_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m9468_gshared (List_1_t156 * __this, const MethodInfo* method);
#define List_1_Clear_m9468(__this, method) (( void (*) (List_1_t156 *, const MethodInfo*))List_1_Clear_m9468_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m9469_gshared (List_1_t156 * __this, UIVertex_t163  ___item, const MethodInfo* method);
#define List_1_Contains_m9469(__this, ___item, method) (( bool (*) (List_1_t156 *, UIVertex_t163 , const MethodInfo*))List_1_Contains_m9469_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m9470_gshared (List_1_t156 * __this, UIVertexU5BU5D_t292* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m9470(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t156 *, UIVertexU5BU5D_t292*, int32_t, const MethodInfo*))List_1_CopyTo_m9470_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t1542  List_1_GetEnumerator_m9471_gshared (List_1_t156 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m9471(__this, method) (( Enumerator_t1542  (*) (List_1_t156 *, const MethodInfo*))List_1_GetEnumerator_m9471_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m9472_gshared (List_1_t156 * __this, UIVertex_t163  ___item, const MethodInfo* method);
#define List_1_IndexOf_m9472(__this, ___item, method) (( int32_t (*) (List_1_t156 *, UIVertex_t163 , const MethodInfo*))List_1_IndexOf_m9472_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m9473_gshared (List_1_t156 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m9473(__this, ___start, ___delta, method) (( void (*) (List_1_t156 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9473_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m9474_gshared (List_1_t156 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m9474(__this, ___index, method) (( void (*) (List_1_t156 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9474_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m9475_gshared (List_1_t156 * __this, int32_t ___index, UIVertex_t163  ___item, const MethodInfo* method);
#define List_1_Insert_m9475(__this, ___index, ___item, method) (( void (*) (List_1_t156 *, int32_t, UIVertex_t163 , const MethodInfo*))List_1_Insert_m9475_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m9476_gshared (List_1_t156 * __this, UIVertex_t163  ___item, const MethodInfo* method);
#define List_1_Remove_m9476(__this, ___item, method) (( bool (*) (List_1_t156 *, UIVertex_t163 , const MethodInfo*))List_1_Remove_m9476_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m9477_gshared (List_1_t156 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m9477(__this, ___index, method) (( void (*) (List_1_t156 *, int32_t, const MethodInfo*))List_1_RemoveAt_m9477_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t292* List_1_ToArray_m9478_gshared (List_1_t156 * __this, const MethodInfo* method);
#define List_1_ToArray_m9478(__this, method) (( UIVertexU5BU5D_t292* (*) (List_1_t156 *, const MethodInfo*))List_1_ToArray_m9478_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m9479_gshared (List_1_t156 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m9479(__this, method) (( int32_t (*) (List_1_t156 *, const MethodInfo*))List_1_get_Capacity_m9479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m9480_gshared (List_1_t156 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m9480(__this, ___value, method) (( void (*) (List_1_t156 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9480_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m9481_gshared (List_1_t156 * __this, const MethodInfo* method);
#define List_1_get_Count_m9481(__this, method) (( int32_t (*) (List_1_t156 *, const MethodInfo*))List_1_get_Count_m9481_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t163  List_1_get_Item_m9482_gshared (List_1_t156 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m9482(__this, ___index, method) (( UIVertex_t163  (*) (List_1_t156 *, int32_t, const MethodInfo*))List_1_get_Item_m9482_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m9483_gshared (List_1_t156 * __this, int32_t ___index, UIVertex_t163  ___value, const MethodInfo* method);
#define List_1_set_Item_m9483(__this, ___index, ___value, method) (( void (*) (List_1_t156 *, int32_t, UIVertex_t163 , const MethodInfo*))List_1_set_Item_m9483_gshared)(__this, ___index, ___value, method)
