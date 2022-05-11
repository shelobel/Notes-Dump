#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
// now more optimised process for counting divisor..
// we know that if n is divisible by i (a random number) then it will also be divisible by (n/i) as ((n/i) * i  = n).. so we dont need to iterate for n times like from ( 1 to.. n ) we can iterate time (n^(1/2)) times as for any i(number)  we will get (n/i) also as a divisor so..
int cnt = 0;
for(int i = 1; i*i<=n; i++) {
    if(n%i == 0) {  // we are adding for i
        cnt++;
        if(i != (n/i)) {  // we are adding for (n/i) .. one edge case will be there if n is perfect square then we will count same element 2 times so we have to test before counting 
            cnt++;
        }
    }
}
/// here the TC is O(n^(1/2))
return 0;
}