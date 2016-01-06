#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c"   //Main competition background code...do not modify!



void pre_auton()
{
  bStopTasksBetweenModes = true;
}



task autonomous()
{
	AutonomousCodePlaceholderForTesting();  // Remove this function call once you have "real" code.
}



task usercontrol()
{

	while (true)
	{
	  UserControlCodePlaceholderForTesting(); // Remove this function call once you have "real" code.
	}
}
