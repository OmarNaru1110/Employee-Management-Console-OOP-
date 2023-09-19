#pragma once
#ifndef SALARIED_h
#define SALARIED_h
#include <bits/stdc++.h>
#include"employee.h"
using namespace std;

class salaried:public employee
{
	
public:
	double salary;
	salaried();
	double pay();
	void read();
	void print();
	~salaried();

};
#endif

