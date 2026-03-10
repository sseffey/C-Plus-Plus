#include "Instractor.h"
using namespace std;
#include<iostream>
Instractor::Instractor(string name, int date, int salary):Person(name,date) , salary(salary) {

}
void Instractor::print() {
	cout << salary << endl;
	Person::print();
	
}