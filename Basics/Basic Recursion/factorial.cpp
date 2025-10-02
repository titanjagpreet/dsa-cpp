#include <iostream>
using namespace std;

// void factorialofN(int n, int factorial = 1) {
//     if(n == 0) {
//         cout << "Factorial is: " << factorial;
//         return;
//     }
//     factorial = factorial * n;
//     factorialofN(n-1, factorial);
// }

// Best approach

unsigned long long factorialofN(int n) {
    if(n < 0) {
        throw invalid_argument("Factorial is not defined for negative numbers.");
    }
    if(n == 0 || n == 1)
        return 1;
    return n * factorialofN(n - 1);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << factorialofN(n);

    return 0;
}