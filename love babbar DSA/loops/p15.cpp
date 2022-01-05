#include<iostream>
using namespace std;
int main(){
int n;
cin >>n;
int i=1;
char ch ='A';
while(i<=n) {
    int j=1;
    
    while(j<=i){
        cout << ch << " ";
        j++;
        ch = ch + 1;
    }
    cout << endl;
    i++;
}
return 0;
}

// A 
// B C
// D E F
// G H I J
// K L M N O

// this pattern is similar to

// 1
// 2 3
// 4 5 6 
// 7 8 9 10
// 11 12 13 14 15