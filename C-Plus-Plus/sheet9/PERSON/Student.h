#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include"person.h"
class Student : public Person
{
private:
	string major;
public:
	Student(string name, int date, string major);
	void print();

};
#endif

