#include "project.h"

project::project()
{
	budgetCount = 0;
	
}

void project::read()
{
	cout << "__Enter Project Details__\n";
	cout << "Project ID: ";
	cin >> projectID;
	cout << "Project Location: ";
	cin >> location;
	cout << "Project Current Cost: ";
	cin >> currentCost;
	cout << "Manager ID: ";
	cin >> managerID;

}

void project::addBudget()
{
	budgetList[budgetCount++].read();
}

void project::getTotalBudget()
{
}

void project::print()
{
	cout << "Project ID: " << projectID << endl;	
	cout << "Location: " << location << endl;
	cout << "Current Cost: " << currentCost << endl;
	cout << "Manager ID: " << managerID << endl;
	
	

}

project::~project()
{
}
