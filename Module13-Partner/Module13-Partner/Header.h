#pragma once
#ifndef Vehicle
#include <string>
#include "Person.h"

using namespace std;

class Vehicle 
{
private:
	Person Person;
	string manufacter;
	int cylinders;
};
#endif // !Vehicle
