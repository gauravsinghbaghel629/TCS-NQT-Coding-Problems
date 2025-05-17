#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int f = 1;

    for(int i=1;i<=n;i++){
        f = f * i;
    }
    return f;
}

int strong_no(int n){
    int sum = 0;

    while(n != 0){
        int digit = n % 10;

        sum += fact(digit);

        n = n / 10;
    }
    return sum;
}

int main(){
    int n = 145;
    int ans = strong_no(n);

    if(ans == n && n != 0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}