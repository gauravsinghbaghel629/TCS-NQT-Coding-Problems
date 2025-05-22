#include<bits/stdc++.h>
using namespace std;

int main(){
    int l = 2;
    int r = 7;

    int ans = (r * (r + 1)) / 2 - ((l - 1) * (l)) / 2;

    cout<<"The sum of the numbers in the given range is: "<<ans<<endl;

    return 0;
}