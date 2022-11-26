#include <iostream>
#include<string>
#include"Date.h"
#include"Time.h"
using namespace std;
#ifndef FLIGHT_H
#define FLIGHT_H

class Flight {
private:
	string origin_;
	string destination_;
	string number;
	string departure_airport_;
	Time departure_time_;
	Date departure_date_;
public:
	Flight(string origin,string destination,string number,Date dd,Time dt);

	const Date& get_date()const;
	const Time& get_time()const;
	string get_origin()const;

	void print()const;
};

#endif