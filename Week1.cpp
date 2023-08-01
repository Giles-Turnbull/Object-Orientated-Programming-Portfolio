#include <iostream>
#include <string>
using namespace std;

class car {
    private:    // private data members
        string make;
        string model;
        int year;
        int price;
        int mileage;
        string color;
    public: // public member functions
        // constructor
        car(string make, string model, int year, int price, int mileage, string color) {
            this->make = make;
            this->model = model;
            this->year = year;
            this->price = price;
            this->mileage = mileage;
            this->color = color;
        }
        // print function
        void print() {
            cout << "Make: " << make << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
            cout << "Price: " << price << endl;
            cout << "Mileage: " << mileage << endl;
            cout << "Color: " << color << endl;
        }
};

class Bird {
    private:    // private data members
        string name;
        string color;
        int age;
        int weight;
        string type;
    public: // public member functions
        // constructor
        Bird(string name, string color, int age, int weight, string type) {
            this->name = name;
            this->color = color;
            this->age = age;
            this->weight = weight;
            this->type = type;
        }
        // print function
        void print() {
            cout << "Name: " << name << endl;
            cout << "Color: " << color << endl;
            cout << "Age: " << age << endl;
            cout << "Weight: " << weight << endl;
            cout << "Type: " << type << endl;
        }
};

class MobilePhone{
    private:    // private data members
        string brand;
        string model;
        int year;
        int price;
        int memory;
        string color;
    public: // public member functions
        // constructor
        MobilePhone(string brand, string model, int year, int price, int memory, string color) {
            this->brand = brand;
            this->model = model;
            this->year = year;
            this->price = price;
            this->memory = memory;
            this->color = color;
        }
        // print function
        void print() {
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
            cout << "Price: " << price << endl;
            cout << "Memory: " << memory << endl;
            cout << "Color: " << color << endl;
        }
};

class TV{
    private:    // private data members
        string brand;
        string model;
        int year;
        int price;
        int size;
        string color;
    public: // public member functions
        // constructor
        TV(string brand, string model, int year, int price, int size, string color) {
            this->brand = brand;
            this->model = model;
            this->year = year;
            this->price = price;
            this->size = size;
            this->color = color;
        }
        // print function
        void print() {
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
            cout << "Price: " << price << endl;
            cout << "Size: " << size << endl;
            cout << "Color: " << color << endl;
        }
};

class Chair{
    private:    // private data members
        int size;
        int price;
        string color;
        string material;
    public:
        // constructor
        Chair(int size, int price, string color, string material) {
            this->size = size;
            this->price = price;
            this->color = color;
            this->material = material;
        }
        // print function
        void print() {
            cout << "Size: " << size << endl;
            cout << "Price: " << price << endl;
            cout << "Color: " << color << endl;
            cout << "Material: " << material << endl;
        }
};

class Train{
    private:    // private data members
        string name;
        string type;
        int year;
        int price;
        int speed;
        string color;
    public: // public member functions
        // constructor
        Train(string name, string type, int year, int price, int speed, string color) {
            this->name = name;
            this->type = type;
            this->year = year;
            this->price = price;
            this->speed = speed;
            this->color = color;
        }
        // print function
        void print() {
            cout << "Name: " << name << endl;
            cout << "Type: " << type << endl;
            cout << "Year: " << year << endl;
            cout << "Price: " << price << endl;
            cout << "Speed: " << speed << endl;
            cout << "Color: " << color << endl;
        }
};

class Boat{
    private:    // private data members
        string name;
        string type;
        int year;
        int price;
        int speed;
        string color;
    public: // public member functions
        // constructor
        Boat(string name, string type, int year, int price, int speed, string color) {
            this->name = name;
            this->type = type;
            this->year = year;
            this->price = price;
            this->speed = speed;
            this->color = color;
        }
        // print function
        void print() {
            cout << "Name: " << name << endl;
            cout << "Type: " << type << endl;
            cout << "Year: " << year << endl;
            cout << "Price: " << price << endl;
            cout << "Speed: " << speed << endl;
            cout << "Color: " << color << endl;
        }
};

class Bear{
    private:    // private data members
        string name;
        string type;
        int age;
        int weight;
        string color;
    public: // public member functions
        // constructor
        Bear(string name, string type, int age, int weight, string color) {
            this->name = name;
            this->type = type;
            this->age = age;
            this->weight = weight;
            this->color = color;
        }
        // print function
        void print() {
            cout << "Name: " << name << endl;
            cout << "Type: " << type << endl;
            cout << "Age: " << age << endl;
            cout << "Weight: " << weight << endl;
            cout << "Color: " << color << endl;
        }
};

class Pen{
    private:    // private data members
        string brand;
        string type;
        int price;
        int size;
        string color;
    public: // public member functions
        // constructor
        Pen(string brand, string type, int price, int size, string color) {
            this->brand = brand;
            this->type = type;
            this->price = price;
            this->size = size;
            this->color = color;
        }
        // print function
        void print() {
            cout << "Brand: " << brand << endl;
            cout << "Type: " << type << endl;
            cout << "Price: " << price << endl;
            cout << "Size: " << size << endl;
            cout << "Color: " << color << endl;
        }
};

class ClassRoom{
    private:    // private data members
        int number;
        int capacity;
        string color;
        string type;
    public:
        // constructor
        ClassRoom(int number, int capacity, string color, string type) {
            this->number = number;
            this->capacity = capacity;
            this->color = color;
            this->type = type;
        }
        // print function
        void print() {
            cout << "Number: " << number << endl;
            cout << "Capacity: " << capacity << endl;
            cout << "Color: " << color << endl;
            cout << "Type: " << type << endl;
        }
};

class ComputerRoom{
    private:    // private data members
        int number;
        int capacity;
        string color;
        string type;
    public:
        // constructor
        ComputerRoom(int number, int capacity, string color, string type) {
            this->number = number;
            this->capacity = capacity;
            this->color = color;
            this->type = type;
        }
        // print function
        void print() {
            cout << "Number: " << number << endl;
            cout << "Capacity: " << capacity << endl;
            cout << "Color: " << color << endl;
            cout << "Type: " << type << endl;
        }
};

int main()
{
    //create a bird object
    Bird bird1("Eagle", "Bird", 2010, 100, "White");
    //print bird object
    bird1.print();
}