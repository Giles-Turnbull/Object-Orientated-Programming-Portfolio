#include <iostream>
using namespace std;

//class point
class Point {
    private:    //private data members
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
        //destructor that prints the point
        ~Point() {
            cout << "Point(" << x << ", " << y << ")" << endl;
        }
};

//class Circle
class Circle {
    private:    //private data members
        Point center;
        double radius;
    public:    //public methods
        //constructor
        Circle(Point center, double radius) {
            this->center = center;
            this->radius = radius;
        }
        //default constructor
        Circle() {
            this->center = Point(0, 0);
            this->radius = 1;
        }
        //destructor that prints the circle
        ~Circle() {
            cout << "Circle(" << center << ", " << radius << ")" << endl;
        }
};

//class Cylinder
class Cylinder {
    private:    //private data members
        Circle base;
        double height;
    public:    //public methods
        //constructor
        Cylinder(Circle base, double height) {
            this->base = base;
            this->height = height;
        }
        //default constructor
        Cylinder() {
            this->base = Circle(Point(0, 0), 1);
            this->height = 1;
        }
        //destructor that prints the cylinder
        ~Cylinder() {
            cout << "Cylinder(" << base << ", " << height << ")" << endl;
        }
};

int main(){
    //create a cylinder
    Cylinder c = Cylinder(Circle(Point(1, 2), 3), 4);
    return 0;
}