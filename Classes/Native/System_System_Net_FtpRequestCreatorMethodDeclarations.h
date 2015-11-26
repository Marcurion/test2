#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t417;
// System.Net.WebRequest
struct WebRequest_t415;
// System.Uri
struct Uri_t189;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m1460 (FtpRequestCreator_t417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t415 * FtpRequestCreator_Create_m1461 (FtpRequestCreator_t417 * __this, Uri_t189 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
