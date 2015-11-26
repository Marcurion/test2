#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t493;
// System.Text.RegularExpressions.Match
struct Match_t483;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t573;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t284;

// System.Void System.Text.RegularExpressions.MatchCollection::.ctor(System.Text.RegularExpressions.Match)
extern "C" void MatchCollection__ctor_m1840 (MatchCollection_t493 * __this, Match_t483 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count()
extern "C" int32_t MatchCollection_get_Count_m1841 (MatchCollection_t493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32)
extern "C" Match_t483 * MatchCollection_get_Item_m1842 (MatchCollection_t493 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.MatchCollection::get_SyncRoot()
extern "C" Object_t * MatchCollection_get_SyncRoot_m1843 (MatchCollection_t493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.MatchCollection::CopyTo(System.Array,System.Int32)
extern "C" void MatchCollection_CopyTo_m1844 (MatchCollection_t493 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.MatchCollection::GetEnumerator()
extern "C" Object_t * MatchCollection_GetEnumerator_m1845 (MatchCollection_t493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.MatchCollection::TryToGet(System.Int32)
extern "C" bool MatchCollection_TryToGet_m1846 (MatchCollection_t493 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Text.RegularExpressions.MatchCollection::get_FullList()
extern "C" Object_t * MatchCollection_get_FullList_m1847 (MatchCollection_t493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
