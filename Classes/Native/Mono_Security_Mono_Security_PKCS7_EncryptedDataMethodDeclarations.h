#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t639;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t638;
// System.Byte[]
struct ByteU5BU5D_t108;
// Mono.Security.ASN1
struct ASN1_t567;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m2588 (EncryptedData_t639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m2589 (EncryptedData_t639 * __this, ASN1_t567 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t638 * EncryptedData_get_EncryptionAlgorithm_m2590 (EncryptedData_t639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t108* EncryptedData_get_EncryptedContent_m2591 (EncryptedData_t639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
