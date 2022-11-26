#include "Author.h"
#include <iostream>
#include <string>
using namespace std;


Author::Author(string name, string birth_place, string biography)
{
	name_ = name;
	birth_place_ = birth_place;
	biography_ = biography;
}

Author::Author(const Author& a)
{
	name_ = a.name_;
	birth_place_ = a.birth_place_;
	biography_ = a.biography_;
}

void Author::print()
{
	cout << "Name:" << getName() << "  Birth Place:" << getBirthp() << "  Biography:" << getBiography();
}

void Author::setName(string name)
{
	name_ = name;
}

void Author::setBirthp(string birth_place)
{
	birth_place_ = birth_place;
}

void Author::setBiography(string biography)
{
	biography_ = biography;
}

string Author::getName()
{
	return name_;
}

string Author::getBirthp()
{
	return birth_place_;
}

string Author::getBiography()
{
	return biography_;
}

bool Author::isEqualTo(Author& a)
{
	if (a.getName() == getName() && a.getBirthp() == getBirthp() && a.getBiography() == getBiography())
	return true;
	else 
	return false;
}

int Author::compareTo(Author a, char ch)
{
	if (ch == 'n') {
		if (getName() > a.getName()) {
			return 1;
		}
		if (getName() < a.getName()) {
			return -1;
		}
		else
			return 0;
	}
	else
		if (ch == 'b') {
			if (getBirthp() > a.getBirthp()) {
				return 1;
			}
			if (getBirthp() < a.getBirthp()) {
				return -1;
			}
			else
				return 0;
		}
		else
			cout << "Error! Plese enter the letters (b) or (n).\n";
	return 0;
}
