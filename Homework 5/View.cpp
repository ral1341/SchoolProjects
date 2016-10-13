#include "View.h"
#include "std_lib_facilities.h"

void main_menu()
{
	cout << "Main Menu" << endl << "---------" << endl;
	cout << "1 (C)reate" << endl;
	cout << "2 (R)eprot" << endl;
	cout << "9 (Q)uit" << endl;
	cout << "Please enter a Command: ";
}

void create_menu()
{
	cout << "Create" << endl << "------" << endl;
	cout << "1.1 (O)rder" << endl;
	cout << "1.2 (C)ustomer" << endl;
	cout << "1.3 (S)ales Associate" << endl;
	cout << "1.4 Create Robot (M)odel" << endl;
	cout << "1.5 Create Robot (P)art" << endl;
	cout << "1.9 (Q)uit" << endl;
	cout << "Please enter a Command: ";
}

void report_menu()
{
	cout << "Report" << endl << "------" << endl;
	cout << "2.1 (O)rders" << endl;
	cout << "2.2 (S)ales Associates" << endl;
	cout << "2.3 (C)ustomers" << endl;
	cout << "2.4 Robot (M)odels" << endl;
	cout << "2.5 Robot (P)arts" << endl;
	cout << "2.9 (Q)uit" << endl;
	cout << "Please enter a Command: ";
}

void com_menu()
{
	cout << "Type" << endl << "----" << endl;
	cout << "1.5.1 Type (A)rm" << endl;
	cout << "1.5.2 Type (L)ocomotor" << endl;
	cout << "1.5.3 Type (B)attery" << endl;
	cout << "1.5.4 Type (H)ead" << endl;
	cout << "1.5.5 Type (T)orso" << endl;
	cout << "Please enter a Command: ";
}

void part_menu()
{
	cout << "Part Report" << endl << "-----------" << endl;
	cout << "2.5.1 (L)ist" << endl;
	cout << "2.5.2 (H)ide" << endl;
	cout << "2.5.9 (Q)uit" << endl;
	cout << "Please enter a Command: ";
}

void model_menu()
{
	cout << "Model Report" << endl << "------------" << endl;
	cout << "2.4.1 (L)ist" << endl;
	cout << "2.4.2 (H)ide" << endl;
	cout << "2.4.9 (Q)uit" << endl;
	cout << "Please enter a Command: ";
}

void order_menu()
{
}

void associate_menu()
{
	cout << "Associate Report" << endl << "----------------" << endl;
	cout << "2.3.1 (L)ist" << endl;
	cout << "2.3.2 (E)valuate" << endl;
	cout << "2.3.9 (Q)uit" << endl;
	cout << "Please enter a Command: ";
}

void customer_menu()
{
	cout << "Customer Report" << endl << "---------------" << endl;
	cout << "2.2.1 (L)ist" << endl;
	cout << "2.2.2 (V)iew" << endl;
	cout << "2.2.9 (Q)uit" << endl;
	cout << "Please enter a Command: ";
}
