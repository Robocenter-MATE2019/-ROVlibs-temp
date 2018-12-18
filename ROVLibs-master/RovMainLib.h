#pragma once

#include "RotaryCamera.h"
//#include "ThrustersSubSystem.h"
//#include "ROVBuilderManipulator.h"
#include "Config.h"
//#include "UDPConnection.h"
#include "RovData.h"

class input
{
public:
	input() {}
	virtual void read(RovData& rov_data) = 0;
};

class output
{
public:
	output() {}
	virtual void write(RovData& rov_data) = 0;
};

class input_output : public input, output
{
public:
	input_output() {}
};

/////////////////////////////////////////////////

class Cams : public output
{
public:
	Cams();
	void init();
	void write(RovData& rov_data);
private:
	RotaryCamera m_rotary_cam[2];
};

////////////////////////////////////////////

//class Thrusters : public output
//{
//public:
//	Thrusters();
//	void init();
//	void write(RovData& rov_data);
//private:
//	ThrustersSubSystem m_thrusters_sub_system;
//};
//
//class Manipulator : public output
//{
//public:
//	Manipulator();
//	void init();
//	void write(RovData& rov_data);
//private:
//	ROVBuilderManipulator m_manipulator;
//};
//
//class UDPCon : public input_output
//{
//public:
//	UDPCon();
//	void init();
//	void write(RovData& rov_data);
//	void read(RovData& rov_data);
//private:
//	UDPConnection m_udp;
//};
