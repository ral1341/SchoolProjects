#pragma once
#include "std_lib_facilities.h"
#include "Order.h"
#include "RobotModel.h"
#include "RobotPart.h"

class shop
{
public:
	void new_part();
	void new_model();
	void new_customer();
	void new_associate();
	void new_order();
	void report_models();
	void report_parts();

private:
	vector<order> orders = {};
	vector<customer> customers = {};
	vector<salesAssociate> associates = {};
	vector<RobotModel> models = {};
	vector<robotArm> arms = {};
	vector<robotbattery> bateries = {};
	vector<robothead> heads = {};
	vector<robotLocomotor> Locomotors = {};
	vector<robotTorso> torsos = {};

};