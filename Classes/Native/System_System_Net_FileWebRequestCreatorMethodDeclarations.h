#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t416;
// System.Net.WebRequest
struct WebRequest_t415;
// System.Uri
struct Uri_t189;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m1458 (FileWebRequestCreator_t416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t415 * FileWebRequestCreator_Create_m1459 (FileWebRequestCreator_t416 * __this, Uri_t189 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
