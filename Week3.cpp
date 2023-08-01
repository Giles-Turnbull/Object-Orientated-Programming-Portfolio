#include <iostream>
using namespace std;

class RationalNumbers
{
    private:    //private data members
        int numerator;
        int denominator;
        //find reduced rational number
        void reduceRational(int num, int den);
    public: //public methods
        //default constructor
        RationalNumbers()
        {
            numerator = 0;
            denominator = 1;
        }
        //constructor with parameters
        RationalNumbers(int num, int den);
        //set numerator
        void setNumerator(int num);
        //set denominator
        void setDenominator(int den);
        //get numerator
        int getNumerator();
        //get denominator
        int getDenominator();
        //set rational number
        void setRational(int num, int den);
        //add rational numbers
        void addRational(RationalNumbers r1, RationalNumbers r2);
        //subtract rational numbers
        void subtractRational(RationalNumbers r1, RationalNumbers r2);
        //multiply rational numbers
        void multiplyRational(RationalNumbers r1, RationalNumbers r2);
        //divide rational numbers
        void divideRational(RationalNumbers r1, RationalNumbers r2);
        //is greater than
        bool isGreater(RationalNumbers r1, RationalNumbers r2);
        //is equal to
        bool isEqual(RationalNumbers r1, RationalNumbers r2);
        //is between
        bool isBetween(RationalNumbers r1, RationalNumbers r2, RationalNumbers r3);
        //print rational number in the form of a/b
        void printRational();
};

RationalNumbers::RationalNumbers(int num, int den)
{
    //find the reduced form of the fraction using the parameterized constructor
    int gcd = 1;
    int j = 2;
    while (j <= num && j <= den){
        if (num % j == 0 && den % j == 0)
            gcd = j;
        j++;
    }
    numerator = num / gcd;
    denominator = den / gcd;
}

//set methods
void RationalNumbers::setNumerator(int num)
{
    numerator = num;
}
void RationalNumbers::setDenominator(int den)
{
    denominator = den;
}

//get methods
int RationalNumbers::getNumerator()
{
    return numerator;
}
int RationalNumbers::getDenominator()
{
    return denominator;
}

void RationalNumbers::reduceRational(int num, int den)
{
    //find the reduced form of the fraction
    int gcd = 1;
    int j = 2;
    while (j <= num && j <= den){
        if (num % j == 0 && den % j == 0)
            gcd = j;
        j++;
    }
    numerator = num / gcd;
    denominator = den / gcd;
}
//set rational number
void RationalNumbers::setRational(int num, int den)
{
    //set the rational number
    numerator = num;
    denominator = den;
}

//add rational numbers
void RationalNumbers::addRational(RationalNumbers r1, RationalNumbers r2)
{
    //add two rational numbers
    int num = r1.numerator * r2.denominator + r2.numerator * r1.denominator;
    int den = r1.denominator * r2.denominator;
    reduceRational(num, den);      //reduce the rational number
}
//subtract rational numbers
void RationalNumbers::subtractRational(RationalNumbers r1, RationalNumbers r2)
{
    //subtract two rational numbers
    int num = r1.numerator * r2.denominator - r2.numerator * r1.denominator;
    int den = r1.denominator * r2.denominator;
    reduceRational(num, den);      //reduce the rational number
}
//multiply rational numbers
void RationalNumbers::multiplyRational(RationalNumbers r1, RationalNumbers r2)
{
    //multiply two rational numbers
    int num = r1.numerator * r2.numerator;
    int den = r1.denominator * r2.denominator;
    reduceRational(num, den);      //reduce the rational number
}
//divide rational numbers
void RationalNumbers::divideRational(RationalNumbers r1, RationalNumbers r2)
{
    //divide two rational numbers
    int num = r1.numerator * r2.denominator;
    int den = r1.denominator * r2.numerator;
    reduceRational(num, den);      //reduce the rational number
}

//is greater than
bool RationalNumbers::isGreater(RationalNumbers r1, RationalNumbers r2)
{
    //check if r1 is greater than r2
    if (r1.numerator * r2.denominator > r2.numerator * r1.denominator)
        return true;
    else
        return false;
}
//is equal to
bool RationalNumbers::isEqual(RationalNumbers r1, RationalNumbers r2)
{
    //check if r1 is equal to r2
    if (r1.numerator * r2.denominator == r2.numerator * r1.denominator)
        return true;
    else
        return false;
}
//is between
bool RationalNumbers::isBetween(RationalNumbers r1, RationalNumbers r2, RationalNumbers r3)
{
    //check if r1 is between r2 and r3
    if (r1.numerator * r2.denominator > r2.numerator * r1.denominator && r1.numerator * r3.denominator < r3.numerator * r1.denominator)
        return true;
    else
        return false;
}

//print rational number in the form of a/b
void RationalNumbers::printRational()
{
    //print the rational number
    cout << numerator << "/" << denominator;
}

int main(){
    bool loop = true;   //main loop
    while(loop == true){
        //main menu
        cout << "1. Add two rational numbers" << endl;
        cout << "2. Subtract two rational numbers" << endl;
        cout << "3. Multiply two rational numbers" << endl;
        cout << "4. Divide two rational numbers" << endl;
        cout << "5. Check if one rational number is greater than another" << endl;
        cout << "6. Check if one rational number is equal to another" << endl;
        cout << "7. Check if one rational number is between two other rational numbers" << endl;
        cout << "8. Exit" << endl;
        //get user input
        int option;
        cout << "Enter your choice: ";
        cin >> option;
        if(option == 1)//add two rational numbers
        {
            //get user input
            int num1, den1, num2, den2;
            cout << "Enter the numerator of the first rational number: ";
            cin >> num1;
            cout << "Enter the denominator of the first rational number: ";
            cin >> den1;
            cout << "Enter the numerator of the second rational number: ";
            cin >> num2;
            cout << "Enter the denominator of the second rational number: ";
            cin >> den2;
            //create rational numbers
            RationalNumbers r1(num1, den1);
            RationalNumbers r2(num2, den2);
            RationalNumbers r3(0, 0);
            //add the rational numbers
            r3.addRational(r1, r2);
            //print the result
            cout << "The sum of the rational numbers is: ";
            r3.printRational();
            cout << endl;
        }
        else if(option == 2)//subtract two rational numbers
        {
            //get user input
            int num1, den1, num2, den2;
            cout << "Enter the numerator of the first rational number: ";
            cin >> num1;
            cout << "Enter the denominator of the first rational number: ";
            cin >> den1;
            cout << "Enter the numerator of the second rational number: ";
            cin >> num2;
            cout << "Enter the denominator of the second rational number: ";
            cin >> den2;
            //create rational numbers
            RationalNumbers r1(num1, den1);
            RationalNumbers r2(num2, den2);
            RationalNumbers r3(0, 0);
            //subtract the rational numbers
            r3.subtractRational(r1, r2);
            //print the result
            cout << "The difference of the rational numbers is: ";
            r3.printRational();
            cout << endl;
        }
        else if(option == 3)//multiply two rational numbers
        {
            //get user input
            int num1, den1, num2, den2;
            cout << "Enter the numerator of the first rational number: ";
            cin >> num1;
            cout << "Enter the denominator of the first rational number: ";
            cin >> den1;
            cout << "Enter the numerator of the second rational number: ";
            cin >> num2;
            cout << "Enter the denominator of the second rational number: ";
            cin >> den2;
            //create rational numbers
            RationalNumbers r1(num1, den1);
            RationalNumbers r2(num2, den2);
            RationalNumbers r3(0, 0);
            //multiply the rational numbers
            r3.multiplyRational(r1, r2);
            //print the result
            cout << "The product of the rational numbers is: ";
            r3.printRational();
            cout << endl;
        }
        else if(option == 4)//divide two rational numbers
        {
            //get user input
            int num1, den1, num2, den2;
            cout << "Enter the numerator of the first rational number: ";
            cin >> num1;
            cout << "Enter the denominator of the first rational number: ";
            cin >> den1;
            cout << "Enter the numerator of the second rational number: ";
            cin >> num2;
            cout << "Enter the denominator of the second rational number: ";
            cin >> den2;
            //create rational numbers
            RationalNumbers r1(num1, den1);
            RationalNumbers r2(num2, den2);
            RationalNumbers r3(0, 0);
            //divide the rational numbers
            r3.divideRational(r1, r2);
            //print the result
            cout << "The quotient of the rational numbers is: ";
            r3.printRational();
            cout << endl;
        }
        else if(option == 5)//check if one rational number is greater than another
        {
            //get user input
            int num1, den1, num2, den2;
            cout << "Enter the numerator of the first rational number: ";
            cin >> num1;
            cout << "Enter the denominator of the first rational number: ";
            cin >> den1;
            cout << "Enter the numerator of the second rational number: ";
            cin >> num2;
            cout << "Enter the denominator of the second rational number: ";
            cin >> den2;
            //create rational numbers
            RationalNumbers r1(num1, den1);
            RationalNumbers r2(num2, den2);
            //check if r1 is greater than r2
            if(r1.isGreater(r1, r2) == true)
                cout << "The first rational number is greater than the second rational number" << endl;
            else
                cout << "The first rational number is not greater than the second rational number" << endl;
        }
        else if(option == 6)//check if one rational number is equal to another
        {
            //get user input
            int num1, den1, num2, den2;
            cout << "Enter the numerator of the first rational number: ";
            cin >> num1;
            cout << "Enter the denominator of the first rational number: ";
            cin >> den1;
            cout << "Enter the numerator of the second rational number: ";
            cin >> num2;
            cout << "Enter the denominator of the second rational number: ";
            cin >> den2;
            //create rational numbers
            RationalNumbers r1(num1, den1);
            RationalNumbers r2(num2, den2);
            //check if r1 is equal to r2
            if(r1.isEqual(r1, r2) == true)
                cout << "The first rational number is equal to the second rational number" << endl;
            else
                cout << "The first rational number is not equal to the second rational number" << endl;
        }
        else if(option == 7) //check if the rational number is between two others
        {
            //get user input
            int num1, den1, num2, den2, num3, den3;
            cout << "Enter the numerator of the first rational number: ";
            cin >> num1;
            cout << "Enter the denominator of the first rational number: ";
            cin >> den1;
            cout << "Enter the numerator of the second rational number: ";
            cin >> num2;
            cout << "Enter the denominator of the second rational number: ";
            cin >> den2;
            cout << "Enter the numerator of the third rational number: ";
            cin >> num3;
            cout << "Enter the denominator of the third rational number: ";
            cin >> den3;
            //create rational numbers
            RationalNumbers r1(num1, den1);
            RationalNumbers r2(num2, den2);
            RationalNumbers r3(num3, den3);
            //check if r1 is between r2 and r3
            if(r1.isBetween(r1, r2, r3) == true)
                cout << "The first rational number is between the second and third rational numbers" << endl;
            else
                cout << "The first rational number is not between the second and third rational numbers" << endl;
        }
        else if(option == 8)//print the rational number in floating point format
        {
            loop = false;
        }
    }
}