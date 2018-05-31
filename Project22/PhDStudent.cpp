#include "PhDStudent.h"



PhDStudent::PhDStudent()
{
}

PhDStudent::PhDStudent(std::string work_name)
{
	this->work_name = work_name;
}

PhDStudent::~PhDStudent()
{
}

void PhDStudent::PrintInfo()
{
	std::cout << getIdStudent() << ' ' << getName() << ' ' << work_name << std::endl;
}
