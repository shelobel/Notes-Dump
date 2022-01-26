#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
// now suppose we are given to get the number of divisors of all the numbers from 1 to n.. if we use that root n method that will make combined to have a time complexity of N*(root N).. which is also very high
// we have to use a different process which is also similar like seive euralos process..
// basically we will make an array or an vector all initialised to 0.. now we will iterate on multiples like for 2 its 2, 4, 6, 8... for 3 its 3, 6, 9, 12... like that and we will mark the array of that index as +1 as 2 will be divisor for 2, 4, 6, 8 etc.. and 3 will be divisor for 3 ,6, 9, 12 etc.. we ultimately after one whole iteration on 1 to n we will get the divisors for each number
vector<int> vec (n+1);  // all are 0
for(int i =1; i<=n; i++) {
    for(int j =i; j<=n; j += i){
        vec[j]++;
    }
}

for(int i=1; i<=n; i++){
    cout << vec[i] << endl;
}

// very well optimised ..
// TC is (n/1 + n/2 + n/3 +...+n/n)  does exceeds O(NlogN) much faster than O(N*(rootN)

// for prime use sieve of eratos theorem & linear sieve
return 0;
}