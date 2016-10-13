#pragma once
#include "std_lib_facilities.h"
#include "Customer.h"
#include "salesAssociate.h"
#include "RobotModel.h"

class order
{
public:
	

private:
	int order_num;
	string date;
	Customer BC;
	salesAssociate SA;
	vector<RobotModel> models = {};
	bool status;
};