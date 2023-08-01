#include "Student.h"
#include "Date.h"
#include "Project.h"
#include <iostream>
using namespace std;

Student::Student()
{
	DOB = Date();
	sproject = Project();
	ID = "";
	name = "";
}

void Student::setStudent(Date DOB, Project sproject, string ID, string name)
{
	this->DOB = DOB;
	this->sproject = sproject;
	this->ID = ID;
	this->name = name;
}

Student::~Student()
{
	cout << "student object destroyed";
}