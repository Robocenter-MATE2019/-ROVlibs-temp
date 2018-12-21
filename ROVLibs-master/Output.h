#pragma once
#include "RovData.h"
class Output
{
public:
	Output();
	virtual void write(RovData& rov_data) = 0;
};

