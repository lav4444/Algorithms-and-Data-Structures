#include <iostream>

using namespace std;

template <class T> class Stack {
    private:
        T top;
        static const int MAXSIZE = 15;
        T stog[MAXSIZE];
    public:
        Stack() {
            this -> top = -1;
        }

        bool push(T val) {
            if (top >= 15) {
                return false;
            } else {
                stog[++top] = val;
                return true;
            }
        }
        bool pop(T &val) {
            if (top < 0) return false;
            else {
                val = stog[top--];
                return true;
            }
        }

};