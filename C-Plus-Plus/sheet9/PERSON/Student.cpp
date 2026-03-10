#include "student.h"
#include<iostream>
using namespace std;
Student::Student(string name , int date ,string major) : Person(name, date) , major(major){

}

void Student::print() {
	cout << major << endl;
	Person::print();
	


}