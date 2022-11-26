#include <iostream>
#include <string>
using namespace std;
#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer{
private:
	string customer_n;
	const int customer_ID;
	string items[5];
	static int numOfCustomers;
public:
	Customer(int customerid, string customern, string item[]);
	Customer(const Customer& c);
	~Customer();

	void setName(string customern);
	string getName()const;

	
	int getID()const;

	void setItems(string item[]);
	string  getItems()const;

	
	int getNumofcustomers()const;

	void set_Items(int i, int item);
	string get_Items(int x)const;


};


#endif