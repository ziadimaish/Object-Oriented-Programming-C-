#include "Customer.h"
#include <iostream>
#include <string>
using namespace std;

int Customer::numOfCustomers = 0;
Customer::Customer(int customerid, string customern, string item[]) :customer_ID(customerid)
{
	numOfCustomers++;
	customer_n = customern;
	for (int i = 0; i < 5; i++) {
		items[i] = item[i];
	}
	}



Customer::Customer(const Customer& c):customer_ID(c.customer_ID)
{
	customer_n = c.customer_n;
	for (int i = 0; i < 5; i++) {
		items[i] = c.items[i];
	}
}



Customer::~Customer()
{
	numOfCustomers--;
}



void Customer::setName(string customern)
{
	customer_n = customern;
}

string Customer::getName()const
{
	return customer_n;
}


int Customer::getID() const
{
	return customer_ID;
}


void Customer::set_Items(int i, int item)
{
	items[i] = item;
}

string Customer::get_Items(int x)const
{
	if (x >= 0 && x < 5)
		return items[x];
	else
		return 0;
}



void Customer::setItems(string item[])
{
	for (int i = 0; i < 5; i++) {
		items[i] = item[i];
	}
}

string  Customer::getItems()const
{
	return * items ;
}


int Customer::getNumofcustomers()const
{
	return numOfCustomers;
}

