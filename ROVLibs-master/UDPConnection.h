#pragma once

#include <Ethernet.h>
#include <SPI.h>
#include "Timer.h"
#include "Config.h"
#include "RovMainLib.h"
#include "RovData.h"

struct input_packet
{
	signed char button_data1;
	signed char button_data2;
	int8_t axisX = 0; //! -100/100;    
	int8_t axisY = 0; //! -100/100;    
	int8_t axisZ = 0; //! -100/100;    
	int8_t axisW = 0; //! -100/100;
	int8_t cameraRotation[2] = { 0, 0 };
	//int8_t thrusterPower[6] = { 0, 0, 0, 0, 0, 0 };
	uint8_t debugFlag = 0;
	int8_t manipulatorRotation = 0; //! -100/100    
	int8_t manipulatorGrab = 0; //! -1 close/+1 open;
	uint8_t regulators = 0; //! 1st bit - depth;
	float desiredDepth = 0.0f;
	bool m_actionState[12];
};

struct output_packet
{
	float yaw = 0;
	float temp = 0;
	float roll = 0;
	float depth = 0;
};

class UDPConnection : public input_output
{
public:
	UDPConnection();
	void init();
	void write(RovData& rov_data);
	void read(RovData& rov_data);
	bool receivePacket(RovData& rov_data);
	void sendPacket(const output_packet& packet);
	bool parsePayload(input_packet& packet, RovData& rov_data);
private:
	EthernetUDP m_udp;
	IPAddress m_self_ip;
	IPAddress m_remote_ip;
	uint16_t m_self_port;
	uint16_t m_remote_port;
	byte m_mac[6] = { MAC };
	Timer m_timer;
	//Timer m_timer_1;
};
