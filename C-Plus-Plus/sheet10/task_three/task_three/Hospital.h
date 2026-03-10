#ifndef HOSBITAL_H
#define HOSBITAL_H

#include "Doctor.h"
#include "pations.h"
class Hospital
	//agregations
{
public:
	string state;
	vector<Doctor*> doctor;
	vector<Pations*> pations;

};

#endif // !HOSBITAL_H