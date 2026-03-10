#pragma once
#ifndef INSTARCTORS_H
#define INSTARCTORS_H
#include "Person.h"
class Instractor : public Person
{

protected:
	int salary;
public:
	Instractor(string name , int date , int salary);
	void print();
};
#endif

