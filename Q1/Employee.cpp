#include "Employee.h"
#include<iostream>
#include<string>
using namespace std;

Employee::Employee() 
{
	id_ = 0;
	name_ = "No Name";
	salary_ = 0;
	department_ = "No Name";
}



Employee::Employee(int id=0, string name="No Name", int salary=0, string department="No Department")
{
	id_ = id;
	name_ = name;
	salary_ = salary;
	department_ = department;

}

Employee::Employee(const Employee& e)
{
	id_ = e.id_;
	name_ = e.name_;
	salary_ =e.salary_;
	department_ = e.department_;


}


Employee::Employee(int id, int salary)
{
	id_ = id;
	name_ = "No Name";
	salary_ = salary;
	department_ = "No Name";
}



void Employee::printInfo()
{
	cout << "id: " << id_ << "\nname: " << name_ << "\nsalary: " << salary_ << "\ndepartment: " <<department_ ;
}















