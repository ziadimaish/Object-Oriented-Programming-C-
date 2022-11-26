#include"mcq.h"
#include"Question.h"
#include <iostream>
#include <string>
using namespace std;

mcq::mcq(string text, string choices[],unsigned int points, int size , int i) :Question(text, choices[i], points)
{
	choices_ = new string[size];
	for (int i = 0; i < size; i++) {
		choices_[i] = choices[i];
	}
	
	size_ = size;
	i_ = i;
	

}


mcq::mcq(const mcq& m):Question(m.text_,m.answer_,m.points_)
{
	size_ = m.size_;
	i_ = m.i_;
	choices_ = new string[size_];
	for (int i = 0; i < size_; i++) {
		choices_[i] = m.choices_[i];
	}
	

}

mcq::~mcq()
{
	delete [] choices_;
}

void mcq::ask() const
{
	cout << text_ << endl;
	
	for (int i = 0; i < size_; i++) {
		cout <<i+1<<"- " << choices_[i] << "?\t\t" << "(" << points_ << ")" << endl;
	}
	
}

