#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    // for prime numbers 
    if(n<=1){
        return false;
    }
    else {
        for(int i=2; i<n; i++) {
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
}

int countPrime(int n) {
    // for counting prime numbers 
    int count = 0;
    if(n<=1){
        return 0;
    }
    else {
        for(int i=2; i<n; i++) {
            if(n%i == 0){
                count++;
            }
        }
        return count;
    }
}

// but in above 2 process the TC is very very high for higher numbers we will get a TLE O(n)

// BEST OPTMISED PROCESS
// SIEVE OF ERATOSTHENES THEORY
int countPrimeNo(int n) {
    int cnt = 0;
    vector<bool> vec(n+1, true);  // we took a vec of n+1 cz we will get te elements from 1 to n (0 is extra)
    vec[0] = vec[1] = false;  // as we know 0 and 1 is not prime number
    for(int i = 2; i<n; i++) {
        if(vec[i]) {
            cnt++;
            for(int j = 2*i; j<n; j = j+i) {
                vec[j] = 0;
            }
        }
    }
    return cnt;
} // best optimised solution (basically we are eliminating multiples of prime numbers from the range 0 to n .. so we dont have to check for them .. the funda is clear 1st make all of them prime thn eliminate the multiples so at the end of the loop we will only have to prime numbers count)  TC is O(log(logN))

// segmented sieve....


// GCD / HCF  (Euclid's Algo)
// formula  gcd(a, b) = gcd(a-b, b)
// formula  gcd(a, b) = gcd(a%b, b)  // its basically the formula wht we hv studied in schools
// gcd(72,24) = gcd(48,24) = gcd(24, 24) = gcd(0,24)   // 24 is the answer

int gcd(int a, int b) {  // pass 2 numbers and get gcd ( we also have a recursive way to solve this)
    if(a == 0){
        return b;

    }
    else if(b == 0) {
        return a;
    }
    else {                  // else {return gcd(a-b, b);}
        while(a!=b) {
            if(a>b){
                a = a-b;
            }
            else {
                b = b-a;
            }
        }
        return a;  // if the numbers are equal then it will return a(same number so doesnt matter)
    }
}

// LCM AND GCD
// formula lcd(a,b) * gcd(a, b) = a * b 
// artile "https://www.codingninjas.com/blog/2020/07/25/explained-euclids-gcd-algorithm/"

// MODULAR ARITHMATICS (read the article from codeforce) 
// (a+b) % m = ((a%m) + (b%m))%m
// (a*b) % m = ((a%m) * (b%m))%m
// (a-b) % m = ((a%m) - (b%m) +m)%m
// study the article "https://codeforces.com/blog/entry/72527"


// FAST EXPONENTIATION
// in fast exponentiation we basically deals with the power of the element like in nrml case what we do we do multiply multiple times to get the power but here we will break the power like
// a^b if b is odd -> (a^(b/2))^2 * a
// a^b if b is even -> (a^(b/2))^2 
// we use this approach to get the 
// this code also 


// HOME WORKS
// PIGEONHOLE PRINCIPLE
// CATALEN NUMBER
// INCLUSION EXCLUSION PRINCIPLE
// QSN 212! (in terms of mod M) [M = 10^9 + 7]
int main(){


return 0;
}