#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t192;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1811;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t284;
// System.Object[]
struct ObjectU5BU5D_t205;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m1282_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1__ctor_m1282(__this, method) (( void (*) (List_1_t192 *, const MethodInfo*))List_1__ctor_m1282_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m8390_gshared (List_1_t192 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m8390(__this, ___capacity, method) (( void (*) (List_1_t192 *, int32_t, const MethodInfo*))List_1__ctor_m8390_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m8392_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m8392(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8392_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8394_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8394(__this, method) (( Object_t* (*) (List_1_t192 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8394_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m8396_gshared (List_1_t192 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m8396(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t192 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8396_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m8398_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m8398(__this, method) (( Object_t * (*) (List_1_t192 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8398_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m8400_gshared (List_1_t192 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m8400(__this, ___item, method) (( int32_t (*) (List_1_t192 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8400_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m8402_gshared (List_1_t192 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m8402(__this, ___item, method) (( bool (*) (List_1_t192 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8402_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m8404_gshared (List_1_t192 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m8404(__this, ___item, method) (( int32_t (*) (List_1_t192 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8404_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m8406_gshared (List_1_t192 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m8406(__this, ___index, ___item, method) (( void (*) (List_1_t192 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8406_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m8408_gshared (List_1_t192 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m8408(__this, ___item, method) (( void (*) (List_1_t192 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8408_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8410_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8410(__this, method) (( bool (*) (List_1_t192 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8410_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m8412_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m8412(__this, method) (( Object_t * (*) (List_1_t192 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8412_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m8414_gshared (List_1_t192 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m8414(__this, ___index, method) (( Object_t * (*) (List_1_t192 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8414_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m8416_gshared (List_1_t192 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m8416(__this, ___index, ___value, method) (( void (*) (List_1_t192 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8416_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m8418_gshared (List_1_t192 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m8418(__this, ___item, method) (( void (*) (List_1_t192 *, Object_t *, const MethodInfo*))List_1_Add_m8418_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m8420_gshared (List_1_t192 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m8420(__this, ___newCount, method) (( void (*) (List_1_t192 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8420_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m8422_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_Clear_m8422(__this, method) (( void (*) (List_1_t192 *, const MethodInfo*))List_1_Clear_m8422_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m8424_gshared (List_1_t192 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m8424(__this, ___item, method) (( bool (*) (List_1_t192 *, Object_t *, const MethodInfo*))List_1_Contains_m8424_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m8426_gshared (List_1_t192 * __this, ObjectU5BU5D_t205* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m8426(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t192 *, ObjectU5BU5D_t205*, int32_t, const MethodInfo*))List_1_CopyTo_m8426_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1454  List_1_GetEnumerator_m8427_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m8427(__this, method) (( Enumerator_t1454  (*) (List_1_t192 *, const MethodInfo*))List_1_GetEnumerator_m8427_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m8429_gshared (List_1_t192 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m8429(__this, ___item, method) (( int32_t (*) (List_1_t192 *, Object_t *, const MethodInfo*))List_1_IndexOf_m8429_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m8431_gshared (List_1_t192 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m8431(__this, ___start, ___delta, method) (( void (*) (List_1_t192 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8431_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m8433_gshared (List_1_t192 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m8433(__this, ___index, method) (( void (*) (List_1_t192 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8433_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m8435_gshared (List_1_t192 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m8435(__this, ___index, ___item, method) (( void (*) (List_1_t192 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m8435_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m8437_gshared (List_1_t192 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m8437(__this, ___item, method) (( bool (*) (List_1_t192 *, Object_t *, const MethodInfo*))List_1_Remove_m8437_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m8439_gshared (List_1_t192 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m8439(__this, ___index, method) (( void (*) (List_1_t192 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8439_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t205* List_1_ToArray_m8441_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_ToArray_m8441(__this, method) (( ObjectU5BU5D_t205* (*) (List_1_t192 *, const MethodInfo*))List_1_ToArray_m8441_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m8443_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m8443(__this, method) (( int32_t (*) (List_1_t192 *, const MethodInfo*))List_1_get_Capacity_m8443_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m8445_gshared (List_1_t192 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m8445(__this, ___value, method) (( void (*) (List_1_t192 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8445_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m8447_gshared (List_1_t192 * __this, const MethodInfo* method);
#define List_1_get_Count_m8447(__this, method) (( int32_t (*) (List_1_t192 *, const MethodInfo*))List_1_get_Count_m8447_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m8449_gshared (List_1_t192 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m8449(__this, ___index, method) (( Object_t * (*) (List_1_t192 *, int32_t, const MethodInfo*))List_1_get_Item_m8449_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m8451_gshared (List_1_t192 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m8451(__this, ___index, ___value, method) (( void (*) (List_1_t192 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m8451_gshared)(__this, ___index, ___value, method)
