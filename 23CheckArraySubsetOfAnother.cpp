#include<bits/stdc++.h>
using namespace std;

bool bsearch(int ele,int arr2[],int n){
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = low + (high-low)/2;

        if(arr2[mid] == ele) return true;
        else if(arr2[mid] > ele) {
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return false;
}

bool isSubset(int arr1[],int m,int arr2[],int n){

    sort(arr2,arr2 + n);

    if(m > n) return false;

    for(int i=0;i<m;i++){
        bool present = bsearch(arr1[i],arr2,n);

        if(present == false) return false;
    }
    return true;
}

int main() {
	// your code goes here
	int arr1[]={1,3,4,5,2};
	int arr2[]={2,4,3,1,7,5,15};
	
	int m= sizeof(arr1)/sizeof(arr1[0]);
	int n= sizeof(arr2)/sizeof(arr2[0]);
	
	bool ans = isSubset(arr1,m,arr2,n);
	
	if(ans == true)
	    cout<<"arr1[] is a subset of arr2[]";
	else cout<<"arr1[] is not a subset of arr2[]";
	
	return 0;
}