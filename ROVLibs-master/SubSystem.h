#pragma once
#include "RovData.h"
class SubSystem
{
public:
	SubSystem();
	~SubSystem();
	virtual void apply(RovData& rov_data)=0;
};

