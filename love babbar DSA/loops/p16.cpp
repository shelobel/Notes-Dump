#include<iostream>
using namespace std;
int main(){
int n;
cin >>n;
int i=1;

while(i<=n) {
    int j=1;
    char ch ='A' + i + j - 2;
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
// C D E
// D E F G

// this pattern is similar to

// 1 
// 2 3  // WE CAN ATTAIN THIS BY USING i+j-1 (by printing in this terms)
// 3 4 5
// 4 5 6 7