#include "Flight.h"
#include "Date.h"
#include "Time.h"
#include <iostream>
#include<string>
using namespace std;


Flight::Flight(string origin, string destination, string number, Date dd, Time dt)
{
	origin = "";
	destination = "";
	number = "";
}

const Date& Flight::get_date() const
{
	return departure_date_;
}

const Time& Flight::get_time() const
{
	return departure_time_;
}

string Flight::get_origin() const
{
	return origin_;
}

void Flight::print() const
{
	cout << "Flight " << number << " From" << origin_ << " to " << destination_ << " on";
	departure_date_.print();
	cout<< " at";
	departure_time_.print();
}
