#include "Question.h"
#include <iostream>
#include<string>
using namespace std;

#ifndef MCQ_H
#define MCQ_H

class mcq:public Question{
private:
	string *choices_;
	int size_;
	int i_;

public:
	mcq(string text, string choices[], unsigned int points,int size,int i);
	mcq(const mcq& m);
	~mcq();
	void ask()const;
};







#endif