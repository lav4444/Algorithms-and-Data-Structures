#include <iostream>

using namespace std;

template <typename T>
void bubbleSort(T A[], int size) {

    for (int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++) {
            if (A[j+1] < A[j]) {
                T x = A[j];
                A[j] = A[j+1];
                A[j+1] = x;
            }
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

    int arr[] = {12, 34, 54, 2, 3, 3132, 3, -4, 42, 55};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    cout << "Array before sorting: \n";
    printArray(arr, n);
  
    bubbleSort(arr, n);
  
    cout << "Array after sorting: \n";
    printArray(arr, n);


    return 4;
}



// template <typename T>
// void bubbleSort(T A[], int n) {
//     for (int i=0; i<n-1; i++) {
//         for (int j=1; j < n-i; j++) {
//             if (A[j-1]>A[j]) {
//                 T x = A[j];
//                 A[j] = A[j-1];
//                 A[j-1] = x;
//             }
//         }
//     }

// }