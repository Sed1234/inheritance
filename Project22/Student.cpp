#include "Student.h"



void Student::SetIdSudent(int x)
{
	this->idStudent = x;
}

int Student::getIdStudent()
{
	return idStudent;
}


std::string Student::getName()
{
	return name;
}
void Student::setName(std::string _fullName)
{
	if (!_fullName.empty())
	{
		this->name = _fullName;
	}
}
void Student::PrintInfo()
{
	std::cout << getIdStudent() << ' ' << getName() << std::endl;
}

Student::Student()
{
}

Student::Student(std::string name)
{
	this->idStudent = counter;
	this->name = name;
	counter++;
}


Student::~Student()
{
}
