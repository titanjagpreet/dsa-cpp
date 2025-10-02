#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    int digits = 0;
    while (n > 0) {
        n = n / 10;
        digits++;
    }
    return digits;
}

int main() {
    int n;
    cout << "Enter the number: " ;
    cin >> n;

    int digits = (int)(log10(n)+1); // OPTIMAL Approach

    int numberOfDigits = countDigits(n);
    cout << "Number of digits are: " << numberOfDigits;

    return 0;
}