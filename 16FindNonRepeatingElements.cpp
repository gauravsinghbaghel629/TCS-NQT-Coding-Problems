#include<bits/stdc++.h>
using namespace std;

void findNonRepeatingElement(vector<int> &nums){
    unordered_map<int,int> mpp;

    for(auto it : nums){
        mpp[it]++;
    }

    for(auto it : mpp){
        if(it.second == 1) cout<<it.first<<" ";
    }

}

int main() {
    vector<int> nums = {1,2,-1,1,3,1};
    cout<<"Non-repeating numbers are: "<<endl;
    findNonRepeatingElement(nums);
    
    return 0;
}