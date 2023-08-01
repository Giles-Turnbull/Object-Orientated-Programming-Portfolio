#include <iostream>
using namespace std;

template <typename T>
// Function to swap two values
void Swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    // Declare variables
    int a = 1;
    int b = 2;
    cout << "Before swap: " << a << " " << b << endl;
    Swap(a, b); // Swap the values
    cout << "After swap: " << a << " " << b << endl;
}