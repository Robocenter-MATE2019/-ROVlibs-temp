#include "MetalChecker.h"


void MetalChecker::init()
{

}

void MetalChecker::read(RovData rov_data)
{
	if (analogRead(METALCHECKER_PIN) > 900)
	{
		rov_data.m_metal_detected = true;
	}
	else
	{
		rov_data.m_metal_detected = false;
	}
}