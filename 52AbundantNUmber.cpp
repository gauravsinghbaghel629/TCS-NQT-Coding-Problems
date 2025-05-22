#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 18;
    int sum = 0;

    for(int i=1;i<=n;i++){
        if(n % i == 0){
            sum += i;
        }
    }

    sum -= n;

    if(sum > n){
        cout<<"Abundant Number";
    }
    else{
        cout<<"Not Abundant Number";
    }


    return 0;
}