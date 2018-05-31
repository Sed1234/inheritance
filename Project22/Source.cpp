#include "PhDStudent.h"
#include <iostream>
void main()
{
	PhDStudent Phd;
	Phd.SetIdSudent(2);
	Phd.setName("Bob Marley");
	Phd.work_name = "My work";

	Phd.PrintInfo();
	system("pause");
}