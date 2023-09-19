#pragma once
#ifndef BUDGET_h
#define BUDGET_h
#include <bits/stdc++.h>
using namespace std;

class budget
{
	string budgetID;
	string projectID;
	double value;
public:
	budget();
	void read();
	void increaseBudget(double amount);
	~budget();
};
#endif
