#include "RovMainLib.h"

Cams::Cams()
{
	m_rotary_cam[0] = RotaryCamera(ROTARY_CAMERA_1);
	m_rotary_cam[1] = RotaryCamera(ROTARY_CAMERA_2);
}

void Cams::init()
{
	m_rotary_cam[0].init();
	m_rotary_cam[1].init();
}

void Cams::write(RovData& rov_data)
{
	m_rotary_cam[0].rotate(rov_data.m_rotary_camera_1);
	m_rotary_cam[1].rotate(rov_data.m_rotary_camera_2);
}

/////////////////////////////////////////////////////////////////

//Thrusters::Thrusters()
//{
//}
//
//void Thrusters::init()
//{
//	m_thrusters_sub_system.init();
//}
//
//void Thrusters::write(RovData& rov_data)
//{
//	m_thrusters_sub_system.set_power(rov_data.m_axis_x, rov_data.m_axis_y, rov_data.m_axis_w, rov_data.m_axis_z, rov_data.m_regulator_type);
//}
//
///////////////////////////////////////////////////////////////////
//
//Manipulator::Manipulator()
//{
//	m_manipulator = ROVBuilderManipulator(MANIPULATOR_RELEASE_LEFT, MANIPULATOR_RELEASE_RIGHT, MANIPULATOR_ROTATE_LEFT, MANIPULATOR_ROTATE_RIGHT);
//}
//
//void Manipulator::init()
//{
//	m_manipulator.init();
//}
//
//void Manipulator::write(RovData& rov_data)
//{
//	m_manipulator.set_power(rov_data.m_manipulator_grab, rov_data.m_manipulator_rotate);
//}
//
/////////////////////////////////////////////////////////////////
//
//UDPCon::UDPCon()
//{
//}
//
//void UDPCon::init()
//{
//	m_udp.init();
//}
//
//void UDPCon::read(RovData& rov_data)
//{
//	m_udp.receivePacket(rov_data);
//}
//
//void UDPCon::write(RovData& rov_data)
//{
//	output_packet packet;
//	packet.yaw = rov_data.m_yaw;
//	packet.depth = rov_data.m_depth;
//	packet.roll = rov_data.m_roll;
//	packet.temp = rov_data.m_temperature;
//	m_udp.sendPacket(packet);
//}