#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t1167;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1164;
// System.Int32[]
struct Int32U5BU5D_t498;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1157;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m6609 (MultiArrayFixupRecord_t1167 * __this, ObjectRecord_t1164 * ___objectToBeFixed, Int32U5BU5D_t498* ___indices, ObjectRecord_t1164 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m6610 (MultiArrayFixupRecord_t1167 * __this, ObjectManager_t1157 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
