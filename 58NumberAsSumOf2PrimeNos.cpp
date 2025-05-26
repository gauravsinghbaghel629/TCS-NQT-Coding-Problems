#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int cnt = 0;

    for(int i=1;i*i<=n;i++){
        if(n % i == 0){
            cnt++;

            if(n/i != i){
                cnt++;
            }
        }
    }

    if(cnt == 2) return true;
    else return false;
}

bool check(int n){
    if(isPrime(n) && isPrime(n - 2)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n = 19;
    bool ans = check(n);

    if(ans){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}