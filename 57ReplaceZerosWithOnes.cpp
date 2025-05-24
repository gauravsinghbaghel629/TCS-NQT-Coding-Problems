#include<bits/stdc++.h>
using namespace std;

int replaceZeroesWithOnes(int num){
    if(num == 0) return 1;

    int ans = 0, temp = 1;

    while(num > 0){
        int d = num % 10;
        if(d == 0){
            d = 1;
        }

        ans = d * temp + ans;
        num = num / 10;
        temp = temp / 10;
    }

    return ans;
}

int main(){
    int n = 204;
    int res = replaceZerosWithOnes(n);

    cout<<"After replacing zeroes with ones "<<n<<" becomes "<<res<<endl;

    return 0;
}