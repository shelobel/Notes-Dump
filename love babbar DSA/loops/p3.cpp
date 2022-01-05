#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int i=1;
while(i<=n){
    int j =1;
    while(j<=n) {
        cout << j;  // here we are printing in increasing order 1 2 3 4 5.. so increasing 
        j++;        // j and printing it
    }
    cout << endl;
    i++;
}
return 0;
}

// we are printing
// 12345
// 12345
// 12345
// 12345
// 12345
