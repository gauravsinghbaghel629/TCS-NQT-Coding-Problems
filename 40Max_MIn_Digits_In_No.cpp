#include<bits/stdc++.h>
using namespace std;

void MinMax(int n){
    int mini = INT_MAX,maxi = INT_MIN;

    while(n != 0){
        int digit = n % 10;

        if(digit < mini){
            mini = digit;
        }
        if(digit > maxi){
            maxi = digit;
        }

        n = n / 10;
    }

    cout<<"The minimum number is: "<<mini<<endl;
    cout<<"The minimum number is: "<<maxi<<endl;
}

int main(){
    int n = 4726;
    MinMax(n);
    return 0;
}