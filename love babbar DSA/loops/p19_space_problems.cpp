// _ _ _ 1
// _ _ 1 2 1
// _ 1 2 3 2 1
// 1 2 3 4 3 2 1 
#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int i=1;
while(i<=n) {
    int space = 1;
    while(space<=n-i) {
        cout << " ";
        space++;
    }
    int j=1;
    int count =1;
    while(j<=i) {
        cout << count;
        count++;
        j++;
    }
    if(i>=2) {
        int s = i-1;
        int k=1;
        while(k<=i-1){
            cout << s ;
            k++;
            s--;
        }
    }
    cout << endl;
    i++;
}
return 0;
}