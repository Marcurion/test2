#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t952;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t951;
// System.Type[]
struct TypeU5BU5D_t201;
// System.Exception
struct Exception_t74;
// System.Reflection.AssemblyName
struct AssemblyName_t999;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m5528 (AssemblyBuilder_t952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t951* AssemblyBuilder_GetModulesInternal_m5529 (AssemblyBuilder_t952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C" TypeU5BU5D_t201* AssemblyBuilder_GetTypes_m5530 (AssemblyBuilder_t952 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m5531 (AssemblyBuilder_t952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t74 * AssemblyBuilder_not_supported_m5532 (AssemblyBuilder_t952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t999 * AssemblyBuilder_UnprotectedGetName_m5533 (AssemblyBuilder_t952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
