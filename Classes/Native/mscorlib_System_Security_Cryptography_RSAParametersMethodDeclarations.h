#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t588;
struct RSAParameters_t588_marshaled;

void RSAParameters_t588_marshal(const RSAParameters_t588& unmarshaled, RSAParameters_t588_marshaled& marshaled);
void RSAParameters_t588_marshal_back(const RSAParameters_t588_marshaled& marshaled, RSAParameters_t588& unmarshaled);
void RSAParameters_t588_marshal_cleanup(RSAParameters_t588_marshaled& marshaled);
