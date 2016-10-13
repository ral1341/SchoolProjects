#pragma once
#include "std_lib_facilities.h"
#include "Order.h"

class salesAssociate
{
public:
	salesAssociate(string n, int ID)
		:name(n), ID(ID) {};
	string get_name();
	int get_ID();
	void view_orders();

private:
	string name;
	int ID;
	vector<order> sales;
};