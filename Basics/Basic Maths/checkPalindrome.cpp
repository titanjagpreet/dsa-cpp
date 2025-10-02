#include <iostream>
using namespace std;

bool checkPalindrome(int n) {
    int rev = 0;
    int input = n;
    if(n < 0) { return false; }
    n = abs(n);
    while (n > 0) {
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n = n / 10;
    }
    return rev == input;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int answer = checkPalindrome(n);
    cout << "Palindrome: " << answer;

    return 0;
}