#include"Student.h"
#include<iostream>

Student::Student(string name) {
	this->name = name;
	this->score = 0;
	this->total_quiz = 0;
	
}
string Student::get_name() {
	return name;
}
void Student::add_quiz(int score) {
	if (score > 0) {
		this->score += score;
		total_quiz++;
		
	}
}
double Student::get_total_score() {
	return score;
}
double Student::get_avareg_score() {
	if (total_quiz > 0) {
		return score / total_quiz;
	}
	else {
		cout << "no quez yet";
		return 0;
	}
}
