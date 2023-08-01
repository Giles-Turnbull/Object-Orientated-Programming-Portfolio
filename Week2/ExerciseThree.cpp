#include <iostream>
using namespace std;

class SophisticatedRectangle{
    private:
        float cornerOne[2];
        float cornerTwo[2];
    public:
        //set functions
        void setCornerOne(float x, float y) {
            //if both x and y are between 0 and 20
            if (x > 0 || x < 20 && y > 0 || y < 20) {
                cornerOne[0] = x;
                cornerOne[1] = y;
            }
            else {
                cout << "that number is invalid" << endl;
            }
        }
        void setCornerTwo(float x, float y) {
            //if both x and y are between 0 and 20
            if (x > 0 || x < 20 && y > 0 || y < 20) {
                cornerTwo[0] = x;
                cornerTwo[1] = y;
            }
            else {
                cout << "that number is invalid" << endl;
            }
        }
        //constructor that uses the set functions
        SophisticatedRectangle(float x1, float y1, float x2, float y2) {
            setCornerOne(x1, y1);
            setCornerTwo(x2, y2);
        }
        //method to calculate length of the rectangle
        float length(){
            //find x length
            float xLength = cornerTwo[0] - cornerOne[0];
            //find y length
            float yLength = cornerTwo[1] - cornerOne[1];
            //return the larger length
            if (xLength > yLength) {
                return xLength;
            }
            else {
                return yLength;
            }
        }
        //method to calculate width of the rectangle
        float width(){
            //find x length
            float xLength = cornerTwo[0] - cornerOne[0];
            //find y length
            float yLength = cornerTwo[1] - cornerOne[1];
            //return the smaller length
            if (xLength < yLength) {
                return xLength;
            }
            else {
                return yLength;
            }
        }
        //function to check if coordinates form a rectangle using length and width
        bool isRectangle() {
            if (length() == width()) {
                return false;
            }
            else {
                return true;
            }
        }
        //method to calculate perimeter of the rectangle using the length and width methods
        float perimeter() {
            return 2 * (length() + width());
        }
        //method to calculate area of the rectangle using the length and width methods
        float area() {
            return length() * width();
        }
        //method to check if the rectangle is a square
        bool isSquare() {
            if (length() == width()) {
                return true;
            }
            else {
                return false;
            }
        }
};

int main(){
    //create a rectangle object
    SophisticatedRectangle r1(1, 1, 4, 6);
    //display the length, width, perimeter, and area
    cout << "Length: " << r1.length() << endl;
    cout << "Width: " << r1.width() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;
    cout << "Area: " << r1.area() << endl;
    //check if the rectangle is a square
    if (r1.isSquare()) {
        cout << "This is a square" << endl;
    }
    else {
        cout << "This is not a square" << endl;
    }
    //check if the rectangle is a rectangle
    if (r1.isRectangle()) {
        cout << "This is a rectangle" << endl;
    }
    else {
        cout << "This is not a rectangle" << endl;
    }
}