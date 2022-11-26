#include "flight.h"
#include "Passenger.h"
#include<iostream>
#include <iostream>
#include<string>

using namespace std;

int main()
{
	
	Time t1(1, 2, 3);
	Date d1(3, 4, 2021);
	Flight f1("RJ-0987", "NY", "AMM", d1, t1);

	cout << "Passengers:" << endl;
	Passenger p1("Ibrahim AlIbrahimi", "Egypt", "E9987",  Date(1, 1, 2020));
	Passenger p2("Khaled Khalil", "Palestine", "P1937",  Date(2, 2, 1999));
	Passenger p3("Salma Salam", "Jordan", "J9987",  Date(1, 12, 1987));
	Passenger p4("Hala Hilal", "Algeria", "A9991",  Date(13, 11, 1971));
	
	f1.print();

	return 0;
}