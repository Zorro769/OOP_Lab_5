#include "Father.h"
#include<iostream>
Father::Father()
{
	setName("Uknown");
}
Father::~Father(){}

string Father::getName()
{
	return name;
}
void Father::setName(string value)
{
	name = value;
}
void Father::Print()
{
	std::cout <<"Father name: " << name << "\n";
}