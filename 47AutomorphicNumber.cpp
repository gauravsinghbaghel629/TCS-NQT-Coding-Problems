#include <iostream>
using namespace std;

bool isAutomorphic(int n){
    int sq = n * n;

    while(n != 0){
        if(n % 10 != sq % 10){
            return false;
        }

        n = n / 10;
        sq = sq / 10;
    }
    return true;
}


int main() {
  int N = 25;
  if(isAutomorphic(N))
  cout<<"Automorphic Number"<<endl;
  else
  cout<<"Not Automorphic Number"<<endl;
  return 0;
}