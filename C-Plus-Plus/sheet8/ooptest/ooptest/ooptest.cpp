
#include <iostream>
#include"Student.h"

int main()
{
    Student s1("omar");
    

    cout << s1.get_name();
    s1.add_quiz(50);
    s1.add_quiz(20);
   cout<<"avareg id:" <<s1.get_avareg_score();
   cout<<"tptal is:"<< s1.get_total_score();

}

