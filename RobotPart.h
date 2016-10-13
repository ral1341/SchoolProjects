#pragma once
#include "std_lib_facilities.h"

class robotPart
{
public:
	robotPart(string s, int i, double w, double c, string d)
		: Name(s), part_number(i), weight(w), cost(c), description(d) {};
	string get_name();
	int get_ID();
	double get_weight();
	double get_cost();
	string get_description();
	bool is_obsolete();
	void make_obsolete();

protected:
	string Name;
	int part_number;
	double weight;
	double cost;
	string description;
	bool obsolete = false;

};

class robotArm : public robotPart 
{
public:
	robotArm(double pc, string n, int pn, double w, double c, string d)
		:power_con(pc), robotPart(n, pn, w, c, d) {};
	double get_power();

private:
	double power_con;

};

class robotTorso : public robotPart
{
public:
	robotTorso(int com, string n, int pn, double w, double c, string d)
		: compartments(com), robotPart(n, pn, w, c, d) {};
	int get_compartments();
	

private:
	int compartments;
};

class robothead : public robotPart
{
public:
	robothead(string n, int pn, double w, double c, string d)
		: robotPart(n, pn, w, c, d) {};

private:

};

class robotbattery : public robotPart
{
public:
	robotbattery(double mp, string n, int pn, double w, double c, string d)
		: maxPower(mp), robotPart(n, pn, w, c, d) {};
	double get_power();
private:
	double maxPower;

};

class robotLocomotor : public robotPart
{
public:
	robotLocomotor(double ms, double pc, string n, int pn, double w, double c, string d)
		: maxSpeed(ms), power_con(pc), robotPart(n, pn, w, c, d) {};
	double get_speed();
	double get_power();

private:
	double maxSpeed;
	double power_con;


};