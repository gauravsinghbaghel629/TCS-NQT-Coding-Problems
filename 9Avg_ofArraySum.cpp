#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
	int arr[] = {1, 2, 3, 4, 5};
	double sum = 0;

    // for(int i=0;i<n;i++){
    //     sum += arr[i];
    // }

    // OR
    sum = accumulate(arr,arr+n,0);

    double avg = sum / n;

    cout<<"The avg value is : "<<avg;

    return 0;
}
