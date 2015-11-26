#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t19;
struct WaitForSeconds_t19_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m36 (WaitForSeconds_t19 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t19_marshal(const WaitForSeconds_t19& unmarshaled, WaitForSeconds_t19_marshaled& marshaled);
void WaitForSeconds_t19_marshal_back(const WaitForSeconds_t19_marshaled& marshaled, WaitForSeconds_t19& unmarshaled);
void WaitForSeconds_t19_marshal_cleanup(WaitForSeconds_t19_marshaled& marshaled);
