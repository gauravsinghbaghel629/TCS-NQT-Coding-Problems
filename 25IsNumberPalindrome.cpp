#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    int res = 0;
    int m = n;

    while(n != 0){
        int digit = n % 10;

        res = (res * 10) + digit;

        n = n / 10;
    }

    return (m == res);
}

int main(){
    int number = 4554;

    if (palindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;   
}