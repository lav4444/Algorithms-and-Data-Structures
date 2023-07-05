#include <iostream>

using namespace std;

template <typename T>
void selectionSort(T A[], int size) {
    for (int i=0; i<size-1; i++) {
        T min = A[i];
        int iMin = -1;
        for (int j=i; j<size; j++) {
            if (A[j] < min) {
                min = A[j];
                iMin = j;
            }
        }
        if (iMin != i) {
            A[iMin] = A[i];
            A[i] = min;
        }
    }
}



void printArray(int A[], int n) {
    for (int i=0; i<n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    cout << "Array before sorting: \n";
    printArray(arr, n);
  
    selectionSort(arr, n);
  
    cout << "Array after sorting: \n";
    printArray(arr, n);


    return 4;
}