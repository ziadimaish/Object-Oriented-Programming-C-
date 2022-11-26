#include"Question.h"
#include <iostream>
#include <string>
using namespace std;

Question::Question(string text, string answer, unsigned int points)
{
	text_ = text;
	answer_ = answer;
	points_ = points;
}

void Question::ask() const
{
	cout << text_ << "?\t\t" << "(" << points_ << ")" << endl;
}

string Question::get_answer() const
{
	return answer_;
}

int Question::get_points() const
{
	return points_;
}

bool Question::is_correct(string answer) const
{
	if (answer_ == answer)
		return true;
	else

	return false;
}
