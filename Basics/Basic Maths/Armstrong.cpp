#include <iostream>
using namespace std;

bool isArmstrong(int n) {
    if (n < 0) { return false; }
    int arm = 0;
    int input = n;
    while(n > 0) {
        int lastDigit = n % 10;
        arm = arm + (lastDigit * lastDigit * lastDigit);
        n = n/10;
    }
    return arm == input;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int answer = isArmstrong(n);
    cout << "Armstrong: " << answer;

    return 0;
}