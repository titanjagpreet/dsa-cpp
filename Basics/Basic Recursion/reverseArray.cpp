#include <iostream>
using namespace std;

// void reverseArray(int n[], int size) {
//     int a[size];

//     for (int i = 0; i < size; i++) {
//         a[i] = n[size - 1 - i];
//     }

//     for (int i = 0; i < size; i++) {
//         cout << a[i] << " ";
//     }

//     cout << endl;
// }

// Optimal approach

// void reverseArrayRecursion(int arr[], int start, int end) {
//    if (start < end) {
//       swap(arr[start], arr[end]);
//       reverseArray(arr, start + 1, end - 1);
//    }
// }

// New Approach using Library function
   //Reversing elements from index 0 to n-1 
   //reverse(arr, arr + n);

void printArray(int n[], int size){
    for (int i = 0; i < size; i++) {
        cout << n[i] << " ";
    }
}

void reverseArray(int n[], int size) {
    int low = 0;
    int high = size - 1;
    if (low >= high) return;
    while (low < high) {
        swap(n[low], n[high]);
        low++, high--;
    }
    printArray(n, size);
}

int main() {
    int n[] = {5, 2, 4, 8, 1, 5, 8, 3, 0};
    int size = sizeof(n) / sizeof(n[0]);

    reverseArray(n, size);
    return 0;
}