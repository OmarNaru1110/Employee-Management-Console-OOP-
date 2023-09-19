#include "hourly.h"

hourly::hourly()
{
}

void hourly::read()
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
	cout << "Hours Worked: ";
	cin >> hoursWorked;
	cout << "Rate: ";
	cin >> rate;

}

void hourly::print()
{
	cout << "  Employee ID: " << empID
		<< "\n Employee Name: " << empName
		<< "\n Employee Phone Number: " << empPhone
		<< "\n Employee Email Address: " << empEmail
		<< "\n Employee Social Security Number: " << socialSecurityNumber
		<< "\n Employee Salary: " << pay() << endl;
}

double hourly::pay()
{
	return rate*hoursWorked;
}


hourly::~hourly()
{
}
