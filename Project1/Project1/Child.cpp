#include "Child.h"
#include<string>
Child::Child()
{
	setChildName("Uknown");
}
Child::~Child(){}

string Child::getChildName()
{
	return ChildName;
}
void Child::setChildName(string value)
{
	ChildName = value;
}
void Child::Print()
{
	cout << "Child Name: \n" << ChildName <<" "<< name << "vich";
}