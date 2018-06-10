#include "stdafx.h"
#include "Student.h"
#include <iostream>

using namespace std;

string Student::getFirstName()
{
	return _firstName;
}

string Student::getLastName()
{
	return _lastName;
}

int Student::getAge()
{
	return _age;
}

string Student::getAddress()
{
	return _address;
}

string Student::getCity()
{
	return _city;
}

string Student::getPhone()
{
	return _phone;
}

void Student::sitInClass()
{
	cout << "Sitting in main theatre" << endl;
}
