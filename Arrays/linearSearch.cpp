#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    int index;
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    cout << "Target not found";
}

int main() {
    int arr[] = {20, 23, 11, 77, 85, 43, 69, 97, 18, 99};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target;
    cout << "Enter the value of the target: ";
    cin >> target;

    int result = linearSearch(arr, size, target);
    if(result) {
        cout << "The index of target element is: " << result;
    }

    return 0;
}