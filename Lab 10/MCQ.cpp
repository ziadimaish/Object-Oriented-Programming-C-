#include"Question.h"
#include"MCQ.h"
#include<iostream>
#include<string>
using namespace std;

MCQ::MCQ()
{	
	*choices_ = "Not Assigned";
	size_ = 0;
	index_ = 0;
}

MCQ::MCQ(string* choices, int size, int index)
{
	choices_ = choices;
	size_ = size;
	index_ = index;
}

void MCQ::setChoices(string *choices)
{
	choices_ = choices;
}


void MCQ::setSize(int size)
{
	size_ = size;
}

void MCQ::setIndex(int index)
{
	index_ = index;
}

string MCQ::getChoices()
{
	return *choices_;
}

int MCQ::getSize()
{
	return size_;
}

int MCQ::getIndex()
{
	return index_;
}

void MCQ::ask()
{
}

MCQ::~MCQ()
{
	cout << "Destructor of MCQ"<<endl;
}
