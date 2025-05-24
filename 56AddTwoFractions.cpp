#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
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

void simple(int num,int den){
    int g = gcd(num,den);

    num /= g;
    den /= g;
}

int main(){
    int num1 = 3, den1 = 4, num2 = 1, den2 = 7, num3, den3;
    int lcm = (den1 * den2) / gcd(den1 , den2);

    den3 = lcm;

    num3 = num1 * (den3 / den1) + num2 * (den3 / den2);
    simple(num3, den3);

    cout<<num1<<"/"<<den1<<" + "<<num2<<"/"<<den2<<" = "<<num3<<" / "<<den3;

    return 0;
}