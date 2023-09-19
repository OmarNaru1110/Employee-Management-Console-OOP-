#pragma once
#ifndef HOURLY_h
#define HOURLY_h
#include <bits/stdc++.h>
#include"employee.h"
using namespace std;

class hourly:public employee
{
	double hoursWorked;
	double rate;
public:
	hourly();
	void read();
	void print();
	double pay();
	~hourly();
};
#endif

