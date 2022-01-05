#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int i =1;
int count =1;
while(i<=n){
    int j=1;
    count=i;       // for this pattern we need index i as the elements are related to that
    while(j<=i){   // best approach for this kind of triangles
        cout << count << " ";
        count++;
        j++;
    }     // search for a different approach also..
    
    cout << endl;
    i++;
}
return 0;
}

// we are printing 
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15