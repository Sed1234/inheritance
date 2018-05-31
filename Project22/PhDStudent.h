#pragma once
#include "Student.h"
#include <string>
#include <iostream>
class PhDStudent : public Student
{
public:
	std::string work_name;
	PhDStudent();
	PhDStudent(std::string);
	~PhDStudent();
	void PrintInfo() override;
};

