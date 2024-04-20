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
	cout << "";
	cout << "";
	cout << ""; 
	getline(cin, manufacturer);
	cout << "";
	cin >> year;
	Vehicle vehicle1(manufacturer, year);

	cout << "\n\n";
	getline(cin, manufacturer);
	cout << "";
	cin >> year;
	cout << "";
	cin >> doors;
	Car car1(doors, manufacturer, year);

	cout << "";
	getline(cin, manufacturer);
	cout << "";
	cin >> year;
	cout << "";
	cin >> towCap;
	Car car1(towCap, manufacturer, year);
}

