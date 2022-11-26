#include <iostream>
#include<string>
#include"Date.h"
using namespace std;
#ifndef PASSENGER_H
#define PASSENGER_H

class Passenger {
private:
	string name_;
	string nationality_;
	string passport_number_;
	Date dob_;
	
public:
	Passenger();
	Passenger(string name,string nationality,string pnum, Date dob);
	void setName(string name);
	void setNationality(string nationality);
	void setPassportNumber(string pnum);
	void setDoB(Date dob);
	string getName();
	string getNationality();
	string getPassportNumber();
	Date getDoB();
	void print();


};

#endif
