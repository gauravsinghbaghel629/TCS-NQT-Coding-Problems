#include<bits/stdc++.h>
using namespace std;

void Divisor(int n){
    for(int i=1;i*i<=n;i++){
        if(n % i == 0){
            if(n/i == i){
                cout<<" "<<i;
            }
            else{
                cout<<" "<<i<<" "<<n/i;
            }
        }
    }
}

int main(){
    int n = 14;
    cout<<"Factors of "<<n<<" are: ";
    Divisor(n);

    return 0;
}