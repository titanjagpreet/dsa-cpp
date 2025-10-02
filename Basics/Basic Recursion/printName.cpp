#include <iostream>
using namespace std;

void printNameNTimes(int n, int count = 1) {
    if (count > n) return;
    cout << "Titan" << endl;
    printNameNTimes(n, count + 1);
}

int main() {
    int n;
    cout << "Enter the times you want to print name: ";
    cin >> n;

    printNameNTimes(n);

    return 0;
}