#include "Binary.h"
#include<iostream>
#include <string>
using namespace std;

unsigned int Binary::convertToDecimal(string str) {
    unsigned int sum = 0;
    int j = 0; // power
    for (int i = str.length() - 1; i >= 0; i--) {
        if (str[i] == '1')
            sum += pow(2, j);
        j++;
    }
    return sum;
}

string Binary::convertToBinary(unsigned int num) {
    string result = "";
    while (num > 0) {
        result = to_string(num % 2) + result;
        num /= 2;
    }
    return result;
}

void Binary::setBinary(string binary)
{
    binary_ = binary;
    decimal_ = convertToDecimal(binary);
}

void Binary::setDecimal(unsigned int decimal)
{
    decimal_ = decimal;
    binary_ = convertToBinary(decimal);
}

string Binary::getBinary()
{
    return binary_;
   
}

unsigned int Binary::getDecimal()
{
    return decimal_;
}

bool Binary::isGreaterThan(Binary other)
{
    if (decimal_ > other.getDecimal())
        return true;
    else 
        return false;
}

void Binary::add(Binary other)
{
    decimal_ += other.getDecimal();
}

unsigned int Binary::plus(Binary other)
{
   return  decimal_ += other.getDecimal();
   
}

Binary::Binary(string binary)
{
    setBinary(binary);
}

Binary::Binary(unsigned int decimal)
{
    setDecimal(decimal);
}

