#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int i =1;
int count =1;
while(i<=n){
    int j=1;
    while(j<=i){   // best approach for this kind of triangles
        cout << i-j+1 << " ";  // remember this i-j+1 pattern
        j++;
    }
    cout << endl;
    i++;
}
return 0;
}

// we are printing 
// 1 
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1