#pragma once
#ifndef EMPLOYEE_h
#define EMPLOYEE_h
#include <bits/stdc++.h>
#include"staffMember.h"
using namespace std;

class employee:public staffMember
{
protected:
	string socialSecurityNumber;
public:
	employee();
	void read();
	virtual void print() = 0;
	virtual double pay() = 0;
	~employee();
};
#endif
