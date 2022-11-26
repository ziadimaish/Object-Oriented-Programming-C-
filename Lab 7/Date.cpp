#include "Date.h"
#include <iostream>
#include<string>
using namespace std;

Date::Date(unsigned int day, unsigned int month, unsigned int year) :day_(day), month_(month), year_(year)
{
	if (month > 12) {
		month = 12;
	}


	if (month==2 && day>28) {
		day = 28;
	}
	else 

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 && day > 31) {
		day = 31;
	}
	else
		if (day > 30)
			day = 30;
}

unsigned int Date::getDay()const
{
	return day_;
}

unsigned int Date::getMonth()const
{
	return month_;
}

unsigned int Date::getYear()const
{
	return year_;
}

void Date::print()const
{
	cout << day_ << "/" << month_ << "/" << year_;
}
