#include "salaried.h"

salaried::salaried()
{
}

double salaried::pay()
{
    return salary;
}

void salaried::read()
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
    cout << "Enter Employee Salary: ";
    cin >> salary;

    

}

void salaried::print()
{
	cout << "  Employee ID: " << empID
		<< "\n Employee Name: " << empName
		<< "\n Employee Phone Number: " << empPhone
		<< "\n Employee Email Address: " << empEmail
		<< "\n Employee Salary: " << pay() << endl;
}

salaried::~salaried()
{
}
