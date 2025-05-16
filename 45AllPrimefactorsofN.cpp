#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int cnt = 0;

    for(int i=1;i*i<=n;i++){
        if(n % i == 0){
            cnt++;

            if(n/i != i){
                cnt++;
            }
        }
    }

    return (cnt == 2);
}

vector<int> getPrimeFactors(int n){ 
    vector<int> ans;

    for(int i=2;i<=n;i++){
        if(n % i == 0){
            if(isPrime(i)){
                ans.push_back(i);
            }
        }
    }
    return ans;
}


int main() {
    int n = 60;
    vector<int> ans = getPrimeFactors(n);
    cout << "Prime Factors for " << n << ": ";
    for(auto factor: ans){
        cout << factor << " ";
    }
    cout << endl;
}
                                
                            