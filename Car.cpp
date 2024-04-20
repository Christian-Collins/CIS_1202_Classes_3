#include "Car.h"
#include <iostream>
void Car::displayInfo() const
{
	Vehicle::displayInfo();
	cout << "\nDoors: " << doors << endl << endl;
}