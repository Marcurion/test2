#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t230;
struct GcScoreData_t230_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t240;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t240 * GcScoreData_ToScore_m1052 (GcScoreData_t230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t230_marshal(const GcScoreData_t230& unmarshaled, GcScoreData_t230_marshaled& marshaled);
void GcScoreData_t230_marshal_back(const GcScoreData_t230_marshaled& marshaled, GcScoreData_t230& unmarshaled);
void GcScoreData_t230_marshal_cleanup(GcScoreData_t230_marshaled& marshaled);
