#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPalindromeNormal(string str) {
    string reversed = "";
    int size = str.length();
    for (int i = 0; i < size; i++) {
        reversed.push_back(str[size - 1 -i]);
    }

    if (reversed == str){
        return true;
    } else {
        return false;
    }
}

bool checkPalindromeTwoPointer(string str) {
    int low = 0;
    int high = str.length() - 1;

    while (low <= high) {
        if(str[low] == str[high]) {
            low++, high--;
        } else {
            return false;
        }
    }

    return true;
}

int main() {
    string str;
    cout << "Enter the palindrome: ";
    cin >> str;

    int result = checkPalindromeTwoPointer(str);

    cout << (result ? "True" : "False");
    return 0;
}