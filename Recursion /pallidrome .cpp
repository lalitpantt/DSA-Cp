#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {
    if (n == 0)
        return rev;

    return reverseNumber(n / 10, rev * 10 + n % 10);
}

bool isPalindrome(int n) {
    return n == reverseNumber(n);
}

int main() {
    int n;
    cin >> n;

    if (isPalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}