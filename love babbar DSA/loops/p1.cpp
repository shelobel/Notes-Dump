#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int i=1;  // here we are taking that from 1 so that we dont ge an extra row
while(i<=n) {
    int j =1; // we are taking j from 1 as j will start from the index 1 of that row and 
    while(j<=n) {  // it will go till n as the number of cloumns are similar to total rows
        cout << "* " ;
        j++;
    }
    cout << endl;
    i++;
}
return 0;
}
// we are printing this 
// * * * * * 
// * * * * *
// * * * * *
// * * * * *
// * * * * *   