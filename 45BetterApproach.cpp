                                
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

// Function to check if a
// given number is prime.
bool checkPrime(int n){ 

    // Initialize a counter variable to
    // count the number of factors.
    int cnt = 0;

    // Loop through numbers from 1
    // to the square root of n.
    for(int i = 1; i <= sqrt(n); i++){ 

        // If n is divisible by i
        // without any remainder.
        if(n % i == 0){ 

            // Increment the counter.
            cnt = cnt + 1;

            // If n is not a perfect square,
            // count its reciprocal factor.
            if(n / i != i){
                cnt = cnt + 1;
            }
        }
    }

    // If the number of
    // factors is exactly 2.
    if(cnt == 2){
         // Return true, indicating
         // that the number is prime.
        return true;
    }
    // If the number of
    // factors is not 2.
    else{ 
        // Return false, indicating
        // that the number is not prime.
        return false; 
    }
}

// Function to return a list of 
// prime factors of input 'n'
vector<int> getPrimeFactors(int n){ 
    // Declare a vector to store
    // the prime factors of n.
    vector<int> primeFactors; 
    
    // Loop through numbers from 1
    // to the square root of n.
    for(int i = 1; i<=sqrt(n); i++){ 
        
        // Check if n is divisible by
        // i without any remainder.
        if(n%i==0){ 
            
            // If it is, call the
            // function checkPrime to
            // determine if i is prime.
            if(checkPrime(i)){ 
                
                // If i is prime, add it
                // to the vector of prime factors.
                primeFactors.push_back(i); 
            }
            
            // Check for the reciprocal factor
            if(n/i != i){
                // If it is, call the
                // function checkPrime to
                // determine if n/i is prime.
                if(checkPrime(n/i)){
                    // If n/i is prime, add it
                    // to the vector of prime factors.
                    primeFactors.push_back(n/i);
                }
            }
        }
    }
    // Return the vector
    // containing the prime factors of n.
    return primeFactors; 
}



int main() {
    int n = 60;
    vector<int> ans = getPrimeFactors(n);
    cout << "Prime Factors for " << n << ": ";
    for(auto factor: ans){
        cout << factor << " ";
    }
    cout << endl;
}
                                
                            