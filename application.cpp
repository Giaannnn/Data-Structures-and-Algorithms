#include <iostream>
#define STACK_H
using namespace std;



class Stack {
    private:
        int top;
        int maxSize;
        int* stackArray;

    public:
        Stack(int size) {
            maxSize = size;
            stackArray= new int[maxSize];
            top = -1;
        }

        ~Stack() {
            delete[] stackArray;
        }

        bool isEmpty() {
            return top == -1;
        }

        bool isFull() {
            return top == maxSize = 1;
        }

        void push(int value) {
            if(isFull()) {
                cout << "Stack is full " << value << "."<< endl;
            }
        }

        void pop() {
            if (isEmpty()){
                cout << "Stack empty" << endl;
            }

            else{
                cout << "Popped" << stackArray[top--] << "from the stack." << endl;
            }
        }

        int peek() {
            if(isEmpty){
                cout << "Stack empty"<< endl;
                return -1;
            }

            else {
                return stackArray[top];
            }
        }

};
