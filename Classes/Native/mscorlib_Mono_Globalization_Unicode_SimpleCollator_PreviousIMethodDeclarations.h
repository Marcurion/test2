#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t813;
struct PreviousInfo_t813_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m4286 (PreviousInfo_t813 * __this, bool ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t813_marshal(const PreviousInfo_t813& unmarshaled, PreviousInfo_t813_marshaled& marshaled);
void PreviousInfo_t813_marshal_back(const PreviousInfo_t813_marshaled& marshaled, PreviousInfo_t813& unmarshaled);
void PreviousInfo_t813_marshal_cleanup(PreviousInfo_t813_marshaled& marshaled);
