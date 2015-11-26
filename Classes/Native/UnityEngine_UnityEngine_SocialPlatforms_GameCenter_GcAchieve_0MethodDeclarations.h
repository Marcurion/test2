#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t229;
struct GcAchievementData_t229_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t238;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t238 * GcAchievementData_ToAchievement_m1051 (GcAchievementData_t229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t229_marshal(const GcAchievementData_t229& unmarshaled, GcAchievementData_t229_marshaled& marshaled);
void GcAchievementData_t229_marshal_back(const GcAchievementData_t229_marshaled& marshaled, GcAchievementData_t229& unmarshaled);
void GcAchievementData_t229_marshal_cleanup(GcAchievementData_t229_marshaled& marshaled);
