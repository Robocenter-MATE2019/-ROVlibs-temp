#pragma once
#include "RovMainLib.h"
#include "ThrustersSubSystem.h"
#include "ROVBuilderManipulator.h"
#include "UDPConnection.h"
#include "SubSystem.h"

class outputSubSystem:public SubSystem // //Вынести в отдельный файл переназвать в соответствии с гайдлайном
{
public:
	outputSubSystem()
	{
		int i = 0;
#ifdef MANIPULATOR_ENABLE
		devices[i++] = new ROVBuilderManipulator();
#endif
#ifdef THRUSTERSSUBSYSTEM_ENABLE
		devices[i++] = new ThrustersSubSystem();
#endif
#ifdef ROTARYCAMERA_ENABLE
		devices[i++] = new Cams();
#endif

	}
	void Apply();
	output* devices[SIZE_OUTPUT_DEVICES];
};

class inputSubSystem:public SubSystem //Вынести в отдельный файл переназвать в соответствии с гайдлайном
{
public:
	inputSubSystem()
	{
		
		int i = 0;
#ifdef IMU_ENABLE
		//devices[i++] = new IMU();
#endif 
#ifdef DnT_ENABLE
		//devices[i++] = new DnT();
#endif

	}
	void Apply();
	input* devices[SIZE_INPUT_DEVICES];
};

class IOSubSystem: public SubSystem//Вынести в отдельный файл 
{
public:
	IOSubSystem()
	{
		int i = 0;
#ifdef UDP_ENABLE
		devices[i++] = new UDPConnection();
#endif
	}
	void Apply();
	input_output* devices[SIZE_IO_DEVICES];
};


class Rov {
public:
	Rov();
	void init();
	void run();

	void writeOutput();
	void readInput();
	void readwriteIO();

	RovData m_rov_data;
	outputSubSystem m_output; //Положить в массив, настройки массива вынести в конфиг
	inputSubSystem m_input;   // компановку массива сделать с условной компиляцией
	IOSubSystem m_io;         //Так же как и в подсистемах
};
