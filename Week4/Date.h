#pragma once
class Date {
private:
    int day;
    int month;
    int year;
public:
    Date();
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
	void setDate(int d, int m, int y);
};
