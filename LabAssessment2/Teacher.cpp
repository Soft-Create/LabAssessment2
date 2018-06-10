#include "stdafx.h"
#include "Teacher.h"
#include <iostream>

using namespace std;

string Teacher::getFirstName()
{
	return _firstName;
}

string Teacher::getLastName()
{
	return _lastName;
}

int Teacher::getAge()
{
	return _age;
}

string Teacher::getAddress()
{
	return _address;
}

string Teacher::getCity()
{
	return _city;
}

string Teacher::getPhone()
{
	return _phone;
}

void Teacher::gradeStudent()
{
	cout << "Teacher graded" << endl;
}

void Teacher::sitInClass()
{
	cout << "Sitting at front of class" << endl;
}
