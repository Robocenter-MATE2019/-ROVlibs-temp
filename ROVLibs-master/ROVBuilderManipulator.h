#pragma once
#include "LevelMotor.h"
#include "Config.h"
#include "RovData.h"
#include "RovMainLib.h"

class ROVBuilderManipulator : public Output
{
public:
	ROVBuilderManipulator();
	//Удалить закомментированный код
	/*ROVBuilderManipulator(int8_t pin_release_left, int8_t pin_release_right, 
		int8_t pin_rotate_left, int8_t pin_rotate_right) :
		m_release_level_motor(pin_release_left, pin_release_right),
		m_rotate_level_motor(pin_rotate_left, pin_rotate_right)
	{
	}*/
	void init();
	void write(RovData& rov_data);
	void set_power(int8_t release, int8_t rotate);
private:
	LevelMotor m_release_level_motor;
	LevelMotor m_rotate_level_motor;
};

