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
#include "IOSubSystem.h"
#include "InputSubSystem.h"
#include "OutputSubSystem.h"
//вынести отсюда все классы сабсистем в отдельные файлы



class Rov {
public:
	Rov();
	void init();
	void run();
	//удалить методы ниже
	void write_output();
	void read_input();
	void read_writeIO();
	RovData m_rov_data;
	//вместо подсистем сделать SubSystem *m_subsystems[SUBSYSTEM_SIZE]
	OutputSubSystem m_output;
	InputSubSystem m_input;
	IOSubSystem m_io;
};
