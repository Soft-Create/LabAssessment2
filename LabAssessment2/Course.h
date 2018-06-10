#pragma once
#include "Student.h"
#include "Teacher.h"

class Course {
public:
	Student _student[3];
	Teacher _teacher;
	Course(Student,Student,Student,Teacher);
};
