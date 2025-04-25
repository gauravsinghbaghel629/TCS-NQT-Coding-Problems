#include<bits/stdc++.h>
using namespace std;

int findEquilibriumIdx(int arr[],int n){
    int totalSum = 0;

    for(int i=0;i<n;i++){
        totalSum += arr[i];
    }

    int leftSum = 0;
    int rightSum = totalSum;

    for(int i=0;i<n;i++){
        rightSum -= arr[i];

        if(leftSum == rightSum) return i;
        
        leftSum += arr[i];
    }
    return -1;
}

int main(){
    int n = 5;
    int arr[] = {2, 3, -1, 8, 4};
    int equilibriumidx = findEquilibriumIdx(arr, n);
    cout << equilibriumidx << endl;
    return 0;
}