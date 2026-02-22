//task 1
#include <iostream>
using namespace std;
int main()
{
    double req_n, r1, r2, beq_n;

    cout << "get me r1";
    cin >> r1;
    cout << "get me r2";
    cin >> r2;


    req_n = r1 + r2;
    cout << "req = " << endl << req_n;

    beq_n = 1 / ((1 / r1) + (1 / r2));
    cout << "beq =" << endl << beq_n;

    return 0;

}
//////////////////////////////////////////////////
//task2
#include <iostream>
using namespace std;
int main()
{

    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int cents = 6;
    double result;
    result = (quarter * 3) + (dime * 2) + (nickel * 1) + cents;
    cout << result / 100;
    return 0;
}
///////////////////////////////////////////////////////////
//task3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float m, n;

    cin >> m;
    cin >> n;

    float a, b, c;

    a = pow(m, 2) - pow(n, 2);
    cout << a << endl;

    b = 2 * m * n;
    cout << a << endl;
    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << c << endl;
    return 0;
}
/////////////////////////////////////////////////////////////
//task4

#include <iostream>
using namespace std;
int main()
{
    int apple;
    cin >> apple;
    int dozens = 12;
    cout << apple / dozens << endl;
    int extra;
    extra = apple % 12;
    cout << extra;
    return 0;
}

//////////////////////////////////////////////////
//task5
//1011101010 from b to h =>2EA
//-------------------------------- 
//FFEA from H to B =>1111111111101010
// -------------------------------------
//76 FROM Dto B =>1001100
// -----------------------------------
//84 FROM D TO H => 1010100 => 54