#include <iostream>
#include "StackElement.h"
#include "Stack.h"

using namespace std;

int main() {

   Stack<int> s, t;
   int item;
   s.push(1);
   s.push(2);
   s.push(3);
   t.push(10);
   t.push(20);
   t.push(30);

    s.printStack();
    t.printStack();

    while (s.pop(item))
      cout << item << " ";
   cout << endl;
   while (t.pop(item))
      cout << item << " ";
   cout << endl;
   s.printStack();
   //lav najjaci

    return 0;
}