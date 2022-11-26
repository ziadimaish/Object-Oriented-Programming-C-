#include "Doctor.h"
#include <iostream>
#include<string>
using namespace std;
#ifndef HOSPITAL_H
#define HOSPITAL_H

class Hospital {
private:
	int Hospital_id_;
	string Hospital_location_;
	int num;
	Doctor *Doctors;
public:
	Hospital(int hospital_num, string hospital_location);

	void setDoctrors(Doctor* n, int num_of_Doctors);

	~Hospital();

	Hospital(const Hospital& h);

	int GetTotalSalaries();

	void printDetails();

	int find(string doctor_name);
};

#endif