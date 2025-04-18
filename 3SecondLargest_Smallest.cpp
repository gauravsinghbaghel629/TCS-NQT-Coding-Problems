#include<bits/stdc++.h>
using namespace std;

int getSS(int arr[],int n){
    int smallest = INT_MAX, second_S = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i] < smallest){
            second_S = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < second_S && arr[i] != smallest){
            second_S = arr[i];
        }
    }
    return second_S;
}


int getSL(int arr[],int n){
    int largest = INT_MIN, second_L = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            second_L = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_L && arr[i] != largest){
            second_L = arr[i];
        }
    }
    return second_L;
}

void getElements(int arr[],int n){
    cout<<"Second Smallest Element is : "<<getSS(arr,n);
    cout<<endl;
    cout<<"Second Largest Element is : "<<getSL(arr,n);
}

int main(){
    int arr[]={1,2,4,7,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    getElements(arr,n);

    return 0;
}