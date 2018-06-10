#include "stdafx.h"
#include "Teacher.h"
#include <iostream>

using namespace std;

Teacher::Teacher()
{
}

Teacher::Teacher(string firstName, string lastName, string address, string city, string phone, int age)
{
	_firstName = firstName;
	_lastName = lastName;
	_address = address;
	_city = city;
	_phone = phone;
	_age = age;
}

Teacher::~Teacher()
{
	cout << "Teacher object deleted" << endl;
}

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
	cout << "Student graded" << endl;
}

void Teacher::sitInClass()
{
	cout << "Sitting at front of class" << endl;
}
