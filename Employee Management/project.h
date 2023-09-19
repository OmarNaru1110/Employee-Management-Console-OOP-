#pragma once
#ifndef PROJECT_h
#define PROJECT_h
#include <bits/stdc++.h>
#include"employee.h"
#include"budget.h"
using namespace std;

class project
{
	string projectID;
	string location;
	double currentCost;
	int budgetCount;
	budget budgetList[10];
	string managerID;
public :
	project();

	void read();
	void addBudget();
	void getTotalBudget();
	void print();
	~project();
};
#endif

