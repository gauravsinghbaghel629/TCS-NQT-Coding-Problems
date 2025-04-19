#include<bits/stdc++.h>
using namespace std;

// Right Rotate

void rotateLeft(int arr[],int n,int k){
    reverse(arr,arr+n);
    reverse(arr,arr+k);
    reverse(arr+k+1,arr+n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 2;

    rotateLeft(arr,n,k);

    return 0;
}