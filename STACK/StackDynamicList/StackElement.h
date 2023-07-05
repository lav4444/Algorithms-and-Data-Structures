#include <iostream>

using namespace std;

template <class T> class StackElement {
    public:
        T data;
        StackElement<T>* next;

};