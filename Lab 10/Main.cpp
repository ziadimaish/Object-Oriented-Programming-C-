#include"Question.h"
#include"MCQ.h"
#include"EssayQuestion.h"
#include<iostream>
#include<string>
using namespace std;

#define s 10

int main(){

	int points[s];
	int choice[s];
	Question *q[s];
	string question;
	string answer;
	int index;
	int totalgrade = 0;


	cout << "Please choose the type of the quetions\n\n 1.MCQ \t 2.Essay Question\n\n";
	for (int i = 0; i < s; i++) {
		cout << "Qustion #" << i + 1 << ": ";
		cin >> choice[i];
		cout << "\n";
			}
	
	for (int i = 0; i < s; i++) {
		if (choice[i] == 1) {
			cout << "Please enter question #:" << i + 1 << "\t";
			cin >> question;
			cout << "Please enter the number of points for question#:" << i + 1 << "\t";
			cin >> points[i];
			cout << "\n";
			q[i]->setPoints(points[i]);
			for (int k = 0; k < 3; k++) {
				cout << i + 1 << ".";
				cin >> answer;
			}
		
		cout << "Select the right answer\n";
		cin >> index;
		MCQ(*answer, 4, index);
		
	}
		else
		if (choice[i] == 2) {
			cout << " Please type in the answer" << endl;
			cin >> answer;
			
			EQ e1(question, answer, points);
		}


		for (int i = 0; i < s; i++) {
		
			q[i]->ask();
			cin >> answer;
			if (q[i]->is_correct(answer)) {
				totalgrade += q[i]->getPoints();
			}
			else 
				continue;
			
		}

			cout << "Your exam mark is: " << totalgrade << endl;




	return 0;
}