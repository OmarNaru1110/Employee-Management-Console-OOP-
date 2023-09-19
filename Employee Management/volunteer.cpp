#include "volunteer.h"

volunteer::volunteer()
{
}

void volunteer::read()
{
	cout << "Enter Employee ID: ";
	cin >> empID;
	cout << "Enter Employee Name: ";
	cin >> empName;
	cout << "Enter Employee PhoneNumber: ";
	cin >> empPhone;
	cout << "Enter Employee Email Address: ";
	cin >> empEmail;
	cout << "Enter Volunteer Amount: ";
	cin >> amount;
	cout << "Enter Department ID: ";
	cin >> empDepartID;
}

void volunteer::print()
{
	cout << "Volunteer ID: " << empID
		<< "\n Volunteer Name: " << empName
		<< "\n Volunteer Phone Number: " << empPhone
		<< "\n Volunteer Email Address: " << empEmail << endl;
}

double volunteer::pay()
{
	return 0;
}

volunteer::~volunteer()
{
}
