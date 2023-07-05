#include <iostream>

using namespace std;

template <class T> class QueueElement {
    public:
        T data;
        QueueElement<T>* next;
};