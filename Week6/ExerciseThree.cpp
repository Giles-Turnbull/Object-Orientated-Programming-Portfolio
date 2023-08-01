#include <iostream>
#include <string>
using namespace std;

class BugsRobot{
    protected: // protected data members
        int speed;
        int weight;
        int size;
        string name;
    public: // public member functions
        BugsRobot(int s, int w, int si, string n){
            speed = s;
            weight = w;
            size = si;
            name = n;
        }
        virtual void move() = 0; // pure virtual function
        virtual void eat() = 0; // pure virtual function
        virtual void sleep() = 0; // pure virtual function
        virtual void display() = 0; // pure virtual function

};

class AntRobot: public BugsRobot{   // derived class
    public: // public member functions
        AntRobot(int s, int w, int si, string n): BugsRobot(s, w, si, n){}
        void move(){
            cout << "Ant Robot " << name << " is moving" << endl;
        }
        void eat(){
            cout << "Ant Robot " << name << " is eating" << endl;
        }
        void sleep(){
            cout << "Ant Robot " << name << " is sleeping" << endl;
        }
        void display(){
            cout << "Ant Robot " << name << " is displaying" << endl;
        }
};

class BeeRobot: public BugsRobot{   // derived class
    public: // public member functions
        BeeRobot(int s, int w, int si, string n): BugsRobot(s, w, si, n){}
        void move(){
            cout << "Bee Robot " << name << " is moving" << endl;
        }
        void eat(){
            cout << "Bee Robot " << name << " is eating" << endl;
        }
        void sleep(){
            cout << "Bee Robot " << name << " is sleeping" << endl;
        }
        void display(){
            cout << "Bee Robot " << name << " is displaying" << endl;
        }
};

class ButterflyRobot: public BugsRobot{   // derived class
    public: // public member functions
        ButterflyRobot(int s, int w, int si, string n): BugsRobot(s, w, si, n){}
        void move(){
            cout << "Butterfly Robot " << name << " is moving" << endl;
        }
        void eat(){
            cout << "Butterfly Robot " << name << " is eating" << endl;
        }
        void sleep(){
            cout << "Butterfly Robot " << name << " is sleeping" << endl;
        }
        void display(){
            cout << "Butterfly Robot " << name << " is displaying" << endl;
        }
};

//template function to check size of array
template <class T>
int arraySize(T &array){
    return sizeof(array)/sizeof(array[0]);
}

int main(){
    //create an array of AntRobot objects
    AntRobot ant[3] = {AntRobot(10, 20, 30, "Ant1"), AntRobot(40, 50, 60, "Ant2"), AntRobot(70, 80, 90, "Ant3")};
    //create an array of BeeRobot objects
    BeeRobot bee[3] = {BeeRobot(10, 20, 30, "Bee1"), BeeRobot(40, 50, 60, "Bee2"), BeeRobot(70, 80, 90, "Bee3")};
    //create an array of ButterflyRobot objects
    ButterflyRobot butterfly[3] = {ButterflyRobot(10, 20, 30, "Butterfly1"), ButterflyRobot(40, 50, 60, "Butterfly2"), ButterflyRobot(70, 80, 90, "Butterfly3")};
}

