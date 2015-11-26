#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.MonoIOStat
struct MonoIOStat_t932;
struct MonoIOStat_t932_marshaled;

void MonoIOStat_t932_marshal(const MonoIOStat_t932& unmarshaled, MonoIOStat_t932_marshaled& marshaled);
void MonoIOStat_t932_marshal_back(const MonoIOStat_t932_marshaled& marshaled, MonoIOStat_t932& unmarshaled);
void MonoIOStat_t932_marshal_cleanup(MonoIOStat_t932_marshaled& marshaled);
