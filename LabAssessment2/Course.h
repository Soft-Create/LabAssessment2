#pragma once
#include "Student.h"
#include "Teacher.h"

class Course {
public:
	Student student[3];
	Teacher teacher;
	Course(Student,Student,Student,Teacher);
};
