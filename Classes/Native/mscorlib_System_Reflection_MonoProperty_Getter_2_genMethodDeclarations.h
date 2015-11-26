#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t1780;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t53;
// System.AsyncCallback
struct AsyncCallback_t54;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Getter_2__ctor_m11951_gshared (Getter_2_t1780 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Getter_2__ctor_m11951(__this, ___object, ___method, method) (( void (*) (Getter_2_t1780 *, Object_t *, IntPtr_t, const MethodInfo*))Getter_2__ctor_m11951_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Getter_2_Invoke_m11952_gshared (Getter_2_t1780 * __this, Object_t * ____this, const MethodInfo* method);
#define Getter_2_Invoke_m11952(__this, ____this, method) (( Object_t * (*) (Getter_2_t1780 *, Object_t *, const MethodInfo*))Getter_2_Invoke_m11952_gshared)(__this, ____this, method)
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Getter_2_BeginInvoke_m11953_gshared (Getter_2_t1780 * __this, Object_t * ____this, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Getter_2_BeginInvoke_m11953(__this, ____this, ___callback, ___object, method) (( Object_t * (*) (Getter_2_t1780 *, Object_t *, AsyncCallback_t54 *, Object_t *, const MethodInfo*))Getter_2_BeginInvoke_m11953_gshared)(__this, ____this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Getter_2_EndInvoke_m11954_gshared (Getter_2_t1780 * __this, Object_t * ___result, const MethodInfo* method);
#define Getter_2_EndInvoke_m11954(__this, ___result, method) (( Object_t * (*) (Getter_2_t1780 *, Object_t *, const MethodInfo*))Getter_2_EndInvoke_m11954_gshared)(__this, ___result, method)
