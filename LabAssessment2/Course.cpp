#include "stdafx.h"
#include "Course.h"

Course::Course(Student one, Student two, Student three, Teacher teacher)
{
	_student[0] = one;
	_student[1] = two;
	_student[2] = three;
	_teacher = teacher;
}
