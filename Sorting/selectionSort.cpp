#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {20, 23, 11, 77, 85, 43, 69, 97, 18, 99};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    return 0;
}