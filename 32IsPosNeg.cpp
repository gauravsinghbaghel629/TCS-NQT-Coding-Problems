#include<bits/stdc++.h>
using namespace std;

void check(int n){
    if(n < 0) cout<<n<<" is Negative";
    else if(n == 0) cout<<n<<" is Equal to 0";
    else cout<<n<<" is Positive";

    cout<<endl;
}

int main() {
    int n = 5;
    check(n);
    n = -6;
    check(n);
}