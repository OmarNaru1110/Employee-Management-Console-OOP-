#pragma once
#ifndef STAFF_h
#define STAFF_h
#include <bits/stdc++.h>
#include"staffMember.h"
#include"hourly.h"
#include"salaried.h"
#include"executive.h"
#include"commission.h"
#include"volunteer.h"
#include"employee.h"
using namespace std;

class staff
{
	int staffCount;
	staffMember **staffList;

public:
	staff();
	void calcPayroll();
	void addMember();
	void delMember(string);
	void showAll();


	~staff();
};
#endif
