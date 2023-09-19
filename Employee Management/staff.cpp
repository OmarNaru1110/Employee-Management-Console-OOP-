#include "staff.h"

staff::staff()
{
	staffCount = 0;
	staffList = new staffMember * [50];
}

void staff::delMember(string id)
{
	if (staffCount == 0)
	{
		cout << "NO Members EXIST!";
		return;
	}
	bool deleted = false;
	for (int i = 0; i < staffCount; i++)
	{
		if (staffList[i]->getID() == id)
		{
			if (i == staffCount - 1)
				staffCount--;
			else
			{
				staffList[i] = staffList[staffCount - 1];
				staffCount--;
			}
			deleted = true;
			break;
		}
	}
	if (deleted)
		cout << "MEMBER DELETED SUCCESSFULLY!";
	else
		cout << "NO MEMBER EXIST!";

}

void staff::calcPayroll()
{
	double payroll = 0;
	for (int i = 0; i < staffCount; i++)
	{
		
		payroll+=staffList[i]->pay();
	}
	cout << payroll << endl;
}
void staff::addMember()
{
	int choice;
	cout << "Choose Your Member Type: \n"
		<< "[1] Hourly Employee\n"
		<< "[2] Salary Employee\n"
		<< "[3] Executive Employee\n"
		<< "[4] Commission Employee\n"
		<< "[5] Volunteer\n"
		<< "-----------------------------" << endl;
	cin >> choice;
	
	switch (choice)
	{
	case 1://hourly
	{
		staffList[staffCount] = new hourly();
		staffList[staffCount]->read();
		staffCount++;
		break;
	}
	case 2://Salary Employee
	{
		staffList[staffCount] = new salaried();
		staffList[staffCount]->read();
		staffCount++;
		break;
	}
	case 3://Executive Employee
	{
		staffList[staffCount] = new executive();
		staffList[staffCount]->read();
		staffCount++;
		break;
	}
	case 4://Commission Employee
	{
		staffList[staffCount] = new commission();
		staffList[staffCount]->read();
		staffCount++;
		break;
	}
	case 5://Volunteer
	{
		staffList[staffCount] = new volunteer();
		staffList[staffCount]->read();
		staffCount++;
		break;
	}
	default:
		cout << "Wrong Choice";
		break;
	}
}

staff::~staff()
{
	
}

void staff::showAll()
{
	if (staffCount == 0)
		cout << "No Members in the Staff!!" << endl;
	for (int i = 0; i < staffCount; i++)
	{
		staffList[i]->print();
	}
}
