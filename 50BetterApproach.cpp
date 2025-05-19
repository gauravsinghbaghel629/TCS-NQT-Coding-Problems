#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 4, b = 8;
    int gcd = 1;

    for(int i=min(a,b);i>=1;i--){
        if(a % i == 0 && b % i == 0){
            gcd = i;
            break;
        }
    }

    cout<<"The LCM of a & b is: "<<gcd<<endl;

    return 0;
}