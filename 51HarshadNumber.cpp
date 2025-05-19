#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 378;
    int sum = 0;
    int m = n;

    while(n != 0){
        int digit = n % 10;

        sum += digit;

        n = n / 10;
    }

    if(m % sum == 0) cout<<"YES the number is Harshad Number";
    else cout<<"NO the number is not Harshad Number";

    return 0;
}