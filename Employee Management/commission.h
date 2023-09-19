#pragma once
#ifndef COMMISSION_h
#define COMMISSION_h
#include <bits/stdc++.h>
#include"employee.h"
using namespace std;

class commission:public employee
{
public:
	double target;
	commission();
	void read();
	double pay();
	void print();
	~commission();
};

#endif

