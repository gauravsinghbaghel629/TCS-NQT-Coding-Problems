#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
    while(a > 0 && b > 0){
        if(a > b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }

    if(a == 0) return b;
    else return a;
}

int main(){
    int a = 4, b = 8;
    int g = GCD(a,b);

    int lcm = (a * b) / g;

    cout<<"The LCM of the two given numbers is: "<<lcm<<endl;
    return 0;
}