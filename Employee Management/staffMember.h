#pragma once
#ifndef STAFFMEMBER_h
#define STAFFMEMBER_h
#include <bits/stdc++.h>
using namespace std;

class staffMember
{
protected:
	string empID;
	string empName;
	string empPhone;
	string empEmail;

	string empDepartID;

public:
	staffMember();
	string getID();
	virtual void read()=0;
	virtual void print()=0;
	virtual double pay() = 0;
	~staffMember();
};
#endif
