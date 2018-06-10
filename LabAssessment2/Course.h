#pragma once
#include "Student.h"
#include "Teacher.h"
#include <string>

class Course {
public:
	string _name;
	Student _student[3];
	Teacher _teacher;
	Course(string,Student,Student,Student,Teacher);
	~Course();
};
