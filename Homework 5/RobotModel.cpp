#include "RobotModel.h"

string RobotModel::get_name()
{
	return name;
}

int RobotModel::get_ID()
{
	return ID_number;
}

double RobotModel::get_price()
{
	return sale_price;
}

void RobotModel::set_energy()
{
	double bat_power;
	double power_con;

	bat_power = torso.get_compartments()*bat.get_power();
	power_con = arm1.get_power() + arm2.get_power() + locomotor.get_power();

	total_energy = bat_power / power_con;
}

bool RobotModel::is_obsolete()
{
	return obsolete;
}

void RobotModel::make_obsolete()
{
	obsolete = true;
}