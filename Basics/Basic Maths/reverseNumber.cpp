#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;
    int sign = n < 0 ? -1 : 1;
    n = abs(n);
    while (n > 0) {
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n = n / 10;
    }
    return rev * sign;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int reversed = reverseNumber(n);
    cout << "Reversed number: " << reversed;

    return 0;
}