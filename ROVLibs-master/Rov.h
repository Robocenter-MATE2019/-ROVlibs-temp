#pragma once
#include "RovMainLib.h"
#include "ThrustersSubSystem.h"
#include "ROVBuilderManipulator.h"
#include "UDPConnection.h"
#include "SubSystem.h"
#include "RovData.h"
#include "Output.h"
#include "Input.h"
#include "InputOutput.h"
//вынести отсюда все классы сабсистем в отдельные файлы
class OutputSubSystem:public SubSystem
{
public:
	OutputSubSystem()
	{
		int i = 0;
#ifdef MANIPULATOR_ENABLE
		devices[i++] = new ROVBuilderManipulator();
#endif
#ifdef THRUSTERSSUBSYSTEM_ENABLE
		devices[i++] = new ThrustersSubSystem();
#endif
#ifdef ROTARYCAMERA_ENABLE
		devices[i++] = new Cameras();
#endif

	}
	void apply(RovData& rov_data);
	Output* devices[SIZE_OUTPUT_DEVICES];
};

class InputSubSystem:public SubSystem
{
public:
	InputSubSystem()
	{
		
		int i = 0;
#ifdef IMU_ENABLE
		//devices[i++] = new IMU();
#endif 
#ifdef DnT_ENABLE
		//devices[i++] = new DnT();
#endif

	}
	void apply(RovData& rov_data) override;
	Input* devices[SIZE_INPUT_DEVICES];
};

class IOSubSystem: public SubSystem
{
public:
	IOSubSystem()
	{
		int i = 0;
#ifdef UDP_ENABLE
		devices[i++] = new UDPConnection();
#endif
	}
	void apply(RovData& rov_data);
	InputOutput* devices[SIZE_IO_DEVICES];
};


class Rov {
public:
	Rov();
	void init();
	void run();
	void write_output();
	void read_input();
	void read_writeIO();
	RovData m_rov_data;
	OutputSubSystem m_output;
	InputSubSystem m_input;
	IOSubSystem m_io;
};
