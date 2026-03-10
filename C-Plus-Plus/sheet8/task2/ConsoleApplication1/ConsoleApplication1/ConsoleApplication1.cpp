// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



class Money {
private:
    int dolar;
    int cent;

public:
    Money() {
        dolar = 0;
        cent = 0;

    }
    Money(int dolar , int cent) {

        this->dolar = dolar;
        this->cent = cent;

    }


    Money operator + (Money other) {
        Money m3 ;
         m3.dolar = dolar + other.dolar;
         m3.cent = cent + other.cent;
         return m3;
        
    }
    int get_dollar() {
        return dolar;
    }
    int get_cent() {
        return cent;
    }

};
int main()
{
    Money m1(10, 15);
    Money m2(15, 15);
    Money m3(0,0);
    m3 = m2 + m1;
    cout << m3.get_dollar();
    cout << m3.get_cent();

    return 0;
}
