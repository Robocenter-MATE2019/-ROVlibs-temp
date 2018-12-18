#pragma once

//Devices////////////////////////////////////////

#define MANIPULATOR_ENABLE
#define THRUSTERSSUBSYSTEM_ENABLE
#define ROTARYCAMERA_ENABLE

#define IMU_ENABLE
#define DnT_ENABLE

#define UDP_ENABLE



constexpr int SIZE_OUTPUT_DEVICES        = 3;
constexpr int SIZE_INPUT_DEVICES         = 2;
constexpr int SIZE_IO_DEVICES            = 1;

/////////////////////////////////////////////////

//ROVBuilderManipulator//////////////////////////

constexpr int MANIPULATOR_RELEASE_LEFT   = 1;
constexpr int MANIPULATOR_RELEASE_RIGHT  = 2;

constexpr int MANIPULATOR_ROTATE_LEFT    = 3;
constexpr int MANIPULATOR_ROTATE_RIGHT   = 4;

/////////////////////////////////////////////////

//ThrustersSubSystem/////////////////////////////

constexpr int H_FRONT_LEFT               = 0; 
constexpr bool H_FRONT_LEFT_INVERSE      = false;
constexpr int H_FRONT_RIGHT              = 1;
constexpr bool H_FRONT_RIGHT_INVERSE     = false;
constexpr int H_BACK_LEFT                = 2;
constexpr bool H_BACK_LEFT_INVERSE       = false;
constexpr int H_BACK_RIGHT               = 3;
constexpr bool H_BACK_RIGHT_INVERSE      = false;

constexpr int V_LEFT                     = 4;
constexpr bool V_LEFT_INVERSE		     = false;
constexpr int V_RIGHT                    = 5;
constexpr bool V_RIGHT_INVERSE           = false;

constexpr int THRUSTER_SIZE              = 6;

/////////////////////////////////////////////////

//RotaryCamera///////////////////////////////////

constexpr int ROTARY_CAMERA_1            = 9;
constexpr int ROTARY_CAMERA_2            = 10;

/////////////////////////////////////////////////

//UDPConnection//////////////////////////////////

#define SELF_IP 192, 168, 1, 5                
#define REMOTE_IP 192, 168, 1, 4
#define MAC 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED
constexpr int SELF_PORT = 5000;
constexpr int REMOTE_PORT = 5000;

/////////////////////////////////////////////////