#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
struct Enumerator_t1564;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t1555;

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9761_gshared (Enumerator_t1564 * __this, Dictionary_2_t1555 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m9761(__this, ___host, method) (( void (*) (Enumerator_t1564 *, Dictionary_2_t1555 *, const MethodInfo*))Enumerator__ctor_m9761_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9762_gshared (Enumerator_t1564 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9762(__this, method) (( Object_t * (*) (Enumerator_t1564 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9762_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m9763_gshared (Enumerator_t1564 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9763(__this, method) (( void (*) (Enumerator_t1564 *, const MethodInfo*))Enumerator_Dispose_m9763_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9764_gshared (Enumerator_t1564 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9764(__this, method) (( bool (*) (Enumerator_t1564 *, const MethodInfo*))Enumerator_MoveNext_m9764_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" int64_t Enumerator_get_Current_m9765_gshared (Enumerator_t1564 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9765(__this, method) (( int64_t (*) (Enumerator_t1564 *, const MethodInfo*))Enumerator_get_Current_m9765_gshared)(__this, method)
