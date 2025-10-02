#include <iostream>
using namespace std;

void print1toN(int n, int count = 1) {
    if (count > n) {
        return;
    }
    cout << count << endl;
    print1toN(n, count + 1);
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    print1toN(n);

    return 0;
}