#pragma once
class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    Time();
    void setHour(int h);
    void setMinute(int m);
    void setSecond(int s);
	void setTime(int s, int m, int h);
    ~Time();
};

