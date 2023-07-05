#include <iostream>

using namespace std;

template <typename T>
void insertionSort(T A[], int size) {

    for(int i=1; i<size; i++) {
        int j=i;
        while (j>0 && (A[j]<A[j-1])) {
            T x = A[j];
            A[j] = A[j-1];
            A[j-1] = x;
            j--;
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
  
    insertionSort(arr, n);
  
    cout << "Array after sorting: \n";
    printArray(arr, n);


    return 4;
}

// template <typename T>
// void insertionSort(T A[], int n) {
//     for (int i=0; i<n; i++) {
//         int j=i;
//         while(true) {
//             if (A[j] < A[j-1] && j>0) {
//                 T x = A[j-1];
//                 A[j-1] = A[j];
//                 A[j] = x;

//                 j--;
//             }
//             else break;
//         }
//     }

// }