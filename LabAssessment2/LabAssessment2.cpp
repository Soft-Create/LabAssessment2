// LabAssessment2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Course.h"
#include "Teacher.h"
#include "Student.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	Student *student1 = new Student("Ayush", "Mitra", "Andhra Pradesh", "Vizag", "8506768696", 21);
	Student *student2 = new Student("Himanshi", "Sharma", "Delhi", "New Delhi", "9430341357", 21);
	Student *student3 = new Student("Bhawna", "Bhatt", "Uttarakhand", "Nainital", "9835277975", 22);
	Teacher *teacher = new Teacher("Geogen", "George", "Kerala", "Cochi", "9923145879", 31);
	Course *course = new Course("Networking",*student1, *student2, *student3, *teacher);
	cout << "Name of the course is : " << course->_name << endl;
	teacher->sitInClass();
    return 0;
}

