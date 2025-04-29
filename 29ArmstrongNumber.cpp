#include<bits/stdc++.h> 
using namespace std;

//in VS its giving false, whereas its actually true

bool isArmstrong(int n){
    int len = to_string(n).length();

    int sum = 0;
    int m = n;

    while(n > 0){
        int digit = n % 10;

        sum += pow(digit,len);

        n = n / 10;
    }
    return (sum == m);
}

int main() {
    int number = 153;
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}
                  