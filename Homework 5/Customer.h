#pragma once
#include "std_lib_facilities.h"
#include "Order.h"

class Customer
{
public:
	Customer(string n, int ID, double w)
		:name(n), customer_number(ID), wallet(w) {};
	string get_name();
	int get_ID();
	double get_wallet();
	void list_orders();

private:
	string name;
	int customer_number;
	double wallet;
	vector<order> purchases;
};