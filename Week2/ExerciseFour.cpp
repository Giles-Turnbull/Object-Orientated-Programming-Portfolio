#include <iostream>
using namespace std;

class ComplexNumbers
{
    private:    //private variables
        double real;
        double imaginary;
    public:    //public methods
        //constructors
        ComplexNumbers(double r, double i){   //constructor with parameters
            real = r;
            imaginary = i;
        }
        ComplexNumbers(){   //default constructor
            real = 0;
            imaginary = 0;
        }
        //ComplexNumbers();
        //addition
        ComplexNumbers operator+(ComplexNumbers &c2);
        //subtraction
        ComplexNumbers operator-(ComplexNumbers &c2);
        //multiplication
        ComplexNumbers operator*(ComplexNumbers &c2);
        //division
        ComplexNumbers operator/(ComplexNumbers &c2);
        //print in the form (a, b) where a is the real part and b is the imaginary part
        void print();

};



//addition
ComplexNumbers ComplexNumbers::operator+(ComplexNumbers &c2)
{
    ComplexNumbers temp;
    temp.real = real + c2.real;
    temp.imaginary = imaginary + c2.imaginary;
    return temp;
}

//subtraction
ComplexNumbers ComplexNumbers::operator-(ComplexNumbers &c2)
{
    ComplexNumbers temp;
    temp.real = real - c2.real;
    temp.imaginary = imaginary - c2.imaginary;
    return temp;
}

//multiplication
ComplexNumbers ComplexNumbers::operator*(ComplexNumbers &c2)
{
    ComplexNumbers temp;
    temp.real = (real * c2.real) - (imaginary * c2.imaginary);
    temp.imaginary = (real * c2.imaginary) + (imaginary * c2.real);
    return temp;
}

//division
ComplexNumbers ComplexNumbers::operator/(ComplexNumbers &c2)
{
    ComplexNumbers temp;
    temp.real = ((real * c2.real) + (imaginary * c2.imaginary)) / ((c2.real * c2.real) + (c2.imaginary * c2.imaginary));
    temp.imaginary = ((imaginary * c2.real) - (real * c2.imaginary)) / ((c2.real * c2.real) + (c2.imaginary * c2.imaginary));
    return temp;
}

//print in the form (a, b) where a is the real part and b is the imaginary part
void ComplexNumbers::print()
{
    cout << "(" << real << ", " << imaginary << ")" << endl;
}

int main()
{
    bool loop = true;   //main loop
    while(loop == true){
        //display menu
        cout << "1. Add two complex numbers" << endl;
        cout << "2. Subtract two complex numbers" << endl;
        cout << "3. Multiply two complex numbers" << endl;
        cout << "4. Divide two complex numbers" << endl;
        cout << "5. Exit" << endl;
        int choice; //user input
        cin >> choice;  //get user input
        if(choice == 1){    //addition
            double real1, imaginary1, real2, imaginary2; //variables for user input
            cout << "Enter the real part of the first complex number: ";
            cin >> real1;
            cout << "Enter the imaginary part of the first complex number: ";
            cin >> imaginary1;
            cout << "Enter the real part of the second complex number: ";
            cin >> real2;
            cout << "Enter the imaginary part of the second complex number: ";
            cin >> imaginary2;
            ComplexNumbers c1(real1, imaginary1);    //create first complex number
            ComplexNumbers c2(real2, imaginary2);    //create second complex number
            ComplexNumbers c3 = c1 + c2;    //add the two complex numbers
            cout << "The sum of the two complex numbers is: ";
            c3.print(); //print the sum
        }
        else if(choice == 2){   //subtraction
            double real1, imaginary1, real2, imaginary2; //variables for user input
            cout << "Enter the real part of the first complex number: ";
            cin >> real1;
            cout << "Enter the imaginary part of the first complex number: ";
            cin >> imaginary1;
            cout << "Enter the real part of the second complex number: ";
            cin >> real2;
            cout << "Enter the imaginary part of the second complex number: ";
            cin >> imaginary2;
            ComplexNumbers c1(real1, imaginary1);    //create first complex number
            ComplexNumbers c2(real2, imaginary2);    //create second complex number
            ComplexNumbers c3 = c1 - c2;    //subtract the two complex numbers
            cout << "The difference of the two complex numbers is: ";
            c3.print(); //print the difference
        }
        else if(choice == 3){   //multiplication
            double real1, imaginary1, real2, imaginary2; //variables for user input
            cout << "Enter the real part of the first complex number: ";
            cin >> real1;
            cout << "Enter the imaginary part of the first complex number: ";
            cin >> imaginary1;
            cout << "Enter the real part of the second complex number: ";
            cin >> real2;
            cout << "Enter the imaginary part of the second complex number: ";
            cin >> imaginary2;
            ComplexNumbers c1(real1, imaginary1);    //create first complex number
            ComplexNumbers c2(real2, imaginary2);    //create second complex number
            ComplexNumbers c3 = c1 * c2;    //multiply the two complex numbers
            cout << "The product of the two complex numbers is: ";
            c3.print(); //print the product
        }
        else if(choice == 4){   //division
            double real1, imaginary1, real2, imaginary2; //variables for user input
            cout << "Enter the real part of the first complex number: ";
            cin >> real1;
            cout << "Enter the imaginary part of the first complex number: ";
            cin >> imaginary1;
            cout << "Enter the real part of the second complex number: ";
            cin >> real2;
            cout << "Enter the imaginary part of the second complex number: ";
            cin >> imaginary2;
            ComplexNumbers c1(real1, imaginary1);    //create first complex number
            ComplexNumbers c2(real2, imaginary2);    //create second complex number
            ComplexNumbers c3 = c1 / c2;    //divide the two complex numbers
            cout << "The quotient of the two complex numbers is: ";
            c3.print(); //print the quotient
        }
        else if(choice == 5){   //exit
            loop = false;
        }
        else{   //invalid input
            cout << "Please input a valid number" << endl;
        }

    }
}