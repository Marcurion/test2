#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3;
// UnityEngine.Coroutine
struct Coroutine_t23;
struct Coroutine_t23_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t284;

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m5 (MonoBehaviour_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t23 * MonoBehaviour_StartCoroutine_m620 (MonoBehaviour_t3 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t23 * MonoBehaviour_StartCoroutine_Auto_m621 (MonoBehaviour_t3 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
