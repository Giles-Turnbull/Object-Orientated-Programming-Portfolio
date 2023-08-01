using namespace std;
#include "Time.h"
#include <iostream>

//constructor
Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}

//set the hour
void Time::setHour(int h)
{
	hour = h;
}

//set the minute
void Time::setMinute(int m)
{
	minute = m;
}

//set the second
void Time::setSecond(int s)
{
	second = s;
}

//set the time
void Time::setTime(int s, int m, int h)
{
	second = s;
	minute = m;
	hour = h;
}

//destructor
Time::~Time()
{
	std::cout << "Time object is destroyed" << std::endl;
}