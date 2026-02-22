// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
#include<string>
using namespace std;
int main()
{
    string s;

    cout << "get me you world";
    int counter_uper = 0;
    int counter_low = 0;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i])) {
            counter_uper++;
        }
        if (islower(s[i])) {
            counter_low++;
        }

    }

    cout << "lower is" << counter_low;
    cout << "upper is" << counter_uper;

}
////////////////////////////////////////////////////
//task 2
// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string temp = "";
    //start from 
    for (int i = s.length() - 1; i >= 0; i--)
    {
        temp += s[i];
    }
    cout << temp;

}

/////////////////////////////////////////////////////////////////
//task 3

// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "get me world" << endl;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[s.length() - 1] && s[i + 1] == s[s.length() - 2]) {

            cout << "yes";
            break;
        }
        else {

            cout << "no";
            break;
        }
    }
    return 0;
}


