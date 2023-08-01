#include "Deliverable.h"
#include "Date.h"
#include "Time.h"
#include "Student.h"
#include <iostream>
using namespace std;

Deliverable::Deliverable()
{
	Dtime = Time();
	Ddate = Date();
	student = Student();
}

Deliverable::~Deliverable()
{
	cout << "Deliverable object destroyed";
}