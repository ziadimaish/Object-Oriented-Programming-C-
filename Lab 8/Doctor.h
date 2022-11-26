#include <iostream>
#include<string>
using namespace std;
#ifndef DOCTOR_H
#define DOCTOR_H

class Doctor {
private:
	int id_;
	string name_;
	float salary_;

public:
	Doctor();
	Doctor(int id, string name, float salary);
	Doctor(const Doctor& d);
	void setID(int id);
	void setName(string name);
	void setSalary(float salary);

	int getID();
	string getName();
	float getSalary();

	~Doctor();

	void printDetails();

};




#endif 
