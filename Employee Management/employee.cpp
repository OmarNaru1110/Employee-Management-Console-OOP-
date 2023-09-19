#include"employee.h"

employee::employee()
{
}

void employee::read()
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
}

employee::~employee()
{
}
