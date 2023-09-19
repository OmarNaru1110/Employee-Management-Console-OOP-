#include "budget.h"

budget::budget()
{
}

void budget::read()
{
	cout << "Project ID:";
	cin >> projectID;
	cout << "Enter Budget ID: ";
	cin >> budgetID;
	cout << "Enter Budget Value: ";
	cin >> value;
}

void budget::increaseBudget(double amount)
{
	value += amount;
}

budget::~budget()
{
}
