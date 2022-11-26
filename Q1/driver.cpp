#include "Employee.h"
#include<iostream>
#include<string>
using namespace std;
	int main() {

		Employee e1;
		e1.printInfo();
		Employee e2(1111);
		e2.printInfo();
		Employee e3(2222, "Ali");
		e3.printInfo();
		Employee e4(3333, "leen", 700, "HR");
		e4.printInfo();
		Employee e5(4444, 550);
		e5.printInfo();
		Employee e6(5555, "HR");//Error is made because the compiler cannot take two constructors with the same parameters type
		e6.printInfo();
		Employee e7(e5);
		e7.printInfo();
		
		return 0;
	}