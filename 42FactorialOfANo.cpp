#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int f = 1;
    for(int i=1;i<=n;i++){
        f = f * i;
    }

    cout<<"The factorial of all the numbers till n : "<<f<<endl;

    return 0;
}