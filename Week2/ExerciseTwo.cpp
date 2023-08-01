#include <iostream>
using namespace std;

class Rectangle {
    private:    // Private members
        float width;
        float height;
    public:    // Public members
        Rectangle(){    // Default constructor
            width = 1;
            height = 1;
        }
        //set and get methods
        void setWidth(float w) {
            if (w > 0 || w < 20) {  // Check if width is between 0 and 20
                width = w;
            }
            else{
                cout << "that number is invalid" << endl;
            }
        }
        void setHeight(float h) {
            if (h > 0 || h < 20) {  // Check if height is between 0 and 20
                height = h;
            }
            else{
                cout << "that number is invalid" << endl;
            }
        }
        int getWidth() {    // Get width
            return width;
        }
        int getHeight() {   // Get height
            return height;
        }
        // method to calculate area
        float area() {
            return width * height;
        }
        // method to calculate perimeter
        float perimeter() {
            return 2 * (width + height);
        }
};

int main()
{
    // Create a rectangle object
    Rectangle r1;
    // Set width and height
    r1.setWidth(4);
    r1.setHeight(40);
    // Display width, height, area, and perimeter
    cout << "Width: " << r1.getWidth() << endl;
    cout << "Height: " << r1.getHeight() << endl;
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;
}