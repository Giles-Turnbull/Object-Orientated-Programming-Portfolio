#include "Project.h"
#include "Date.h"
#include "Supervisor.h"
#include <iostream>
using namespace std;

Project::Project()
{
	pname = " ";
	StartDate = Date();
	supervisor = Supervisor();
}

void Project::setProject(string name, Date date, Supervisor supervisor)
{
	pname = name;
	StartDate = date;
	supervisor = supervisor;
}

Project::~Project()
{
	cout << "project object destroyed";
}