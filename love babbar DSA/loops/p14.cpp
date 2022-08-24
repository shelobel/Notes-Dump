#include<iostream>
using namespace std;
int main(){
int n;
cin >>n;
int i=1;

while(i<=n) {
    int j=1;
    char ch ='A' + i + j - 2;  // remember for increasing or decreasing kind of pattern we can use j as it'll increase or decrease eventually but i not(in the inside loop) else we can use any extra variable for that
    while(j<=n){
        cout << ch << " ";
        j++;
        ch = ch + 1;
    }
    cout << endl;
    i++;
}
return 0;
}

// A B C D // here we need i+j-2
// B C D E 
// C D E F  
// D E F G

// this pattern is similar to

// 1 2 3 4
// 2 3 4 5  // WE CAN ATTAIN THIS BY USING i+j-1 (by printing in this terms)
// 3 4 5 6
// 4 5 6 7