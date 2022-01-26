#include<iostream>
using namespace std;
// so basically for (a/b) % m.. we cant do like ((a%m) / (b%m) %m) ... its not valid.. we have to get the multiplication inverse for that to get the actual (a/b) % m .. what is multiplication inverse ?? 
// as 5 * X = 1.. so here X is multiplicable inverse of 5.. same like for mod function
// 2*X % m = 1 then X would be the multiplicable inverse of 2... like for example 2*X % 5 =1 here X is  multiple inverse of 2 respect to mod 5.. which is 3... 
// so basically we can get the value of (a/b) % m by doing ((a%m) * (b%m)^(-1)) % m
// how to find out that inverse ?
// will multiple inverse exist ?  // yes it will if gcd(b, m) = 1  // so for this we ususally get a prime number .. like 10^9 + 7
// its b^(-1) = b^(m-2) % m  // only for prime number
// so now by this we can get the value properly

 int pow(int a, int b, int m) {
    if(b==0) {
        return 1%m;
    }
    else if(b % 2 == 0){
        int t = pow(a, b/2, m);
        return ((1ll * t * t) %m);
    }
    else {
        int t = pow(a, b/2, m);
        t = ((1ll* t* t) % m);
        return (1ll * a * t % m);
    }
} 

int main(){
    int a , b , m;
    cin >> a >> b >> m;   // only m is prime
    int res1 = (a/b) % m;  //
    a = a%m;
    int inv = pow(b, m-2, m);  // fermats little theorem
    int res2 = a * inv % m;
    cout << res1 << " " << res2;
return 0;
}