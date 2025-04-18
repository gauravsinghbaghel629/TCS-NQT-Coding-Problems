#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n){
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start],arr[end]);

        start++;
        end--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return;
}

int main() {
    int n = 5;
    int arr[] = { 5, 4, 3, 2, 1};
    reverseArray(arr, n);
    return 0;
 }