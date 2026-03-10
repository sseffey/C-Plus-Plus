#include "Person.h"
#include <iostream>
using namespace std;
Person::Person(string name , int date) {
	this->name = name;
	this->date = date;
}
void Person::print() {
	cout << this->name << this->date;
}

