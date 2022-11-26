#include <iostream>
#include<string>
using namespace std;

#ifndef QUESTION_H
#define QUESTION_H

class Question{
protected:
	string text_;
	string answer_;
	unsigned int points_;

public:
	Question(string text_,string answer,unsigned int points);
	
	void ask()const;
	string get_answer()const;
	int get_points()const;
	bool is_correct(string answer)const;

};



#endif 
