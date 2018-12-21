#pragma once
#include "RovData.h"
//добавить чистовиртуальный метод void init()
class SubSystem
{
public:
	SubSystem();
	~SubSystem();
	virtual void apply(RovData& rov_data)=0;
};

