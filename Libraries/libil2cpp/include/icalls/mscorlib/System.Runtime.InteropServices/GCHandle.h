#pragma once

#include <stdint.h>
#include "object-internals.h"

struct Il2CppObject;

namespace il2cpp
{
namespace icalls
{
namespace mscorlib
{
namespace System
{
namespace Runtime
{
namespace InteropServices
{

class GCHandle
{
public:
	static bool CheckCurrentDomain (int32_t handle);
	static void FreeHandle (int32_t handle);
	static Il2CppIntPtr GetAddrOfPinnedObject (int32_t handle);
	static Il2CppObject * GetTarget (int32_t handle);
	static int32_t GetTargetHandle (Il2CppObject * obj, int32_t handle, int32_t type);
};

} /* namespace InteropServices */
} /* namespace Runtime */
} /* namespace System */
} /* namespace mscorlib */
} /* namespace icalls */
} /* namespace il2cpp */
