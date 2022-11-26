#include"Question.h"
#include<iostream>
#include<string>
using namespace std;

Question::Question()
{
	text_ = "Not Assigned";
	answer_ = "Not Assigned";
	points_ = 00;
}

Question::Question(string text, string answer, int points)
{
	text_ = text;
	answer_ = answer;
	points_ = points;

}

void Question::setText(string text)
{
	text_ = text;

}

void Question::setAnswer(string answer)
{
	answer_ = answer;

}

void Question::setPoints(int points)
{
	points_ = points;

}

string Question::getText()
{
	return text_;
}

string Question::getAnswer()
{
	return answer_;
}

int Question::getPoints()
{
	return points_;
}

bool Question::is_correct(string answer)
{
	if (answer_== answer)
		return true;
	else
		return false;
}

void Question::ask()
{
	cout << text_<<endl;
}

Question::~Question()
{
}
