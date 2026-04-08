#include "main.h"

// test for git

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
