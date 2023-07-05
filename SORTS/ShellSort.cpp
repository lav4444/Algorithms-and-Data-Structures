#include <iostream>

using namespace std;

void printArray(int A[], int n) {
    for (int i=0; i<n; i++) {
        cout << A[i] << " ";
    }
}

void shellSort(int arr[], int n) {
    int gap = n;
    while (true) {
        gap /= 2;
        for (int i = 0; i < n - gap; i++) {
            int j = i;
        }
        



        if (gap == 1) break;
    }



}


int main() {
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    cout << "Array before sorting: \n";
    printArray(arr, n);
  
    shellSort(arr, n);
  
    cout << "\nArray after sorting: \n";
    printArray(arr, n);


    return 4;
}
