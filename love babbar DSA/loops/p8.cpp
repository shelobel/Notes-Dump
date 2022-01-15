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
        cout << count << " ";
        count++;
        j++;
    }
    count--;
    cout << endl;
    i++;
}
return 0;
}

// we are printing 
// 1 
// 1 2
// 2 3 4
// 4 5 6 7
// 7 8 9 10 11