//task 1
//s=16
//////////////////////////////////////////
//task 2
//4 , 9 , 16
//////////////////////////////////////////
//task 3
//s=5 , n=7
//////////////////////////////////////////

//task  4
#include <string>
#include <iostream>
using namespace std;

int main() {

    string world[10] = {
        "zero","one","two","three","four",
        "five","six","seven","eight","nine"
    };
    string txt;
    getline(cin, txt);
    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] >= '0' && txt[i] <= '9') {
            //ASCII
            int index = txt[i] - '0';
            cout << world[index];
        }
        else {
            cout << txt[i];
        }
    }
    return 0;
}

//////////////////////////////////////////////////////////
//task 5
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "apc123sef333";
    int count = 0;
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            count++;
        }

    }
    cout << count;

    return 0;
}
/////////////////////////////////////////////////////////////
//task 6
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {

        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
//////////////////////////////////////////////////////////////
//task 7
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the diamond (number of rows for top half): ";
    cin >> n;


    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {

        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {

            cout << "*";
        }
        cout << endl;
    }
    return 0;
}