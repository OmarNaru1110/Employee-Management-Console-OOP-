#include "department.h"

department::department()
{

}

department::department(string id, string name)
{
	departID = id;
	departName = name;
}

void department::read()
{
	cout << "Enter Department Details\n"
		<< "Department id: ";
	cin >> departID;
	cout << "Department Name: ";
	cin >> departName;



}




department::~department()
{
}

void department::print()
{
	cout << "Department ID: \t" << departID << endl;
	cout << "Department Name: \t" << departName << endl;

	cout << "-----------------------------" << endl;
}
