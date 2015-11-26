#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t421;
// System.Net.WebRequest
struct WebRequest_t415;
// System.Uri
struct Uri_t189;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m1466 (HttpRequestCreator_t421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t415 * HttpRequestCreator_Create_m1467 (HttpRequestCreator_t421 * __this, Uri_t189 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
