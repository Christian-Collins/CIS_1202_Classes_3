#pragma once
#include "Vehicle.h"
class Truck : public Vehicle
{
private:
	int towCapacity;
public:
	Truck() : Vehicle()
	{
		towCapacity = 0;
	}
	Truck(int tow, string manufacturer, int year) : Vehicle(manufacturer, year)
	{
		towCapacity = tow;
	}
	void displayInfo() const;

};

