// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    //def
    Person() {
        name = "";
        age = 10;
    }
    //param
    Person(string pname, int page) {
        name = pname;
        age = page;
    }
    void set_name(string pname) {
        name = pname;
    }
    void set_age(int page) {
        age = page;
    }
    void print() {
        cout << name << endl;
        cout << age;

    }

    int get_age() {
        if (age <= 0) {
            cout << "unkown";
            return 0;
        }
        else {
            return age;
        }
    }

};
int main() {
    Person p("omar", 0);
    p.set_name("mohmed");
    p.set_age(20);
    p.print();
    cout << p.get_age();

    return 0;
}
///////////////////////////////////////////////////////////////
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    //def
    Person() {
        name = "";
        age = 10;
    }
    //param
    Person(string pname, int page) {
        name = pname;
        age = page;
    }
    void set_name(string pname) {
        name = pname;
    }
    void set_age(int page) {
        age = page;
    }
    void print() {
        cout << name << endl;
        cout << age;

    }
    string get_name() {
        return name;
    }


    int get_age() {
        if (age <= 0) {
            cout << "unkown";
            return 0;
        }
        else {
            return age;
        }
    }

};
class PEemploee {
private:
    Person person_data;
    double salary;
public:
    PEemploee() {
        salary = 0;
    }
    PEemploee(string employe_name, double inti_salary) {
        person_data.set_name(employe_name);
        salary = inti_salary;
    }
    void set_salary(int inti_salary) {
        salary = inti_salary;
    }
    double get_salary() {
        return salary;
    }
    void set_name(string n) {
        person_data.set_name(n);
    }
    string get_name() {
        return person_data.get_name();
    }
    void printem() {
        person_data.print();
        cout << "salary" << salary;
    }

};
int main() {
    PEemploee p;
    p.set_salary(5000);
    p.set_name("Omar");
    p.printem();
    return 0;
}
////////////////////////////////////////////////////////////////////////////
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Address {
private:

    int house;
    string street;
    int apt;
    string city;
    string state;
    int postal_code;
public:
    Address(int house, string street, int apt, string city, string state, int postal_code) {
        this->house = house;
        this->street = street;
        this->apt = apt;
        this->city = city;
        this->state = state;
        this->postal_code = postal_code;

    }
    Address(
        int house, string street, string city, string state, int postal_code) {
        this->house = house;
        this->street = street;
        this->apt = -1;
        this->city = city;
        this->state = state;
        this->postal_code = postal_code;
    }
    void print() {
        cout << house << " " << street;
        if (apt != -1) {
            cout << " Apt " << apt;
        }
        cout << endl;
        cout << city << ", " << state << " " << postal_code << endl;
    }
    bool comes_befor(Address other) {
        return this->postal_code < other.postal_code;
    }
};
int main() {
    //  house = 0;
    //  street = "";
    //  apt = 0;
    //  city = "";
    //  state = "";
    //  postal_code = "";

    Address a(10, "Street A", 101, "Cairo", "Giza", 10010);
    Address a2(20, "Street B", "Cairo", "Giza", 20020);
    a.print();
    cout << "----------------------------" << endl;
    a2.print();
    cout << "-----------------------------" << endl;
    if (a.comes_befor(a2)) {
        cout << "a comes befour a2";
    }
    else {
        cout << "a doesnot";
    }


    return 0;
}
/////////////////////////////////////////////////////////////////////////////
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int total_score;
    int quiz_count;
public:
    Student(string sname) {
        name = sname;
        total_score = 0;
        quiz_count = 0;

    }
    int get_count_of_quiz() {
        return quiz_count;
    }
    string get_name() {
        return name;
    }
    void add_quiz(int scoree) {
        if (scoree > 0) {
            total_score += scoree;
            quiz_count++;
        }
    }
    int get_total_score() {
        return total_score;
    }
    int get_avarage_score() {
        if (quiz_count > 0) {
            return total_score / quiz_count;
        }
        else {
            cout << "no quiz yet";
            return 0;
        }

    }
};



int main() {

    Student s("omar");

    cout << "name is: " << s.get_name() << endl;
    s.add_quiz(20);
    s.add_quiz(15);
    cout << "total quiz is: " << s.get_count_of_quiz() << endl;
    cout << "total score is: " << s.get_total_score() << endl;
    cout << "avaerg is: " << s.get_avarage_score();


    return 0;
}