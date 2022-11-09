#include<string>
#pragma once
using namespace std;
class Father
{
protected:
	string name;
public:
	Father();
	~Father();
	void virtual Print();
	string getName(void);
	void setName(string value);
};