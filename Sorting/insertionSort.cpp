#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];

        int j;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > key) {
                arr[j + 1] = arr[j];
            } else {
                break;
            }
        }

        arr[j + 1] = key;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}


int main() {
    int arr[] = {20, 23, 11, 77, 85, 43, 69, 97, 18, 99};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);

    return 0;
}