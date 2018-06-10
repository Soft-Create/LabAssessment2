#pragma once
#include <string>

using namespace std;

class Teacher {
private:
	string _firstName, _lastName, _address, _city, _phone;
	int _age;
public:
	string getFirstName();
	string getLastName();
	int getAge();
	string getAddress();
	string getCity();
	string getPhone();
	void gradeStudent();
	void sitInClass();
};