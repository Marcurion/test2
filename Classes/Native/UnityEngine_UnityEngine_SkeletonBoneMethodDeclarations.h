#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t145;
struct SkeletonBone_t145_marshaled;

void SkeletonBone_t145_marshal(const SkeletonBone_t145& unmarshaled, SkeletonBone_t145_marshaled& marshaled);
void SkeletonBone_t145_marshal_back(const SkeletonBone_t145_marshaled& marshaled, SkeletonBone_t145& unmarshaled);
void SkeletonBone_t145_marshal_cleanup(SkeletonBone_t145_marshaled& marshaled);
