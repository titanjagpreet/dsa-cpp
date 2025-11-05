#include <iostream>
using namespace std;

int secondLargestElement(int arr[], int size) {
    int max = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    return secondMax;
}

int main() {
    int arr[] = {20, 23, 11, 77, 85, 43, 69, 97, 18, 99};
    int size = sizeof(arr)/sizeof(arr[0]);

    int result = secondLargestElement(arr, size);

    if (result == INT_MIN) {
        cout << "Second largest element doesn't exist.";
    } else {
        cout << "Second Largest Element is: " << result;
    }

    return 0;
}