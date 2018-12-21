#pragma once
#include "RovData.h"
//добавить чистовиртуальный метод void init()
class SubSystem
{
public:
	virtual void init();
	virtual void apply(RovData& rov_data)=0;
};

