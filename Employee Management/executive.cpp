#include "executive.h"

executive::executive()
{
}

void executive::addBonus(double moreBonus)
{
	bonus += moreBonus;
}

void executive::read()
{
	salaried::read();
	cout << "Bonus: ";
	cin >> bonus;
}

double executive::pay()
{
	return salary+bonus;
}

void executive::print()
{
	cout << "  Employee ID: " << empID
		<< "\n Employee Name: " << empName
		<< "\n Employee Phone Number: " << empPhone
		<< "\n Employee Email Address: " << empEmail << endl;
}

executive::~executive()
{
}
