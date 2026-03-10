#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
class Student {
private:
	string name;
	int total_quiz;
	double score;

public:
	Student(string name);
	string get_name();
	void add_quiz(int score);
	double get_total_score();
	double get_avareg_score();
};















#endif
