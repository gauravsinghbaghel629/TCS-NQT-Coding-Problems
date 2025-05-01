#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    int sum = n * (n + 1) / 2;
    cout<<"The Sum of the first "<<n<<" natural numbers is: "<<sum<<endl;
}

int main() {

    solve(5);
    solve(6);
}