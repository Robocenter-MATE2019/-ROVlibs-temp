#pragma once
#include "RovData.h"
//добавить виртуальный метод init()
class Output
{
public:
	Output();
	virtual void write(RovData& rov_data) = 0;
};

