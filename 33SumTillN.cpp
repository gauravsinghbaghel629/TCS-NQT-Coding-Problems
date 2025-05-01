#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    int sum = 0;

    for(int i=1;i<=n;i++){
        sum += i;
    }

    cout<<"The total sum till n : "<<sum<<endl;
}

int main() {

    solve(5);
    solve(6);
}
