﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t837;
// System.Byte[]
struct ByteU5BU5D_t108;
// System.Security.Cryptography.RSA
struct RSA_t566;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t608;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t646;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m4512 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m4513 (Object_t * __this /* static, unused */, ByteU5BU5D_t108* ___array1, ByteU5BU5D_t108* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t108* PKCS1_I2OSP_m4514 (Object_t * __this /* static, unused */, ByteU5BU5D_t108* ___x, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t108* PKCS1_OS2IP_m4515 (Object_t * __this /* static, unused */, ByteU5BU5D_t108* ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t108* PKCS1_RSAEP_m4516 (Object_t * __this /* static, unused */, RSA_t566 * ___rsa, ByteU5BU5D_t108* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t108* PKCS1_RSASP1_m4517 (Object_t * __this /* static, unused */, RSA_t566 * ___rsa, ByteU5BU5D_t108* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t108* PKCS1_RSAVP1_m4518 (Object_t * __this /* static, unused */, RSA_t566 * ___rsa, ByteU5BU5D_t108* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
extern "C" ByteU5BU5D_t108* PKCS1_Encrypt_v15_m4519 (Object_t * __this /* static, unused */, RSA_t566 * ___rsa, RandomNumberGenerator_t608 * ___rng, ByteU5BU5D_t108* ___M, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t108* PKCS1_Sign_v15_m4520 (Object_t * __this /* static, unused */, RSA_t566 * ___rsa, HashAlgorithm_t646 * ___hash, ByteU5BU5D_t108* ___hashValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m4521 (Object_t * __this /* static, unused */, RSA_t566 * ___rsa, HashAlgorithm_t646 * ___hash, ByteU5BU5D_t108* ___hashValue, ByteU5BU5D_t108* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m4522 (Object_t * __this /* static, unused */, RSA_t566 * ___rsa, HashAlgorithm_t646 * ___hash, ByteU5BU5D_t108* ___hashValue, ByteU5BU5D_t108* ___signature, bool ___tryNonStandardEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t108* PKCS1_Encode_v15_m4523 (Object_t * __this /* static, unused */, HashAlgorithm_t646 * ___hash, ByteU5BU5D_t108* ___hashValue, int32_t ___emLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
