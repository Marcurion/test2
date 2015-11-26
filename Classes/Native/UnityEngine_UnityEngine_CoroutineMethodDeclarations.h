#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t23;
struct Coroutine_t23_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m39 (Coroutine_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m40 (Coroutine_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m41 (Coroutine_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t23_marshal(const Coroutine_t23& unmarshaled, Coroutine_t23_marshaled& marshaled);
void Coroutine_t23_marshal_back(const Coroutine_t23_marshaled& marshaled, Coroutine_t23& unmarshaled);
void Coroutine_t23_marshal_cleanup(Coroutine_t23_marshaled& marshaled);
