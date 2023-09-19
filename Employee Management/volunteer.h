#pragma once
#ifndef VOLUNTEER_h
#define VOLUNTEER_h
#include <bits/stdc++.h>
#include"staffMember.h"
using namespace std;

class volunteer:public staffMember
{
	int amount;
public:
	volunteer();
	void read();
	void print();
	double pay();

	~volunteer();
};
#endif

