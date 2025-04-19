#include<bits/stdc++.h>
using namespace std;

void rotateLeft(int arr[],int n,int k){
    vector<int> temp(n);

    for(int i=0;i<n;i++){
        temp[(i - k + n) % n] = arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 2;

    rotateLeft(arr,n,k);

    return 0;
}