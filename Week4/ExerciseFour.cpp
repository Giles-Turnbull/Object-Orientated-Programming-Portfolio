#include <iostream>
using namespace std;

class Time
{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time(int h = 0, int m = 0, int s = 0)
        {
            hour = h;
            minute = m;
            second = s;
        }
        void setHour(int h)
        {
            hour = h;
        }
        void setMinute(int m)
        {
            minute = m;
        }
        void setSecond(int s)
        {
            second = s;
        }
        int getHour()
        {
            return hour;
        }
        int getMinute()
        {
            return minute;
        }
        int getSecond()
        {
            return second;
        }
        void printTime()
        {
            cout << hour << ":" << minute << ":" << second << endl;
        }
};

class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date(int d = 0, int m = 0, int y = 0)
        {
            day = d;
            month = m;
            year = y;
        }
        void setDay(int d)
        {
            day = d;
        }
        void setMonth(int m)
        {
            month = m;
        }
        void setYear(int y)
        {
            year = y;
        }
        int getDay()
        {
            return day;
        }
        int getMonth()
        {
            return month;
        }
        int getYear()
        {
            return year;
        }
        void printDate()
        {
            cout << day << "/" << month << "/" << year << endl;
        }
};


class student{
    private:
        string name;
        int id;
    public:
        student(string n = "", int i = 0)
        {
            name = n;
            id = i;
        }
        void setName(string n)
        {
            name = n;
        }
        void setId(int i)
        {
            id = i;
        }
        string getName()
        {
            return name;
        }
        int getId()
        {
            return id;
        }
};

