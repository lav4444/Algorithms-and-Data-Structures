#include <iostream> 

using namespace std;

template <class T> class Stack {
    private:
        StackElement<T>* top;
    public:
        Stack() {  //inicijalizacija praznog stoga
            this -> top = nullptr;
        }
        bool push(T val) {
            StackElement<T>* newElem = new StackElement<T>;
            newElem -> data = val;
            newElem -> next = top;
            top = newElem;
            return true;
        }
        bool pop(T &val) {
            if (top == nullptr) return false;
            else {
                val = top -> data;
                StackElement<T>* tmp = top; //ovo...
                top = top -> next;
                delete tmp; //...dvoje sluzi za brisanje nepotrebnog

                return true;
            }
        } 
        T peek() {
            return top -> data;
        }
        void printStack() {
            StackElement<T>* tmp = top;
            while (true) {
                if (tmp == nullptr) {
                    cout << endl;
                    break;
                }
                cout << tmp -> data << " ";
                tmp = tmp -> next;
            }
        }



};