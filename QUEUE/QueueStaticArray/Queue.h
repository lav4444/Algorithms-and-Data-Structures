#include <iostream>

using namespace std;

template <class T> class Queue {
    private:
        static const int SIZE = 30;
        T red[SIZE];
        int write = 0;
        int read = 0;

    public:
        bool enqueue(T val) {
            if ((write + 1) % SIZE == read ) {
                return false;
            }
            red[write] = val;
            write = (write + 1) % SIZE;
            return true;
        }
        bool dequeue(T &item) {
            if (read == write) {
                return false;
            }
            item = red[read];
            read = (read+1) % SIZE;
            return true;
        }
    


};