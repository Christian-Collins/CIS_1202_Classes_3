#pragma once
#include <string>
using namespace std;
class Vehicle
{
private:
	string manufacturer;
	int year;
public:
	void displayInfo() const;
	Vehicle()
	{
		manufacturer = "";
		year = 0;
	}
	Vehicle(string manufacturer1, int date) 
	{
		manufacturer = manufacturer1;
		year = date;
	}
};

