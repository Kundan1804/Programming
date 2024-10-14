// Calculating Armstrong Numbers
// Difficulty: Easy
// Topics: Basic Programming, Number Theory
// Description: Write a program to check if a number is an Armstrong number.
// Example:
// Input: number = 153
// Output: Armstrong Number
// Explanation: 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.

#include <iostream>
#include <string>
using namespace std;

#include <cmath> // Include cmath for pow function

string armstrong(int n, int o) {
    int original = n; // Store the original number for comparison
    int sum = 0;
    while(n) {
        int temp = n % 10;
        sum += pow(temp, o); // Use pow function to calculate power
        n = n / 10;
    }
    if (sum == original) // Compare sum with the original number
        return "true";
    else
        return "false";
}

int order(int x) {
    int n = 0; // Initialize n to 0
    while(x) {
        n += 1;
        x = x / 10;
    }
    return n;
}

int main() {
    int n;
    cout << "Enter A Number: ";
    cin >> n;
    int ord = order(n); // Rename variable to avoid conflict with function name
    string ans = armstrong(n, ord); // Call armstrong function instead of sum
    cout << ans;
    return 0;
}