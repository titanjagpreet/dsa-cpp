#include <iostream>
using namespace std;

int largestElement(int arr[], int size) {
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}

int main() {
    int arr[] = {20, 23, 11, 77, 85, 43, 69, 97, 18, 99};
    int size = sizeof(arr)/sizeof(arr[0]);

    int result = largestElement(arr, size);
    cout << "Largest Element is: " << result;

    return 0;
}