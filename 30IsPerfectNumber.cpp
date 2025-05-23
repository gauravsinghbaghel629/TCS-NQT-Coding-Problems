#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int n){
    int sum = 0;

    for(int i=1;i<n;i++){
        if(n % i == 0){
            sum += i;
        }
    }
    return (sum == n);
}

int main(){
    bool ex1 = isPerfect(6);
    bool ex2 = isPerfect(15);
    bool ex3 = isPerfect(28);

    if (ex1 == true) {
        cout << "6 is a perfect number" << endl;
    } else cout << "6 is not a perfect number" << endl;

    if (ex2 == true) {
        cout << "15 is a perfect number" << endl;
    } else cout << "15 is not a perfect number" << endl;

    if (ex3 == true) {
        cout << "28 is a perfect number" << endl;
    } else cout << "28 is not a perfect number" << endl;

    return 0;
}