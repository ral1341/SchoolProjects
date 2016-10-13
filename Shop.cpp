#include "Shop.h"
#include "View.h"
#include "Customer.h"
#include "Order.h"
#include "salesAssociate.h"

void shop::new_part()
{
	string s;
	string n;
	int ID;
	double w;
	double p;
	string d;

	

	cout << "Enter the part Name: ";
	getline(cin, n);
	cout << "Enter the part Number: ";
	cin >> ID;
	cout << "Enter the part weight(killograms): ";
	cin >> w;
	cout << "Enter the part cost(dollars): ";
	cin >> p;
	getline(cin, s);
	cout << "Enter a brief description of the part: ";
	getline(cin, d);

	while (true)
	{
		cout << "what is the part type:" << endl;
		com_menu();
		getline(cin, s);

	
		if (s.compare("A") == 0)
		{
			double pc;
			cout << "What is the Maximum power consumed by this component (killowatts): ";
			cin >> pc;
			while (pc <= 0)
			{
				cout << "Invalid power Consumption. Please enter a positive number: ";
				cin >> pc;
			}
			robotArm a(pc,n,ID,w,p,d);
			arms.push_back(a);
			getline(cin, s);
			break;
		}
		else if (s.compare("T") == 0)
		{
			int c;
			cout << "How many battery Compartments (1-3): " << endl;
			cin >> c;
			while ((c < 1) && (c > 3))
			{
				cout << "invalid number of compartments. please enter a number between 1 and 3: " << endl;
				cin >> c;
			}
			robotTorso t(c, n, ID, w, p, d);
			torsos.push_back(t);
			getline(cin, s);
			break;
		}
		else if (s.compare("H") == 0)
		{
			robothead h(n, ID, w, p, d);
			heads.push_back(h);
			break;
		}
		else if (s.compare("B") == 0)
		{
			double mp;
			cout << "what is the max power output(Killowatt-hours): ";
			cin >> mp;
			while (mp <= 0)
			{
				cout << "invlaid max power. Please enter a positive nummber: ";
				cin >> mp;
			}
			robotbattery b(mp, n, ID, w, p, d);
			bateries.push_back(b);
			getline(cin, s);
			break;
		}
		else if (s.compare("L") == 0)
		{
			double ms, pc;
			cout << "What is the Max speed of the Locomotor: ";
			cin >> ms;
			while (ms <= 0)
			{
				cout << "Invalid max speed. Please enter a positive max speed: ";
				cin >> ms;
			}
			cout << "What is the maximum power Consumed by this part: ";
			cin >> pc;
			while (pc <= 0)
			{
				cout << "Invalid power consumption. Please Enter a Positive Number: ";
				cin >> pc;
			}
			robotLocomotor l(ms, pc, n, ID, w, p, d);
			Locomotors.push_back(l);
			getline(cin, s);
			break;
		}
		else
		{
			cout << "invalid type. please enter a valid type" << endl;
		}
	}
}

void shop::new_model()
{
	string Name;
	int ID, arm1_num, arm2_num, head_num, bat_num, loco_num, torso_num;
	double price;
	unsigned int command = 42;

	cout << "Please Enter the Models name: ";
	getline(cin, Name);

	cout << "Please Enter the Models ID number: ";
	cin >> ID;

	cout << "Please Enter the price of the New Model: ";
	cin >> price;

	cout << "Please seclect an arm for the model: " << endl;
	for (unsigned int i = 0; i < arms.size(); i++)
	{
		if (!arms[i].is_obsolete())
		{
			cout << "(" << i << ") " << arms[i].get_name() << endl;
		}
	}
	cout << "The number of the arm you want to use: ";
	cin >> command;
	while ((command < 0) || (command >= arms.size()))
	{
		cout << "Invalid part. Please select the number of the listed part: ";
		cin >> command;
	}
	arm1_num = command;
	cout << endl;

	cout << "Please seclect an arm for the model: " << endl;
	for (unsigned int i = 0; i < arms.size(); i++)
	{
		if (!arms[i].is_obsolete())
		{
			cout << "(" << i << ") " << arms[i].get_name() << endl;
		}
	}
	cout << "The number of the arm you want to use: ";
	cin >> command;
	while ((command < 0) || (command >= arms.size()))
	{
		cout << "Invalid part. Please select the number of the listed part: ";
		cin >> command;
	}
	arm2_num = command;
	cout << endl;

	cout << "Please seclect a head for the model: " << endl;
	for (unsigned int i = 0; i < heads.size(); i++)
	{
		if (!heads[i].is_obsolete())
		{
			cout << "(" << i << ") " << heads[i].get_name() << endl;
		}
	}
	cout << "The number of the head you want to use: ";
	cin >> command;
	while ((command < 0) || (command >= heads.size()))
	{
		cout << "Invalid part. Please select the number of the listed part: ";
		cin >> command;
	}
	head_num = command;
	cout << endl;

	cout << "Please seclect a battery for the model: " << endl;
	for (unsigned int i = 0; i < bateries.size(); i++)
	{
		if (!bateries[i].is_obsolete())
		{
			cout << "(" << i << ") " << bateries[i].get_name() << endl;
		}
	}
	cout << "The number of the battery you want to use: ";
	cin >> command;
	while ((command < 0) || (command >= bateries.size()))
	{
		cout << "Invalid part. Please select the number of the listed part: ";
		cin >> command;
	}
	bat_num = command;
	cout << endl;

	cout << "Please seclect a Locomotor for the model: " << endl;
	for (unsigned int i = 0; i < Locomotors.size(); i++)
	{
		if (!Locomotors[i].is_obsolete())
		{
			cout << "(" << i << ") " << Locomotors[i].get_name() << endl;
		}
	}
	cout << "The number of the Locomotor you want to use: ";
	cin >> command;
	while ((command < 0) || (command >= Locomotors.size()))
	{
		cout << "Invalid part. Please select the number of the listed part: ";
		cin >> command;
	}
	loco_num = command;
	cout << endl;

	cout << "Please seclect a Torso for the model: " << endl;
	for (unsigned int i = 0; i < torsos.size(); i++)
	{
		if (!torsos[i].is_obsolete())
		{
			cout << "(" << i << ") " << torsos[i].get_name() << endl;
		}
	}
	cout << "The number of the Torso you want to use: ";
	cin >> command;
	while ((command < 0) || (command >= torsos.size()))
	{
		cout << "Invalid part. Please select the number of the listed part: ";
		cin >> command;
	}
	torso_num = command;
	cout << endl;

	RobotModel new_model(Name, ID, price, arms[arm1_num], arms[arm2_num], heads[head_num], bateries[bat_num], Locomotors[loco_num], torsos[torso_num]);
	new_model.set_energy();
	models.push_back(new_model);
	getline(cin, Name);
}

void shop::new_customer()
{
	string name, s;
	int ID;
	double cash;

	cout << "What is your customers name: ";
	getline(cin, name);

	cout << "What is your customers ID number: ";
	cin >> ID;

	cout << "What is your customers price limit: ";
	cin >> cash;

	Customer BC(name, ID, cash);
	customers.push_back(BC);

	getline(cin, s);
}

void shop::new_associate()
{
	string name, s;
	int ID;

	cout << "What is your Employees Name: ";
	getline(cin, name);

	cout << "What is the Employees ID number: ";
	cin >> ID;

	salesAssociate SA(name, ID);
	associates.push_back(SA);

	getline(cin, s);
}

void shop::new_order()
{
}

void shop::report_orders()
{
}

void shop::report_customers()
{
}

void shop::report_associates()
{
}

void shop::report_models()
{
}

void shop::report_parts()
{
	string s = "start";

	while (s.compare("Q") != 0)
	{

	
	part_menu();
	getline(cin, s);

	if (s.compare("L") == 0)
	{
		cout << "Arms:" << endl;
		for (unsigned int i = 0; i < arms.size(); i++)
		{
			cout << arms[i].get_name() << " " << arms[i].get_description() << " " << "obsolete: " << arms[i].is_obsolete << endl;
		}
		cout << endl;

		cout << "Heads:" << endl;
		for (unsigned int i = 0; i < heads.size(); i++)
		{
			cout << heads[i].get_name() << " " << heads[i].get_description() << " " << "obsolete: " << heads[i].is_obsolete << endl;
		}
		cout << endl;

		cout << "Batteries:" << endl;
		for (unsigned int i = 0; i < bateries.size(); i++)
		{
			cout << bateries[i].get_name() << " " << bateries[i].get_description() << " " << "obsolete: " << bateries[i].is_obsolete() << endl;
		}
		cout << endl;

		cout << "Locomotors:" << endl;
		for (unsigned int i = 0; i < Locomotors.size(); i++)
		{
			cout << Locomotors[i].get_name() << " " << Locomotors[i].get_description() << " " << "obsolete: " << Locomotors[i].is_obsolete() << endl;
		}
		cout << endl;

		cout << "Torsos:" << endl;
		for (unsigned int i = 0; i < torsos.size(); i++)
		{
			cout << torsos[i].get_name() << " " << torsos[i].get_description() << " " << "obsolete: " << torsos[i].is_obsolete();
		}
		cout << endl;
	}
	else if (s.compare("H") == 0)
	{
		com_menu();
		getline(cin, s);

		if (s.compare("A"))
		{

		}

		else if (s.compare("H") == 0)
		{

		}

		else if (s.compare("L") == 0)
		{

		}

		else if (s.compare("B") == 0)
		{

		}

		else if (s.compare("T") == 0)
		{

		}
	}
	else if (s.compare("Q") == 0)
	{

	}
	else
	{
		cout << "Invalid Command. Please enter valid Command" << endl;
	}
	s = "continue";
	
	}
}
