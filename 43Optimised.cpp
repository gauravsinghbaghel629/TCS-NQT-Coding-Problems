#include<bits/stdc++.h>
using namespace std;

double myPow(double x,int n){
    double ans = 1;
    double m = abs(n);

    while(n != 0){
        if(n % 2 == 1){
            ans = ans * x;
            n = n - 1;
        }
        else{
            n = n / 2;
            x = x * x;
        }
    }
    
    if(n < 0) return 1 / x;
    else return x;
}

int main(){
    double x = 2;
    int n = 8;

    cout<<"Base: "<<x<<endl;
    cout<<"Power: "<<n<<endl;

    double result = myPow(x,n);
    cout<<"Result: "<<result<<endl;

    return 0;
}