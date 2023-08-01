#include <iostream>
using namespace std;

class DataStructure {
    private:
        int size;
    public:
        DataStructure(int size) {
            this->size = size;
        }
        virtual void initialize();
        virtual bool isFull();
        virtual bool isEmpty();
        virtual void insert(int value);
        virtual void remove(int value);
        virtual void push(int value);
        virtual void pop();
        virtual void ShowElements(int index);
        virtual void ShowAllElements();
        virtual void clear();
        virtual void deleteStructure();
        virtual void sort();
        virtual void print();
};

