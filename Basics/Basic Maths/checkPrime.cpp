#include <iostream>
using namespace std;

bool checkPrime(int n) {
    if (n < 2) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int answer = checkPrime(n);
    cout << "Prime: " << answer;

    return 0;
}