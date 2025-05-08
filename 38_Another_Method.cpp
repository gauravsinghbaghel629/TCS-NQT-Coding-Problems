#include<bits/stdc++.h>
using namespace std;

bool isLeapYear(int year){
    if(year % 400 == 0 || ((year % 4 == 0) && (year % 100 != 0))){
        return true;
    }
    else return false;
}

int main(){
    int year = 2024;

    if(isLeapYear(year)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    
    return 0;
}