#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t443;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t441;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t440;
// System.Security.Cryptography.Oid
struct Oid_t442;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t451;
// System.Byte[]
struct ByteU5BU5D_t108;
// System.Security.Cryptography.DSA
struct DSA_t565;
// System.Security.Cryptography.RSA
struct RSA_t566;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m1575 (PublicKey_t443 * __this, X509Certificate_t451 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t441 * PublicKey_get_EncodedKeyValue_m1576 (PublicKey_t443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t441 * PublicKey_get_EncodedParameters_m1577 (PublicKey_t443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t440 * PublicKey_get_Key_m1578 (PublicKey_t443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t442 * PublicKey_get_Oid_m1579 (PublicKey_t443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t108* PublicKey_GetUnsignedBigInteger_m1580 (Object_t * __this /* static, unused */, ByteU5BU5D_t108* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t565 * PublicKey_DecodeDSA_m1581 (Object_t * __this /* static, unused */, ByteU5BU5D_t108* ___rawPublicKey, ByteU5BU5D_t108* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t566 * PublicKey_DecodeRSA_m1582 (Object_t * __this /* static, unused */, ByteU5BU5D_t108* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
