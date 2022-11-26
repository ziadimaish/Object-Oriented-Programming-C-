#include <iostream>
#include<string>
using namespace std;
#ifndef TIME_H
#define TIME_H

class Time {
private:
	unsigned int hour_;
	unsigned int minute_;
	unsigned int second_;

public:

	Time(unsigned int hour=0, unsigned int minute=0, unsigned int second=0);

	unsigned int getHour()const;
	unsigned int getMinute()const;
	unsigned int getSecond()const;

	void print()const;
};


#endif 

