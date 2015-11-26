#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UnityException
struct UnityException_t253;
// System.String
struct String_t;
// System.Exception
struct Exception_t74;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t315;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void UnityEngine.UnityException::.ctor()
extern "C" void UnityException__ctor_m1135 (UnityException_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" void UnityException__ctor_m1136 (UnityException_t253 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern "C" void UnityException__ctor_m1137 (UnityException_t253 * __this, String_t* ___message, Exception_t74 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnityException__ctor_m1138 (UnityException_t253 * __this, SerializationInfo_t315 * ___info, StreamingContext_t316  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
