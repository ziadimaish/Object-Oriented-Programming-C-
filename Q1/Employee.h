#include <iostream>
#include <string>
using namespace std;
#ifndef EMPLOYEES_H
#define EMPLOYEES_H

class Employee {
private:
	int id_;
	string name_;
	int salary_;
	string department_;
public:
	Employee();

	Employee(int id,int salary);
	
	Employee(int id, string name,int salary,string department);
	
	Employee(const Employee& e);

	void printInfo();

};
#endif