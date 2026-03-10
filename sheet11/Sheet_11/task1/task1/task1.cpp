// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include"Cow.h"
#include"Cat.h"
#include"Animal.h"
#include"Dog.h"	
#include<vector>
int main()
{
//	animals
//		│
//		├── Animal*
//		├── Animal*
//		└── Animal*


	vector<Animal*> animals;

	//animals
	//	│
	//	├── Dog
	//	├── Cat
	//	└── Cow
	animals.push_back(new Dog());
	animals.push_back(new Cow());
	animals.push_back(new Cat());


	//لوب بتمشي على ANIMAL ال i تمثل DOG COW CAT -> SPEACK()
	for (int i = 0; i < animals.size(); i++) {

		animals[i]->speack();
	}

	return 0;

}

