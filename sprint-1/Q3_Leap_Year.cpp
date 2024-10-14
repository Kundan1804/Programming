// Validating Leap Years
// Difficulty: Easy
// Topics: Basic Programming, Date Handling
// Description: Write a program to check if a given year is a leap year.
// Example:
// Input: year = 2020
// Output: Leap Year
// Explanation: 2020 is divisible by 4 but not by 100, or it is divisible by 400, so it is a leap year.

#include <iostream>
#include <string>
using namespace std;

string leapYear(int n) {
    if (n%400==0)
        return "Leap Year";
    else if (n%4==0 & n%100 !=0)
        return "Leap Year";
    else 
        return "Not a Leap Year";
}

int main() {
    // Write C++ code here
    int n;
    cout<<"Enter A Number: ";
    cin>>n;
    string ans = leapYear(n);
    cout<<ans;
    return 0;
}