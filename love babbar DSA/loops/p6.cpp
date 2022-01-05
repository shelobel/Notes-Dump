#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int i=1;
while(i<=n){
    int j=n-i+1; // this is basically giving the reverse order ..
    while(j<=n){  // another approach can be we have ith number of cloumn for each row
        cout << "*" << " "; // like for i=1.. column is 1.. for i =2.. column is 2..etc
        j++;                // so we can loop j till j<=i.. that will be easier..
    }
    cout << endl;
    i++;
}
return 0;
}
// we are printing 
// *
// * * 
// * * *
// * * * *
// * * * * *
