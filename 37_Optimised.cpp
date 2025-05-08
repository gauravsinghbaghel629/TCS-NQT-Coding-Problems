#include<bits/stdc++.h>
using namespace std;

int main(){
    double n1 = 1, n2 = 3, n3 = 5;

    if(n1 > n2 && n1 > n3){
        cout<<"The greatest of the 3 three numbers is: "<<n1;
    }
    else if(n2 > n1 && n2 > n1){
        cout<<"The greatest of the 3 three numbers is: "<<n2;
    }
    else{
        cout<<"The greatest of the 3 three numbers is: "<<n3;
    }

    return 0;
}

