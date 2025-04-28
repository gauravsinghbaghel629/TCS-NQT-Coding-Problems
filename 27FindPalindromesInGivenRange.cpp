#include<iostream>
using namespace std;
 
// A function to check if n is palindrome
bool isPalindrome(int n)
{
    int ans = 0;
    int m = n;
    while(n != 0) {
        ans = (ans*10) + n%10;
        n = n/10;
    }

    return (m == ans);
}
 
int main()
{
    int min = 100;
    int max = 150;
    for(int i=min; i<=max; i++) {
        if(isPalindrome(i)) {
            cout<<i <<" ";
        }
    }    
    return 0;
}