#include "Supervisor.h"
#include <iostream>
using namespace std;

Supervisor::Supervisor()
{
	name = "";
}

void Supervisor::setSupervisor(string name)
{
	this->name = name;
}

Supervisor::~Supervisor()
{
	cout << "supervisor object destroyed";
}