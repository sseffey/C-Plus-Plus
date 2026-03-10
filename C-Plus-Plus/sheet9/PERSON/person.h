#ifndef PERSON_H
#define PERSON_H
using namespace std;
#include<string>
class Person
{
protected:
	string name;
	int date;
public:
	Person(string name, int date);
	void print();



};
#endif

