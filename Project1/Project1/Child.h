#include<iostream>
#include<string>
#include"Father.h"
#pragma once
using namespace std;
class Child : public Father	
{
	string ChildName;
public:
	Child();
	~Child();
	string getChildName();
	void setChildName(string value);
	void virtual Print();
};

