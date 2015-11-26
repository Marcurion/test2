#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t1188;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t620;
// System.Byte[]
struct ByteU5BU5D_t108;

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
extern "C" void DESCryptoServiceProvider__ctor_m6713 (DESCryptoServiceProvider_t1188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * DESCryptoServiceProvider_CreateDecryptor_m6714 (DESCryptoServiceProvider_t1188 * __this, ByteU5BU5D_t108* ___rgbKey, ByteU5BU5D_t108* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * DESCryptoServiceProvider_CreateEncryptor_m6715 (DESCryptoServiceProvider_t1188 * __this, ByteU5BU5D_t108* ___rgbKey, ByteU5BU5D_t108* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
extern "C" void DESCryptoServiceProvider_GenerateIV_m6716 (DESCryptoServiceProvider_t1188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
extern "C" void DESCryptoServiceProvider_GenerateKey_m6717 (DESCryptoServiceProvider_t1188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
