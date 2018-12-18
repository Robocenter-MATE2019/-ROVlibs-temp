#pragma once
class SubSystem
{
public:
	SubSystem(RovData& rov_data);
	~SubSystem();
	virtual void apply()=0;
};

