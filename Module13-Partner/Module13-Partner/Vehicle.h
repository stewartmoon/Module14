//File for Vehicle.h
#pragma once
#ifndef Vehicle
#include <string>
#include "Person.h"

using namespace std;

class Vehicle 
{
public:
	Person Person;
	string manufacter;
	int cylinders;
};
#endif // !Vehicle
