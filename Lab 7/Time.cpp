#include "Time.h"
#include <iostream>
#include<string>
using namespace std;

Time::Time(unsigned int hour, unsigned int minute, unsigned int second) :hour_(hour), minute_(minute), second_(second)
{
	if (hour > 23) {
		hour = 23;
	}
	

	if (minute > 59) {
		minute = 59;
	}
	

	if (second > 59) {
		second = 59;
	}
	
}

unsigned int Time::getHour()const
{
	return hour_;
}

unsigned int Time::getMinute()const
{
	return minute_;
}

unsigned int Time::getSecond()const
{
	return second_;
}

void Time::print()const
{
	if (hour_ < 10) cout << "0";
	cout << hour_ << ":";

	if (minute_ < 10) cout << "0";
	cout << minute_ << ":";

	if (second_ < 10) cout << "0";
	cout << second_;
	

}
