#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// Bruteforce Approach

// void printDivisors(int n) {
//     vector<int> divisors;
//     for(int i = 1; i <= n; i++) {
//         int remainder = n % i;
//         if(remainder == 0) {
//             divisors.push_back(i);
//         }
//     }

//     cout << "[";
//     for(int i = 0; i < divisors.size(); i++) {
//         cout << divisors[i];
//         if(i != divisors.size() - 1) {
//             cout << ", ";
//         }
//     }
//     cout << "]";
// }

void printDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    for (auto it : divisors) cout << it << " ";
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    printDivisors(n);
    return 0;
}