#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int cnt = 0;

    for(int i=1;i*i<=n;i++){
        if(n % i == 0){
            cnt++;

            if(n/i != i) cnt++;
        }
    }
    return (cnt == 2);
}

void PrintPrimesbwrange(int a,int b){
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return;
}

int main()
{
  int a = 11, b = 17;
  PrintPrimesbwrange(a, b);
  return 0;
}
