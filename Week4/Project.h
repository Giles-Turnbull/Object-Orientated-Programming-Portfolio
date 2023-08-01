#pragma once
#include "Date.h"
#include "Supervisor.h"
#include <string>
class Project
{
private:
	Date StartDate;
	Supervisor supervisor;
	std::string pname;
public:
	Project();
	void setProject(string name, Date date, Supervisor supervisor);
	~Project();
};

