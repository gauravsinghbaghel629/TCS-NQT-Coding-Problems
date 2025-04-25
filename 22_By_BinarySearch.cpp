#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    int arr[n] = {6,7,9,5,3,10};
    int k = 10;

    int ans = -1;

    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = low + (high-low)/2;

        if(arr[mid] == k){
            ans = mid;
            break;
        } 
        else if(arr[mid] > k){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << "The element is present in "<<ans<<" index";


    return 0;
}