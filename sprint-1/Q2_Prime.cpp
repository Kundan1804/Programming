// Checking for Prime Numbers
// Difficulty: Easy
// Topics: Basic Programming, Number Theory
// Description: Write a program to determine if a number is prime.
// Example:
// Input: number = 7
// Output: Prime
// Explanation: 7 has no divisors other than 1 and itself, so it is a prime number.

#include <iostream>
#include <string>
using namespace std;

string prime(int n) {
    int m  = n/2;
    int flag = 0;
    for (int i=2; i<=m; i++){
        if (n%i == 0){
            flag = 1;
            break;

        }
            
    }
    if (flag==1)
        return "Composite";
    else 
        return "Prime";
}

int main() {
    // Write C++ code here
    int n;
    cout<<"Enter A Number: ";
    cin>>n;
    string ans = prime(n);
    cout<<ans;
    return 0;
}