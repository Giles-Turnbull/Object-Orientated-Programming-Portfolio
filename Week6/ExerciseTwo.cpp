#include <iostream>
using namespace std;

template <typename T>
class Array{
    private:    //private members
        T *arr;
        int size;
        int capacity;
    public: //public methods
        //constructor
        Array(int capacity){
            this->capacity = capacity;
            arr = new T[capacity];
            size = 0;
        }
        //add new element
        void add(T element){
            if(size == capacity){   //if the array is full
                cout << "Array is full" << endl;
                return;
            }
            arr[size] = element;    //add the element
            size++; //increase the size
        }
        void remove(int index){ //remove an element at a certain index
            if(index < 0 || index >= size){ //if the index is out of bounds
                cout << "Index out of range" << endl;
                return;
            }
            for(int i = index; i < size - 1; i++){  //shift the elements to the left
                arr[i] = arr[i + 1];
            }
            size--;
        }
        void show(){    //show the array elements
            for(int i = 0; i < size; i++){  //loop through the array
                cout << arr[i] << " ";  //print the element
            }
            cout << endl;
        }
};

int main(){
    Array<int> arr(5);  //create an array of integers
    // add elements
    arr.add(1);
    arr.add(2);
    arr.add(3);
    arr.add(4);
    arr.add(5);
    arr.show(); //show the array
    arr.remove(2);  //remove the element at index 2
    arr.show(); //show the array
}