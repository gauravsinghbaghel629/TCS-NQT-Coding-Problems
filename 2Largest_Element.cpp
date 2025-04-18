#include<bits/stdc++.h>
using namespace std;

int maxEle(int arr[],int n){
    int maxi = INT_MIN;

    for(int i=0;i<n;i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}

int main() {
    int arr1[] = {2,5,1,3,0};
    int n = 5;

    cout << "The largest element in the array is: " << maxEle(arr1,n)<< endl;
   
    int arr2[] =  {8,10,5,7,9};

    cout << "The largest element in the array is: " << maxEle(arr2,n)<<endl;
    return 0;
}