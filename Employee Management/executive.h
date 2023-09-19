#pragma once
#ifndef EXECUTIVE_h
#define EXECUTIVE_h
#include <bits/stdc++.h>
#include"salaried.h"
using namespace std;

class executive:public salaried
{
	double bonus;
public : 
	executive();
	void addBonus(double moreBonus);
	void read();
	double pay();
	void print();
	~executive();
};

#endif

