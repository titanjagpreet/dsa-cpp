#include <iostream>
#include <vector>
using namespace std;

// Character Hashing

// string s = "ababc";
// int hash[26] = {0};  // for 'a' to 'z'

// for (char ch : s) {
//     hash[ch - 'a']++;
// }

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements (each between 0 and 12):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precompute frequencies
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0 && arr[i] <= 12) {
            hash[arr[i]] += 1;
        } else {
            cout << "Warning: Value " << arr[i] << " is out of supported range (0–12) and will be ignored.\n";
        }
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    cout << "Enter " << q << " query numbers (to check their frequency):\n";
    while (q--) {
        int number;
        cin >> number;
        if (number >= 0 && number <= 12) {
            cout << "Frequency of " << number << " is: " << hash[number] << endl;
        } else {
            cout << "Number " << number << " is out of supported range (0–12).\n";
        }
    }

    return 0;
}