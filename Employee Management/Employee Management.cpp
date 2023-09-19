#include <bits/stdc++.h>
#include"department.h"
#include"staff.h"
#include"project.h"
#include"budget.h"
using namespace std;

int projectCount=0;
project ps[5];

int departCount = 0;
department departs[10];

budget b;

int main()
{
	system("color 2");

	
	staff stf1;
	int choice = -1;
	while (choice)
	{
		cout << "--------------------------\n"
			<< "[1]  Add New Department\n"
			<< "[2]  Print All Departments\n"

			<< "[3]  Add New Member\n"
			<< "[4]  Print All Members\n"
			<< "[5]  Calculate Payroll\n"
			<< "[6]  Delete Member\n"

			<< "[7]  Add New Project\n"
			<< "[8]  Print All Projects\n"
			<< "[9]  Add Budget To Existing Project\n"
			<< "[10] Increase Budget To Existing Project\n"

			<< "[0]  Quiet\n"

			<< "Enter Your Choice__";
		cin >> choice;
		cout << "--------------------------\n" << endl;

		switch (choice)
		{
		case 1://Add new department
			departs[departCount++].read();
			break;

		case 2://Print all departments
			if (departCount == 0)
				cout << "No Departments Exist!" << endl;
			for (int i = 0; i < departCount; i++)
			{ 

					departs[i].print();
			}
				
			break;

		case 3://Add New Member
			stf1.addMember();
			break;
		case 4://Print All Members
			stf1.showAll();
			break;
		case 5://Calculate Payroll
			stf1.calcPayroll();
			break;
		case 6://Delete Member
		{
			string id;
			cout << "Enter Member ID: ";
			cin >> id;
			stf1.delMember(id);
			break;
		}
			
		case 7://Add New Project
			ps[projectCount++].read();
			break;
		case 8://Print All Projects
			if (projectCount == 0)
				cout << "NO PROJECTS EXIST!!" << endl;
			for (int i = 0; i < projectCount; i++)
			{
				ps[i].print();
				cout << "---------------------------" << endl;
			}
			break;
		case 9://Add Budget To Existing Project
			ps->addBudget();
			break;
		case 10://Increase Budget To Existing Project
		{
			double increase;
			b.read();
			cout << "Enter The Amount: ";
			cin >> increase;
			b.increaseBudget(increase);
			break;
		}
			

		default:
			
			break;


		}

	}





	return 0;
}

