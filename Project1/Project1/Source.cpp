#include<iostream>
#include<string>
#include"Child.h"
int main()
{
	Father dad;
	string name,ChildName;
	cout << "Enter dad name: \n";
	cin >> name;
	dad.setName(name);
	dad.Print();
	Child ch;
	cout << "Enter child name: \n";
	cin >> ChildName;
	ch.setChildName(ChildName);
	ch.setName(name);
	ch.Print();
}