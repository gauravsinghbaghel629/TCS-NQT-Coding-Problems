#include<bits/stdc++.h>
using namespace std;

void Frequency(int arr[],int n){
    unordered_map<int,int> mpp;

    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        cout<<it.first<<" "<<it.second;
        cout<<endl;
    }

    return;
}

int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}