// Christian Collins
// CIS 1202 501
// April 20, 2024

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;
int main()
{
	string manufacturer;
	int year, doors, towCap;
	cout << "Vehicle Program\n\n";
	cout << "Vehicle:\n";
	cout << "Enter the manufacturer: "; 
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	Vehicle vehicle1(manufacturer, year);
	vehicle1.displayInfo();

	cout << "\n\nCar:\n";
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the number of doors: ";
	cin >> doors;
	Car car1(doors, manufacturer, year);
	car1.displayInfo();

	cout << "Truck:\n";
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the towing capacity: ";
	cin >> towCap;
	Truck truck1(towCap, manufacturer, year);
	truck1.displayInfo();
	return(0);
}

