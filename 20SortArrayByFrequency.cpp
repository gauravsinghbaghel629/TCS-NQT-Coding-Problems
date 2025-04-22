#include<bits/stdc++.h>
using namespace std;

static bool sortele(pair<int,int> &a,pair<int,int> &b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}


vector<int> Sortelementsbyfreq(vector<int> &arr,int n){
    unordered_map<int,int> mpp;

    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    vector<pair<int,int>> v;

    for(auto it : mpp){
        v.push_back({it.first, it.second});
    }

    sort(v.begin(),v.end(),sortele);

    vector<int> res;

    for(int i=0;i<v.size();i++){
        while(v[i].second > 0){
            res.push_back(v[i].first);
            v[i].second--;
        }
    }
    return res;
}

int main()
{
  vector<int> arr = {3, 3, 5, 2, 1, 1, 2};
  int n = 7;
  vector<int> ans = Sortelementsbyfreq(arr, n);

  for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
  }

  return 0;
}