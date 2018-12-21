#pragma once
#include "RovData.h"
class Input
{
public:
	Input();
	virtual void read(RovData& rov_data) = 0;
};

