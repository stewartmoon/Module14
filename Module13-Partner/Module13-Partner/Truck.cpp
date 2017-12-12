//File for Truck.cpp
#include "Truck.h"

//default constructor that sets values = 0
Truck::Truck()
{
	load = 0;
	towing_cap = 0;
}

Truck::Truck (string manuf)
{
	manufacter= manuf;

}
//Accessor Method for load
double Truck::GetLoad()
{
	return load;
}

//Accessor Method for Towing_cap
double Truck::GetTowing_Cap()
{
	return towing_cap;
}

//Accessor Method for Cylinders
int Truck::GetCylinders()
{
	return cylinders;
}

//Accessor Method for Manufacturer
string Truck::GetManufacter()
{
	return manufacter;
}


Truck::Truck (Truck& Object)
{
	Truck newTruck = (Object.GetCylinders);
}


Truck& Truck:: operator = (Truck& Object)
{
	return Object;
}

istream& operator >> (istream& inStream, Truck& TruckObject)
{
	inStream >> TruckObject.manufacter;
	inStream >> TruckObject.cylinders;
	inStream >> TruckObject.load;
	inStream >> TruckObject.towing_cap;
	return inStream;
}

ostream& operator <<(ostream& outStream, Truck& TruckObject)
{
	outStream << TruckObject.manufacter;
	outStream << TruckObject.cylinders;
	outStream << TruckObject.load;
	outStream << TruckObject.towing_cap;

	return outStream;
}