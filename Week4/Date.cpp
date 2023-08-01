#include "Date.h"
#include <iostream>
using namespace std;

//constructor
Date::Date()
{
	day = 0;
	month = 0;
	year = 0;
}

//set the day
void Date::setDay(int d)
{
	day = d;
}
//set the month
void Date::setMonth(int m)
{
	month = m;
}
//set the year
void Date::setYear(int y)
{
	year = y;
}
//set the date
void Date::setDate(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

//destructor
Date::~Date()
{
	cout << "Date object is destroyed" << endl;
}