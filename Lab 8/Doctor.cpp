#include "Doctor.h"
#include <iostream>
#include<string>
using namespace std;

Doctor::Doctor()
{
	id_ = 0;
	name_ = "";
	salary_ = 0;
}

Doctor::Doctor(int id, string name, float salary)
{
	id_ = id;
	name_ = name;
	salary_ = salary;
}

Doctor::Doctor(const Doctor& d)
{
	id_ = d.id_;
	name_ = d.name_;
	salary_ = d.salary_;
}

void Doctor::setID(int id)
{
	id_ = id;
}

void Doctor::setName(string name)
{
	name_ = name;
}

void Doctor::setSalary(float salary)
{
	salary_ = salary;
}

int Doctor::getID()
{
	return id_;
}

string Doctor::getName()
{
	return name_;
}

float Doctor::getSalary()
{
	return salary_;
}

Doctor::~Doctor()
{
	delete& id_;
	delete& name_;
	delete& salary_;
}

void Doctor::printDetails()
{
	cout << "ID: " << id_ << "Name: " << name_ << "Salary: " << salary_ << endl;
}
