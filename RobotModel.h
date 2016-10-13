#pragma once
#include "std_lib_facilities.h"
#include "RobotPart.h"

class RobotModel
{
public:
	RobotModel(string n, int ID, double p, robotArm a1, robotArm a2, robothead h, robotbattery b, robotLocomotor l, robotTorso t)
		: name(n), ID_number(ID), sale_price(p), arm1(a1), arm2(a2), head(h), bat(b), locomotor(l), torso(t) {};
	string get_name();
	int get_ID();
	double get_price();
	void set_energy();
private:
	string name;
	int ID_number;
	double sale_price;
	double prod_cost;
	robotArm arm1;
	robotArm arm2;
	robothead head;
	robotbattery bat;
	robotLocomotor locomotor;
	robotTorso torso;
	double total_energy;
	bool obsolete = false;

};