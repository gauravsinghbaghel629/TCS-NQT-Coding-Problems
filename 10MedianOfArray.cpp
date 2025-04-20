#include<bits/stdc++.h>
using namespace std;

void getMedian(int arr[],int n){
    sort(arr,arr+n);
    double ans = 0;

    if(n%2 == 1){
        ans = arr[n / 2];
    }
    else{
        ans = arr[(n/2) - 1] + arr[(n/2)];
        ans = ans / 2;
    }
    cout<<"The median is : "<<ans;
}

int main()
{
    int arr[] = {4,7,1,2,5,6};
    int n = 6;

    getMedian(arr,n);
    return 0;
}