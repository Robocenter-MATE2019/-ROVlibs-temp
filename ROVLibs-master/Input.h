#pragma once
#include "RovData.h"
//добавить виртуальный метод init()
class Input
{
public:
	Input();
	virtual void read(RovData& rov_data) = 0;
};

