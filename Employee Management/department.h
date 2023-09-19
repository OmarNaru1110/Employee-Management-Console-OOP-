#pragma once
#ifndef DEPARTMENT_h
#define DEPARTMENT_h
#include <bits/stdc++.h>

using namespace std;
class department
{
protected:
	string departID;
	string departName;



public:
	department();
	department(string, string);
	void read();
	~department();



	void print();
};

#endif