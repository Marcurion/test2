#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t1235;
// System.Threading.CompressedStack
struct CompressedStack_t1234;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m7060 (SecurityContext_t1235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m7061 (SecurityContext_t1235 * __this, SecurityContext_t1235 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t1235 * SecurityContext_Capture_m7062 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m7063 (SecurityContext_t1235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t1234 * SecurityContext_get_CompressedStack_m7064 (SecurityContext_t1235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
