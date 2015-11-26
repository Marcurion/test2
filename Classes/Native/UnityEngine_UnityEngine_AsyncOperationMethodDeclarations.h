#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t11;
struct AsyncOperation_t11_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m552 (AsyncOperation_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m553 (AsyncOperation_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m554 (AsyncOperation_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t11_marshal(const AsyncOperation_t11& unmarshaled, AsyncOperation_t11_marshaled& marshaled);
void AsyncOperation_t11_marshal_back(const AsyncOperation_t11_marshaled& marshaled, AsyncOperation_t11& unmarshaled);
void AsyncOperation_t11_marshal_cleanup(AsyncOperation_t11_marshaled& marshaled);
