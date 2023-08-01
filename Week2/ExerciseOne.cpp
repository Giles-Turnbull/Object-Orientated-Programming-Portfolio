#include <iostream>
using namespace std;

//clas Time
class Time{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time(){    // Default constructor
            hour = 0;
            minute = 0;
            second = 0;
        }
        //set method
        void setTime(int h, int m, int s){
            hour = h;
            minute = m;
            second = s;
        }
        //print military time
        void printMilitary(){
            cout << (hour < 10 ? "0" : "") << hour << ":";
            cout << (minute < 10 ? "0" : "") << minute << ":";
        }
        //print standard time
        void printStandard(){
            cout << ((hour == 0 || hour == 12) ? 12 : hour % 12);
            cout << ":" << (minute < 10 ? "0" : "") << minute;
            cout << ":" << (second < 10 ? "0" : "") << second;
            cout << (hour < 12 ? " AM" : " PM");
        }
        //tick method
        void tick(){
            second++;
            if(second == 60){
                second = 0;
                minute++;
                if(minute == 60){
                    minute = 0;
                    hour++;
                    if(hour == 24){
                        hour = 0;
                    }
                }
            }
        }
};

int main(){
    bool loop = true;
    Time t1;
    while(loop){
        t1.tick();
        t1.printStandard();
        cout << endl;
    }
}