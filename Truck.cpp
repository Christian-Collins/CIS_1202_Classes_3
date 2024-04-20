#include "Truck.h"
#include <iostream>
void Truck::displayInfo() const
{
	Vehicle::displayInfo();
	cout << "\nTowing capacity: " << towCapacity << endl << endl;
}