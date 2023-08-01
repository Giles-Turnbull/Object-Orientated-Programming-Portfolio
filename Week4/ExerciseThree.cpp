#include <iostream>
using namespace std;

//class Point
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

//class Line that inherits from Point
class Line: public Point {
    protected:    //private data members
        int length;
    public:    //public methods
        //constructor
        Line(int x, int y, int length): Point(x, y) {
            this->length = length;
        }
        //default constructor
        Line(): Point() {
            this->length = 1;
        }
};

//class square that inherits from Line
class Square: public Line {
    protected:    //private data members
        int width;
        int height;
        int baseArea;
    public:    //public methods
        //constructor
        Square(int x, int y, int length, int width, int height, int baseArea): Line(x, y, length) {
            this->width = width;
            this->height = height;
            this->baseArea = baseArea;
        }
        //default constructor
        Square(): Line() {
            this->width = 1;
            this->height = 1;
            this->baseArea = 1;
        }
};

//class cube that inherits from Square
class Cube: public Square {
    protected:    //private data members
        int volume;
    public:    //public methods
        //constructor
        Cube(int x, int y, int length, int width, int height, int baseArea, int volume): Square(x, y, length, width, height, baseArea) {
            this->volume = volume;
        }
        //default constructor
        Cube(): Square() {
            this->volume = 1;
        }
        //print the cube
        void print() {
            cout << "Point: " << x << ", " << y << endl;
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
            cout << "Height: " << height << endl;
            cout << "Base Area: " << baseArea << endl;
            cout << "Volume: " << volume << endl;
        }
};

int main() {
    //create a cube
    Cube c(1, 2, 3, 4, 5, 6, 7);
    //print the cube
    c.print();
    return 0;
}