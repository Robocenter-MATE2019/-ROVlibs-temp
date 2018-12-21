#include "Rov.h"


Rov::Rov()
{
}



void Rov::init()
{

}

void Rov::run()
{
}

void Rov::write_output()
{
}

void Rov::read_input()
{
}

void Rov::read_writeIO()
{
}

void OutputSubSystem::apply(RovData& rov_data)
{
	for (auto device : devices)
	{
		device->write(rov_data);
	}
}

void InputSubSystem::apply(RovData& rov_data)
{

}

void IOSubSystem::apply(RovData& rov_data)
{
}
