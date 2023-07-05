#include <iostream>
#include "ListElement.h"
#include "List.h"

using namespace std;

int main() {
    //cout << "ne";
    List<double> dinLista;

    dinLista.add(2);
    dinLista.addSorted(8);
    dinLista.addSorted(-1);
    dinLista.addSorted(43.23);
    dinLista.addSorted(0.6969);
    dinLista.addSorted(17);
    dinLista.PrintList();
    dinLista.remove(43.23);
    dinLista.remove(-1);
    dinLista.PrintList();
    //cout << endl;

     
    return 0;
}