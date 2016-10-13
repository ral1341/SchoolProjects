#include "std_lib_facilities.h"
#include "Shop.h"
#include "View.h"

int main()
{
	shop store;
	string command = "start";

	while (command.compare("Q") != 0)
	{
		main_menu();
		getline(cin, command);

		if (command.compare("C") == 0)
		{
			while (command.compare("Q") != 0)
			{
				create_menu();
				getline(cin, command);

				if (command.compare("O") == 0)
				{
					store.new_order();
				}
				if (command.compare("C") == 0)
				{
					store.new_customer();
				}
				else if (command.compare("S") == 0)
				{
					store.new_associate();
				}
				else if (command.compare("M") == 0)
				{
					store.new_model();
				}

				else if (command.compare("P") == 0)
				{
					store.new_part();
				}
				else if (command.compare("Q") == 0)
				{
					continue;
				}
				else
				{
					cout << "Invalid Command. Please enter a valid command" << endl;
				}
			}
			command = "continue";
		}
		else if (command.compare("R") == 0)
		{
			while (command.compare("Q") != 0)
			{
				report_menu();
				getline(cin, command);

				if (command.compare("O") == 0)
				{
					store.list_orders();
				}
				else if (command.compare("C") == 0)
				{
					store.list_customers();
				}
				else if (command.compare("S") == 0)
				{
					store.list_associates();
				}
				else if (command.compare("M") == 0)
				{
					store.list_models();
				}
				else if (command.compare("P") == 0)
				{
					store.list_parts();
				}
				else if (command.compare("Q") == 0)
				{
					continue;
				}
				else
				{
					cout << "Invalid Command. Please enter a valid Command" << endl;
				}
			}
			command = "continue";
		}
		else if (command.compare("Q") == 0)
		{
			break;
		}
		else
		{
			cout << "Invalid Command. Please Enter Valid Command" << endl;
		}
	}
}