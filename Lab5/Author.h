#include <iostream>
#include <string>
using namespace std;
#ifndef AUTHOR_H
#define AUTHOR_H

class Author {
private:
	string name_;
	string birth_place_;
	string biography_;
public:
	Author(string name_ = "", string birth_place_="",
	string biography_ = "");
	Author(const Author& a);
	bool isEqualTo( Author& a);
	int compareTo(Author, char);
	void print();
	void setName(string name);
	void setBirthp(string birth_place);
	void setBiography(string biography);
	string getName();
	string getBirthp();
	string getBiography();


};
#endif