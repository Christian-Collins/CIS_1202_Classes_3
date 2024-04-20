#pragma once
#include "Vehicle.h"
class Car : public Vehicle
{
private:
	int doors;
public:
	Car() : Vehicle()
	{
		doors = 0;
	}
	Car(int door, string manufacturer, int year) : Vehicle(manufacturer, year)
	{
		doors = door;
	}
	void displayInfo() const;
};

