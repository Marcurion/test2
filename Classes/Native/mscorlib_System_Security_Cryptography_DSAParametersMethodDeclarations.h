#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t590;
struct DSAParameters_t590_marshaled;

void DSAParameters_t590_marshal(const DSAParameters_t590& unmarshaled, DSAParameters_t590_marshaled& marshaled);
void DSAParameters_t590_marshal_back(const DSAParameters_t590_marshaled& marshaled, DSAParameters_t590& unmarshaled);
void DSAParameters_t590_marshal_cleanup(DSAParameters_t590_marshaled& marshaled);
