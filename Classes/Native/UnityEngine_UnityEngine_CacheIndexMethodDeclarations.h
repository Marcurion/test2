#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t111;
struct CacheIndex_t111_marshaled;

void CacheIndex_t111_marshal(const CacheIndex_t111& unmarshaled, CacheIndex_t111_marshaled& marshaled);
void CacheIndex_t111_marshal_back(const CacheIndex_t111_marshaled& marshaled, CacheIndex_t111& unmarshaled);
void CacheIndex_t111_marshal_cleanup(CacheIndex_t111_marshaled& marshaled);
