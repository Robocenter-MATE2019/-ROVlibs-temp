#include "Input.h"
#include "RovData.h"

class MetalChecker : public Input
{
public:
	void init();
	void read(RovData rov_data);
};