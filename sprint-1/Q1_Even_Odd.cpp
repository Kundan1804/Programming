// Determining Even/Odd Numbers
// Difficulty: Easy
// Topics: Basic Programming
// Description: Write a program to check whether a number is even or odd.
// Example:
// Input: number = 4
// Output: Even

#include <iostream>
#include <string>

using namespace std;

string evenOdd(int n) {
    if (n % 2 == 0) {
        return "Even";
    } else {
        return "Odd";
    }
}

int main() {
    int n;
    cout << "Enter A Number: ";
    cin >> n;
    string ans = evenOdd(n);
    cout << ans;
    return 0;
}