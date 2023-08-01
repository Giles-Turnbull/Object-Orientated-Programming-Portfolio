#include <iostream>
using namespace std;

//Write down all the shapes you can think of--both two-dimensional and three-dimensional--and form those shapes into a shape hierarchy. Your hierarchy should have base class Shape from which class TwoDimensionalShape and class ThreeDimensionalShape are derived. Once you have developed the hierarchy, define each of the classes in the hierarchy. We will use this hierarchy in the coming exercises to process all shapes as objects of base-class Shape. 

class Shape{
    protected:  //protected so that derived classes can access
        string name;
    public: //public methods
        //constructor
        Shape(string name){
            this->name = name;
        }
        //virtual print method
        virtual void print(){
            cout << "Shape: " << name << endl;
        }
};


class TwoDimensionalShape: public Shape{
    private:    //private variables
        double area;
    public: //public methods
        //constructor
        TwoDimensionalShape(string name): Shape(name){
            area = 0;
        }
        //virtual print method
        virtual void print(){
            cout << "Two Dimensional Shape: " << name << endl;
        }
        //virtual getArea method
        virtual double getArea(){
            return area;
        }
        //virtual setArea method
        virtual void setArea(double area){
            this->area = area;
        }
};

class ThreeDimensionalShape: public Shape{
    private:    //private variables
        double volume;
    public: //public methods
        //constructor
        ThreeDimensionalShape(string name): Shape(name){
            volume = 0;
        }
        //virtual print method
        virtual void print(){
            cout << "Three Dimensional Shape: " << name << endl;
        }
        //virtual getVolume method
        virtual double getVolume(){
            return volume;
        }
        //virtual setVolume method
        virtual void setVolume(double volume){
            this->volume = volume;
        }
};

int main() {
    //list of shapes
    TwoDimensionalShape *shapes[3];
    //create shapes
    shapes[0] = new TwoDimensionalShape("Square");
    shapes[1] = new TwoDimensionalShape("Triangle");
    shapes[2] = new TwoDimensionalShape("Circle");
    //print shapes
    for(int i = 0; i < 3; i++){
        shapes[i]->print();
    }
    //list of 3D shapes
    ThreeDimensionalShape *shapes3D[3];
    //create 3D shapes
    shapes3D[0] = new ThreeDimensionalShape("Cube");
    shapes3D[1] = new ThreeDimensionalShape("Sphere");
    shapes3D[2] = new ThreeDimensionalShape("Cylinder");
    //print 3D shapes
    for(int i = 0; i < 3; i++){
        shapes3D[i]->print();
    }
}