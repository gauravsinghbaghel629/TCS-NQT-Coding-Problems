#include<bits/stdc++.h>
using namespace std;

int main(){
    int l = 2;
    int r = 7;
    int sum = 0;

    for(int i=l;i<=r;i++){
        sum += i;
    }

    cout<<"The sum of numbers in the range is: "<<sum<<endl;

    return 0;
}