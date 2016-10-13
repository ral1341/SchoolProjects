#include "RobotPart.h"

string robotPart::get_name()
{
	return Name;
}

int robotPart::get_ID()
{
	return part_number;
}

double robotPart::get_weight()
{
	return weight;
}

double robotPart::get_cost()
{
	return cost;
}

string robotPart::get_description()
{
	return description;
}

bool robotPart::is_obsolete()
{
	return obsolete;
}

void robotPart::make_obsolete()
{
	obsolete = true;
}

double robotArm::get_power()
{
	return power_con;
}

int robotTorso::get_compartments()
{
	return compartments;
}

double robotbattery::get_power()
{
	return maxPower;
}

double robotLocomotor::get_speed()
{
	return maxSpeed;
}

double robotLocomotor::get_power()
{
	return power_con;
}
