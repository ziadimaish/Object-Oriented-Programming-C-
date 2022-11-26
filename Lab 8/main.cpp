#include "Doctor.h"
#include "Hospital.h"
#include<iostream>
#include<string>
using namespace std;

int main() { 
	
	Hospital hospital1(1, "Amman");
	int id;
	float salary;
	string name;

	Doctor arr[3];
	for (int i = 0; i < 3; i++) {
		cout << "Enter ID: ";
		cin >> id;
		arr[i].setID(id);

		cout << "Enter Name: ";
		cin >> name;
		arr[i].setName(name);

		cout << "Enter Salary: ";
		cin >> salary;
		arr[i].setSalary(salary);
	}
	for (int i = 0; i < 3; i++) {
		hospital1.printDetails();
	}
	delete [1] arr;
	arr[1] = Doctor(052, "Ziad", 511.52);
	hospital1.printDetails();

	Hospital hospital2(hospital1);

	hospital1.printDetails();
	hospital2.printDetails();
	
	for (int i = 0; i < 3; i++) {
		if (hospital1.find("Ziad") == 1) {
			cout << "There is a doctor with the same name as yours\n";

		}
		else
			cout << "No doctor with the same name as yours found\n";
}
return 0; }