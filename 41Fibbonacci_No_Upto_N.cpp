#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n == 0) cout<<0;
    else if(n == 1) cout<<0<<" "<<1<<endl;

    int a = 0;
    int b = 1;
    int ans = -1;

    cout<<"The Fibonacci Series upto n terms: "<<0<<" "<<1<<" ";

    for(int i=2;i<=n;i++){
        ans = a + b;
        cout<<ans<<" ";

        a = b;
        b = ans;
    }

    return 0;
}