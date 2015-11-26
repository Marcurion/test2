#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t141;
struct AnimationCurve_t141_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t288;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m715 (AnimationCurve_t141 * __this, KeyframeU5BU5D_t288* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m716 (AnimationCurve_t141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m717 (AnimationCurve_t141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m718 (AnimationCurve_t141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m719 (AnimationCurve_t141 * __this, KeyframeU5BU5D_t288* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t141_marshal(const AnimationCurve_t141& unmarshaled, AnimationCurve_t141_marshaled& marshaled);
void AnimationCurve_t141_marshal_back(const AnimationCurve_t141_marshaled& marshaled, AnimationCurve_t141& unmarshaled);
void AnimationCurve_t141_marshal_cleanup(AnimationCurve_t141_marshaled& marshaled);
