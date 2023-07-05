#include <iostream>
#include "Stack.h"

using namespace std;

int main(void) {
   Stack<int> s, t;
   int item;
   s.push(1);
   s.push(2);
   s.push(3);
   t.push(10);
   t.push(20);
   t.push(30);
   while (s.pop(item))
      cout << item << " ";
   cout << endl;
   while (t.pop(item))
      cout << item << " ";
   cout << endl;
   return 0;
}