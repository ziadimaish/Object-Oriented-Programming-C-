#include <iostream>
#include<string>
using namespace std;
#ifndef DATE_H
#define DATE_H

class Date {
private:
	unsigned int day_;
	unsigned int month_;
	unsigned int year_;
public:
	Date(unsigned int day = 1, unsigned int month = 1, unsigned int year = 1900);

	unsigned int getDay()const;
	unsigned int getMonth()const;
	unsigned int getYear()const;

	void print()const;
	
};

#endif 
