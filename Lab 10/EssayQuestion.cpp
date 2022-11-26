#include "EssayQuestion.h"
#include"Question.h"
#include<iostream>
#include<string>
using namespace std;

EQ::EQ()
{
	text_ = "Not Assigned";
	answer_ = "Not Assigned";
	points_ = 00;
}

EQ::EQ(string question, string answer, int points)
{
	text_ = question;
	answer_ = answer;
	points_ = points;
}

void EQ::ask()
{
}

EQ::~EQ()
{
}
