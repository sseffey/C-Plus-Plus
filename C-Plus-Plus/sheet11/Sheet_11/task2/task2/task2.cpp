// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include"Deveolper.h"
#include "Intern.h"
#include "Emploee.h"
#include "Manger.h"


using namespace std;


int main()
{
    vector<Emploee*> em;
    em.push_back(new Manger());
    em.push_back(new Intern());
    em.push_back(new Deveolper());

    for (int i = 0; i < em.size(); i++)
    {
        cout << em[i]->CalculateBonus() << endl;
    }




    return 0;
}

