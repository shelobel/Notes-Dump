#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int i=1;
while(i<=n) {
    int j=1;
    char ch = 'A' + n - i ;   // very important for this approach
    while(j<=i) {
        
        cout << ch << " " ;
        ch++;
        j++;
    }
    cout << endl;
    i++;
}
return 0;
}

// we are printing 
// D 
// C D
// B C D
// A B C D

// its like 
// 4
// 3 4
// 2 3 4
// 1 2 3 4