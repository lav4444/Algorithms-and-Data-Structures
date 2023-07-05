#include <iostream>
#include "DoubleLinkedList.h"

using namespace std;

template <typename T>
void mergeSort(T A[], int n) {
    

}

template <typename T>
void mergeSort(T A[], int na, T B[], int nb) {
    

}




void printArray(int A[], int n) {
    for (int i=0; i<n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[] = {12, 34, 54, 2, 3, 3132, 3, -4, 42, 55};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    cout << "Array before sorting: \n";
    printArray(arr, n);
  
    mergeSort(arr, n);
  
    cout << "Array after sorting: \n";
    printArray(arr, n);


    return 4;
}