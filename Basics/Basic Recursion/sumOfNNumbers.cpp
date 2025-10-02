#include <iostream>
using namespace std;

void sumOfNNumbers(int n, int sum = 0) {
    if(n == 0) {
        cout << "Sum is: " << sum;
        return;
    }
    sum = sum + n;
    sumOfNNumbers(n-1, sum);
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    sumOfNNumbers(n);

    return 0;
}