#include<iostream>
#include <string>
using namespace std;
#ifndef BINARY_H
#define BINARY_H

class Binary{
private:
	string binary_;
	unsigned int decimal_;

	unsigned int convertToDecimal(string);
	string convertToBinary(unsigned int);

public:
	void setBinary(string binary);
	void setDecimal(unsigned int decimal);

	string getBinary();
	unsigned int getDecimal();

	bool isGreaterThan(Binary other);

	void add(Binary other);

	unsigned int plus(Binary other);

	Binary(string binary);
	Binary(unsigned int decimal);
};

#endif