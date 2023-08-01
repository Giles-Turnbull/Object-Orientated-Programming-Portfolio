#pragma once
#include <string>
#include "Date.h"
#include "Project.h"
using namespace std;
class Student
{
	private:
		Date DOB;
		Project sproject;
		string ID;
		string name;
	public:
		Student();
		void setStudent(Date DOB, Project sproject, string ID, string name);
		~Student();
};