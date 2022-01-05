#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int i=1;
while(i<=n) {
    int j =1;
    while(j<=n) {
        char ch = 'A' + i - 1; // here the ASCII numbers are gonna convert into characters
        cout << ch << " ";
        // cout << (char)('A' + i - 1) << " ";  // also gonna work ..type casting in C type
        j++;
    }
    cout << endl;
    i++;
}

return 0;
}
//we are printing  
// A A A 
// B B B
// C C C

// its basically
// 1 1 1
// 2 2 2
// 3 3 3