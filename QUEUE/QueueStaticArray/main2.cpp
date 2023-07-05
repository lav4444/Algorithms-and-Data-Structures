#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
   Queue<int> q;
   int data;
   q.enqueue(1);
   q.enqueue(2);
   q.enqueue(3);
   //cout << q.count() << endl;
   while (q.dequeue(data))
      cout << data << " ";
   cout << endl;



    return 0;
}