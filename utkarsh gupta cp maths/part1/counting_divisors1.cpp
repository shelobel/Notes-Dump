#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int cnt = 0;
for(int i=1; i<=n; i++){
    if(n%i == 0){    // for checking prime or not we can break the funcion after getting one divisor
        cnt++;
    }
}
cout << cnt; // this will give you the count of divisors of n 
// but this process has TC = O(n) which is pretty huge .. so for bigger numbers it takes a lot of time
return 0;
}