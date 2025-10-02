#include <iostream>
using namespace std;

int getHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter the number: ";
    cin >> a >> b;

    int answer = getHCF(a, b);
    cout << "HCF: " << answer;

    return 0;
}