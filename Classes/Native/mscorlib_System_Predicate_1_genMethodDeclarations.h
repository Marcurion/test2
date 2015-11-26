#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Object>
struct Predicate_1_t1745;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t53;
// System.AsyncCallback
struct AsyncCallback_t54;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m11743_gshared (Predicate_1_t1745 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m11743(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1745 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11743_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m11744_gshared (Predicate_1_t1745 * __this, Object_t * ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m11744(__this, ___obj, method) (( bool (*) (Predicate_1_t1745 *, Object_t *, const MethodInfo*))Predicate_1_Invoke_m11744_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m11745_gshared (Predicate_1_t1745 * __this, Object_t * ___obj, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m11745(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1745 *, Object_t *, AsyncCallback_t54 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11745_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m11746_gshared (Predicate_1_t1745 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m11746(__this, ___result, method) (( bool (*) (Predicate_1_t1745 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11746_gshared)(__this, ___result, method)
