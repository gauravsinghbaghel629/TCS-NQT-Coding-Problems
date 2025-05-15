#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 5;
    int n = 3;
    int ans = 1;

    for(int i=1;i<=n;i++){
        ans = ans * x;
    }
    cout<<x<<" raised to the power "<<n<<" is "<<ans;

    return 0;
}