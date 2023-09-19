#include "commission.h"

commission::commission()
{
}

void commission::read()
{
	cout << "Enter Employee ID: ";
	cin >> empID;
	cout << "Enter Employee Name: ";
	cin >> empName;
	cout << "Enter Employee PhoneNumber: ";
	cin >> empPhone;
	cout << "Enter Employee Email Address: ";
	cin >> empEmail;
	cout << "Enter Social Security Number: ";
	cin >> socialSecurityNumber;
	cout << "Enter Department ID: ";
	cin >> empDepartID;
	cout << "Target: ";
	cin >> target;
}

double commission::pay()
{
	return .05*target;
}

void commission::print()
{
	cout << "  Employee ID: " << empID
		<< "\n Employee Name: " << empName
		<< "\n Employee Phone Number: " << empPhone
		<< "\n Employee Email Address: " << empEmail 
		<< "\n Employee Salary: " << pay() << endl;
}

commission::~commission()
{
}
