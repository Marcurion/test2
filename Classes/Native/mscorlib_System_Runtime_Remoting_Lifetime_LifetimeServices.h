﻿#pragma once
#include <stdint.h>
// System.Runtime.Remoting.Lifetime.LeaseManager
struct LeaseManager_t1081;
// System.Object
#include "mscorlib_System_Object.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Runtime.Remoting.Lifetime.LifetimeServices
struct  LifetimeServices_t1082  : public Object_t
{
};
struct LifetimeServices_t1082_StaticFields{
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseManagerPollTime
	TimeSpan_t467  ____leaseManagerPollTime_0;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseTime
	TimeSpan_t467  ____leaseTime_1;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_renewOnCallTime
	TimeSpan_t467  ____renewOnCallTime_2;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_sponsorshipTimeout
	TimeSpan_t467  ____sponsorshipTimeout_3;
	// System.Runtime.Remoting.Lifetime.LeaseManager System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseManager
	LeaseManager_t1081 * ____leaseManager_4;
};
