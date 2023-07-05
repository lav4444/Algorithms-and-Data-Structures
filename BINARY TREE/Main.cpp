#include <iostream>
#include "Bstablo.h"

using namespace std;


int main() {
  BStablo<int> tree = BStablo<int>();
 
  tree.insert(50);
  tree.insert(25);
  tree.insert(75);
  tree.insert(12);
  tree.insert(37);
  tree.insert(43);
  tree.insert(30);
 
  tree.inorder2();
 
  return 0;
}