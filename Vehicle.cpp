#include "Vehicle.h"
#include <iostream>
void Vehicle::displayInfo() const
{
	cout << "Vehicle Information:\n";
	cout << "Manufacturer: " << manufacturer;
	cout << "\nYear Built: " << year;
}