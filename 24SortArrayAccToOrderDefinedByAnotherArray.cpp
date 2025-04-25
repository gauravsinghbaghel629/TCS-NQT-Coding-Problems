#include<bits/stdc++.h>
using namespace std;

void sortA1ByA2(vector<int> &arr1,vector<int> &arr2){
    int n = arr1.size();
    int m = arr2.size();

    unordered_map<int,int> mpp;

    auto cmp = [&mpp](int &a,int &b){
        if(mpp[a] == 0 && mpp[b] == 0){
            return a < b;
        }
        else if(mpp[a] == 0) return false;
        else if(mpp[b] == 0) return true;
        else return mpp[a] < mpp[b];
    };

    for(int i=0;i<m;i++){
        if(mpp.find(arr2[i]) == mpp.end()){
            mpp[arr2[i]] = i + 1;
        }
    }

    sort(arr1.begin(),arr1.end(),cmp);
}

int main()
{

    vector<int> arr1{ 2, 1, 2, 5, 7, 1, 9, 3, 6,
                      8, 8, 7, 5, 6, 9, 7, 5 };
    vector<int> arr2{ 2, 1, 8, 3, 4, 1 };

    sortA1ByA2(arr1, arr2);

    // printing the array
    for (auto i : arr1) {
        cout << i << " ";
    }

    return 0;
}