#include <iostream>
using namespace std;
// task (1)
int main() {
    // aX2+bX+c=0
    int a, x, b, c;
    cin >> a >> x >> b >> c;

    cout << a * x * x + b * x + c;
    return 0;
}


//////////////////////////////////////////////////////////////////

// task(2)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // x =  -b - eq2-4ac/2a
    // x =  -b + eq2-4ac/2a
    float x1, x2, b, a, c;
    cout << "enter 4 numbers";
    cin >> b >> a >> c;
    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << x1 << endl;
    cin >> a >> b >> a >> c;
    x2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << x2 << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////

// task(3)
#include <iostream>
using namespace std;

int main() {
    cout << "Enter the year: ";
    int year;
    cin >> year;

    if (year % 4 == 0) {
        cout << "Kabisa" << endl;
    }
    else {
        cout << " not Kabisa" << endl;
    }

    cout << "Enter the month: ";
    int month;
    cin >> month;

    if (month == 2) {
        cout << "28 or 29 days" << endl;

    }

    else if (month > 12) {
        cout << "not mounth";

    }
    else {
        cout << "30 or 31 days" << endl;
    }

    return 0;
}
///////////////////////////////////////////////////////////////////
//task (4)
#include <iostream>
#include <cctype>
using namespace std;
int main(void) {
    char tl;
    cin >> tl;
    tl = tolower(tl);
    switch (tl)
    {
    case 'w':
        cout << "move up";
        break;
    case 's':
        cout << "move down";
        break;
    case 'd':
        cout << "move right";
        break;
    case 'a':
        cout << "move left";
        break;
    case 'k':
    case 'j':
        cout << "kick the ball";
        break;
    case 'p':
        cout << "pass the ball";
        break;
    case 'o':
        cout << "over thw ball";
        break;

    default:
        cout << "invaled";
        break;
    }
};
/////////////////////////////////////////////////////////////////

//task(5)
#include <iostream>
using namespace std;

int main() {
    int x1, x2;
    char op;

    cout << "Enter two numbers: ";
    cin >> x1 >> x2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    switch (op) {
    case '+':
        cout << "Result: " << x1 + x2;
        break;
    case '-':
        cout << "Result: " << x1 - x2;
        break;
    case '*':
        cout << "Result: " << x1 * x2;
        break;
    case '/':
        if (x2 != 0)
            cout << "Result: " << x1 / x2;
        else
            cout << "Error: Division by zero!";
        break;
    default:
        cout << "Invalid operation!";
    }

    return 0;
}
//////////////////////////////////////////////////////////////////

//task(6)

#include <iostream>
using namespace std;

int biggest(int a, int b, int c) {
    if (a > b)
    {
        return a;
    }
    else if (b > c) {
        return b;
    }
    else {
        return c;
    }
}
int main()
{
    cout << biggest(5, 2, 4);
    return 0;
}
////////////////////////////////////////////////////

// ---------------------------------------------
// | p | q | r | (p && q ) || !r | !(p&&(q||!r)|
// ---------------------------------------------
// | 0 | 0 | 0 |     1           |       1     |
// ---------------------------------------------
// | 0 | 0 | 1 |     0           |       1     |
// ---------------------------------------------
// | 0 | 1 | 0 |     1           |       1     |
// ---------------------------------------------