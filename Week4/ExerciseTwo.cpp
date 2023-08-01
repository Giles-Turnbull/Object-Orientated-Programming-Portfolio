#include <iostream>
using namespace std;

//Point class
class Point {
    protected:    //private data members
        int x;
        int y;
    public:    //public methods
        //constructor
        Point(int x, int y) {
            this->x = x;
            this->y = y;
        }
        //default constructor
        Point() {
            x = 0;
            y = 0;
        }
};

//Circle class that inherits from Point
class Circle: public Point {
    protected:    //private data members
        double radius;
    public:    //public methods
        //constructor
        Circle(int x, int y, double radius): Point(x, y) {
            this->radius = radius;
        }
        //default constructor
        Circle(): Point() {
            this->radius = 1;
        }
};

//Cylinder class that inherits from Circle
class Cylinder: public Circle {
    protected:    //private data members
        double height;
    public:    //public methods
        //constructor
        Cylinder(int x, int y, double radius, double height): Circle(x, y, radius) {
            this->height = height;
        }
        //default constructor
        Cylinder(): Circle() {
            this->height = 1;
        }
        //print the cylinder
        void print() {
            cout << "Point: " << x << ", " << y << endl;
            cout << "Radius: " << radius << endl;
            cout << "Height: " << height << endl;
        }
};

int main() {
    //create a cylinder
    Cylinder c(1, 2, 3, 4);
    //print the cylinder
    c.print();
}