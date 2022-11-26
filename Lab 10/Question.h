#include<iostream>
#include<string>
using namespace std;

#ifndef QUESTION_H
#define QUESTION_H

class Question {
protected:
	string text_;
	string answer_;
	int points_;

public:
	Question();
	Question(string text,string answer,int points);

	void setText(string text);
	void setAnswer(string answer);
	void setPoints(int points);

	string getText();
	string getAnswer();
	int getPoints();

	bool is_correct(string answer);

	virtual void ask()=0;

	virtual ~Question();

};
#endif 
