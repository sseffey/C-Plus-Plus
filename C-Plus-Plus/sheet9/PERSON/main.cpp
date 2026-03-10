
#include <iostream>
#include "person.h"
#include "Instractor.h"
#include "Student.h"


int main()
{
	//Person p1("omar" , 25);
	Student s1("omar", 25 , "data scince");
	Instractor in1("ahmed" , 40 , 5000);
	s1.print();
	in1.print();
	

}

