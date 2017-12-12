//File for Person.cpp
#include "Person.h"

Person::Person() {
	name = "";
}


Person::~Person() {
}

Person::Person(string theName) {
	name = theName;
}

Person::Person(Person& theObject) {
	name = theObject.getName();
}

string Person::getName() {
	return name;
}

Person& Person::operator =(Person& rtSide) {
	Person newPerson(rtSide.getName());
	return newPerson;
}

istream& operator >> (istream& inStream, Person& personObject) {
	inStream >> personObject.name;
	return inStream;
}

ostream& operator <<(ostream& outStream, Person& personObject) {
	outStream << personObject.getName();
	return outStream;
}