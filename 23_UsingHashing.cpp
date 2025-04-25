#include<bits/stdc++.h>
using namespace std;

bool isSubset(int arr1[],int m,int arr2[],int n){
    if(m > n) return false;

    unordered_map<int,bool> mpp;

    for(int i=0;i<n;i++){
        mpp[arr2[i]]++;
    }

    for(int i=0;i<m;i++){
        if(mpp.find(arr1[i]) == mpp.end()){
            return false;
        }
    }
    return true;
}

int main(){
    int arr1[]={1,3,4,5,2};
	int arr2[]={2,4,3,1,7,5,15};
	
	int m= sizeof(arr1)/sizeof(arr1[0]);
	int n= sizeof(arr2)/sizeof(arr2[0]);
	
	bool ans= isSubset(arr1,m,arr2,n);
	
	if(ans==true)
	    cout<<"arr1[] is a subset of arr2[]";
	else cout<<"arr1[] is not a subset of arr2[]";
	
	return 0;
}