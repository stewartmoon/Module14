//File for Truck.h
#include <string>
#include <iostream>

#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle
{
public:
	double load;
	int towing_cap;	
	double Truck::GetLoad();
	double Truck::GetTowing_Cap();
	int Truck::GetCylinders();
	string Truck::GetManufacter();
	Truck();
	Truck(string manuf);

};