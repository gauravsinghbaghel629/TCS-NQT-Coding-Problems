#include<bits/stdc++.h>
using namespace std;

int minEle(vector<int> &ans){
    int n = ans.size();
    int mini = INT_MAX;

    for(int i=0;i<n;i++){
        mini = min(mini,ans[i]);
    }
    return mini;
}


int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};

    cout<<"The smallest element in the array is: "<<minEle(arr1)<<endl;
    cout<<"The smallest element in the array is: "<<minEle(arr2);

    return 0;
}