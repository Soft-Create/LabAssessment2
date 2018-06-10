#include "stdafx.h"
#include "Course.h"

Course::Course(string name,Student one, Student two, Student three, Teacher teacher)
{
	_name = name;
	_student[0] = one;
	_student[1] = two;
	_student[2] = three;
	_teacher = teacher;
}

Course::~Course()
{
	printf("Course object is deleted\n");
}
