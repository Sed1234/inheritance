#pragma once
#include <string>
#include <iostream>
class Student
{
	int idStudent, counter = 1;
	std::string name;
public:
	void SetIdSudent(int);
	int getIdStudent();
	std::string getName();
	void setName(std::string);
	virtual void PrintInfo();
	Student();
	Student(std::string);
	virtual ~Student();
};

