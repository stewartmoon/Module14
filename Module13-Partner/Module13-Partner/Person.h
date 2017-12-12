//File for Person.h
#pragma once
#include <string>

using namespace std;

class Person {
public:
	Person();
	Person(string theName);
	Person(Person& theObject);
	string getName();
	Person& operator =(Person& rtSide);
	friend istream& operator >> (istream& inStream, Person& personObject);
	friend ostream& operator <<(ostream& outStream, Person& personObject);
	~Person();
private:
	string name;
};