#include"mcq.h"
#include"Question.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	int total = 0;
	string answer;
	Question q1("What is the capital of Jordan", "Amman", 10);
	q1.ask();
	cin >> answer;
	if (q1.is_correct(answer)){
		cout << "CORRECT !\n" << endl;
	total += q1.get_points();
}
	else
		cout << "WRONG !\n"<<endl;


	Question q2("What is the capital of Syria", "Damascus", 10);
	q2.ask();
	cin >> answer;
	if (q2.is_correct(answer)) {
		cout << "CORRECT !\n" << endl;
		total += q2.get_points();
	}
	else
		cout << "WRONG !\n";


	string choices[] = { "BMW","Fiat","Ferrari","Bugatti" };
	mcq m1("What car from those is German",choices, 10, 4, 1);
	m1.ask();
	cin >> answer;
	if(m1.is_correct(answer))
	{
		cout << "CORRECT !\n" << endl;
		total += m1.get_points();
	}
	else
		cout << "WRONG !\n";


	string choices2[] = { "Amman","Irbid","Dubai","Egypt" };
	mcq m2("What one from those is a country", choices2, 10, 4, 3);
	m2.ask();
	cin >> answer;
	if (m2.is_correct(answer))
	{
		cout << "CORRECT !\n" << endl;
		total += m2.get_points();
	}
	else
		cout << "WRONG !\n";


	cout << "\n\n\n The Total mark is:" << total << endl;
	return 0;
}