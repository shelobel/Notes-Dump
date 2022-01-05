#include<iostream>
using namespace std;
int main(){
int n;
cin >>n;
int i=1;
while(i<=n) {
    int j=1;
    char ch ='A';
    while(j<=n){
        cout << ch << " ";
        j++;
        ch = ch + 1;  // or we can use 'A' + j -1;
    }
    cout << endl;
    i++;
}
return 0;
}

// A B C 
// A B C 
// A B C

// this pattern is similar to

// 1 2 3
// 1 2 3
// 1 2 3