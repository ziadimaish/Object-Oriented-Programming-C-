#include "Passenger.h"
#include <iostream>
#include<string>
using namespace std;

Passenger::Passenger() : name_("Null"), nationality_("Null"), passport_number_("Null"), dob_( Date(1, 1, 1900))
{
}

Passenger::Passenger(string name, string nationality, string pnum, Date dob):name_(name), nationality_(nationality), passport_number_(pnum), dob_(dob)
{
}

void Passenger::setName(string name)
{
	name_ = name;
}

void Passenger::setNationality(string nationality)
{
	nationality_ = nationality;
}

void Passenger::setPassportNumber(string pnum)
{
	passport_number_ = pnum;
}

void Passenger::setDoB(Date dob)
{
	dob_ = dob;
}

string Passenger::getName()
{
	return name_;
}

string Passenger::getNationality()
{
	return nationality_;
}

string Passenger::getPassportNumber()
{
	return passport_number_;
}

Date Passenger::getDoB()
{
	return dob_;
}

void Passenger::print()
{
	cout << name_ << " from " << nationality_ << " passport no. " << passport_number_ << ", " << "DoB: ";
	cout << getDoB;
}
