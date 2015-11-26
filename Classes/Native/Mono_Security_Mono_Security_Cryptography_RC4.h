#pragma once
#include <stdint.h>
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t624;
// System.Security.Cryptography.SymmetricAlgorithm
#include "mscorlib_System_Security_Cryptography_SymmetricAlgorithm.h"
// Mono.Security.Cryptography.RC4
struct  RC4_t642  : public SymmetricAlgorithm_t610
{
};
struct RC4_t642_StaticFields{
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalBlockSizes
	KeySizesU5BU5D_t624* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalKeySizes
	KeySizesU5BU5D_t624* ___s_legalKeySizes_11;
};
