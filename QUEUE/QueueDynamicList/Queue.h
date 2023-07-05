#include <iostream>
#include "QueueElement.h"

using namespace std;

template <class T> class Queue {
    private:
        QueueElement<T>* write;
        QueueElement<T>* read;

    public:
        Queue() {
            write = nullptr;
            read = nullptr;
        }

        bool enqueue(T val) {
            QueueElement<T>* newElem = new (nothrow) QueueElement<T>;
            if (newElem == nullptr) return false;
            newElem -> next = nullptr;
            newElem -> data = val;
            if (write == nullptr) {
                read = newElem;
            } else {
                write -> next = newElem;
            }
            write = newElem;

            return true;
        }
        bool dequeue(T &item) {
            if (read == nullptr) {
                return false;
            }
            item = read -> data;
            QueueElement<T>* tmp = read;
            read = read -> next;
            if (read == nullptr) {
                write = nullptr;
            }
            delete tmp;
            return true;
        }


};