﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Camera/CameraCallback
struct CameraCallback_t117;
// System.Object
struct Object_t;
// UnityEngine.Camera
struct Camera_t116;
// System.IAsyncResult
struct IAsyncResult_t53;
// System.AsyncCallback
struct AsyncCallback_t54;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CameraCallback__ctor_m562 (CameraCallback_t117 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
extern "C" void CameraCallback_Invoke_m563 (CameraCallback_t117 * __this, Camera_t116 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t117(Il2CppObject* delegate, Camera_t116 * ___cam);
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
extern "C" Object_t * CameraCallback_BeginInvoke_m564 (CameraCallback_t117 * __this, Camera_t116 * ___cam, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern "C" void CameraCallback_EndInvoke_m565 (CameraCallback_t117 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
