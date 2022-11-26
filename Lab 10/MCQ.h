#include"Question.h"
#include<iostream>
#include<string>
using namespace std;

#ifndef MCQ_H
#define MCQ_H


class MCQ:public Question {

private:
	string* choices_;
	int size_;
	int index_;

public:
	
	MCQ();

	MCQ(string* choices, int size,int index);


	void setChoices(string *choices);
	void setSize(int size);
	void setIndex(int index);
	string getChoices();
	int getSize();
	int getIndex();

	void ask();

	~MCQ();




};










#endif
