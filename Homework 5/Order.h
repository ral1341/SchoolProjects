#pragma once
#include "std_lib_facilities.h"
#include "RobotModel.h"

class order
{
public:
	order(int num, string d, int c, int a, RobotModel m)
	{
		order_number = num;
		date = d;
		customer_index = c;
		associate_index = a;
		models.push_back(m);
	};
private:
	int order_number;
	string date;
	int customer_index;
	int associate_index;
	vector<RobotModel> models;
};

class customer
{
public:
	customer(string n, int i, double w)
	{
		name = n;
		id = i;
		wallet = w;
	};
	string get_name()
	{
		return name;
	};
	void add_order(order o)
	{
		orders.push_back(o);
	}

private:
	string name;
	int id;
	double wallet;
	vector<order> orders;

};

class salesAssociate
{
public:
	salesAssociate(string n, int i)
	{
		name = n;
		id = i;
	};
	string get_name()
	{
		return name;
	}
	void add_order(order o)
	{
		orders.push_back(o);
	}
private:
	string name;
	int id;
	vector<order> orders;

};



