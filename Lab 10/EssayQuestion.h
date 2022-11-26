#include"Question.h"
#include<iostream>
#include<string>
using namespace std;

#ifndef ESSAYQUESTION_H
#define ESSAYQUESTION_H

class EQ:public Question {

public:

	EQ();

	EQ(string question,string answer,int points);

	void ask();

	~EQ();
};




#endif