#include "Hospital.h"
#include "Doctor.h"
#include <iostream>
#include<string>
using namespace std;

Hospital::Hospital(int hospital_num, string hospital_location)
{
	Hospital_id_ = hospital_num;
	Hospital_location_ = hospital_location;

}

void Hospital::setDoctrors(Doctor* n, int num_of_Doctors)
{
	if (Doctors != NULL)
		Doctors = NULL;

	 Doctors = new Doctor[num_of_Doctors];
	 for (int i = 0; i < num_of_Doctors; i++) {
		 Doctors[i] = n[i];
	 }

}

Hospital::~Hospital()
{
	delete& Hospital_id_;
	delete& Hospital_location_;
	delete& num;
	delete& Doctors;
}

Hospital::Hospital(const Hospital& h)
{
	Hospital_id_ = h.Hospital_id_;
	Hospital_location_ = h.Hospital_location_;
}

int Hospital::GetTotalSalaries()
{
	int sum = 0;
	for (int i = 0; i < num; i++) {
		sum += Doctors[i].getSalary();
	}
	return sum;
}

void Hospital::printDetails()
{
	cout << "ID: " << Hospital_id_ << " Location: " << Hospital_location_ << endl;
}

int Hospital::find(string doctor_name)
{
	for (int i = 0; i < num; i++) {
		if (Doctors[i].getName() == doctor_name)
			return i;
	
	}
	return -1;
}
