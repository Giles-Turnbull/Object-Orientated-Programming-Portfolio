#include <iostream>
#include <deque>
using namespace std;

//Implement a class for each of the following, use a deque structure to represent:
//1.	MyStack
//2.	MyQueue

class MyStack{
    private:    //private data members
        deque<int> stack;   //stack using deque
    public:
        void push(int x){   //push function
            stack.push_back(x);
        }
        void pop(){ //pop function
            stack.pop_back();
        }
        int top(){  //top function
            return stack.back();
        }
        bool empty(){   //empty function
            return stack.empty();
        }
        //print function
        void print(){
            for(auto it = stack.begin(); it != stack.end(); ++it){
                cout << *it << endl;
            }
        }
};

//Queue class
class MyQueue{
    private:    //private data members
        deque<int> queue;   //queue using deque
    public:
        void push(int x){   //push function
            queue.push_back(x);
        }
        void pop(){ //pop function
            queue.pop_front();
        }
        int front(){  //front function
            return queue.front();
        }
        bool empty(){   //empty function
            return queue.empty();
        }
        //print function
        void print(){
            for(auto it = queue.begin(); it != queue.end(); ++it){
                cout << *it << endl;
            }
        }
};

int main(){
    //take integers from the user and create a stack and a queue
    int x, y, z;
    cout << "Enter three integers: ";
    cin >> x >> y >> z;
    MyStack stack;
    MyQueue queue;
    stack.push(x);
    stack.push(y);
    stack.push(z);
    queue.push(x);
    queue.push(y);
    queue.push(z);
    cout << "Stack: " << endl;
    stack.print();
    cout << "Queue: " << endl;
    queue.print();
    //pop the stack and queue
    stack.pop();
    queue.pop();
    cout << "an element has been popped from the stack and queue" << endl;
    cout << "Stack: " << endl;
    stack.print();
    cout << "Queue: " << endl;
    queue.print();
    //push another element to the stack and queue
    stack.push(25);
    queue.push(28);
    cout << "an element has been pushed to the stack and queue" << endl;
    cout << "Stack: " << endl;
    stack.print();
    cout << "Queue: " << endl;
    queue.print();
}
