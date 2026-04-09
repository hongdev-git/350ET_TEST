#include "main.h"

// test for git HJK
// pull test

int main()
{
	SYSTEM_Initialize();
	
	while(1)
	{
		TimerEventProcedure();
		AdcProcedure();
		LoadCoilControlProcedure();
        BatteryChargingProcedure();
        CommunicationProcedure();
        OperationModeProcedure();
	}
}
