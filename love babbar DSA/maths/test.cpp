#include<iostream>
using namespace std;
int gcd(int a, int b) {  // pass 2 numbers and get gcd ( we also have a recursive way to solve this)
    if(a == 0){
        return b;

    }
    else if(b == 0) {
        return a;
    }
    else {                  // else {return gcd(a-b, b);}
        while(a!=b) {
            if(a>b){
                a = a-b;
            }
            else {
                b = b-a;
            }
        }
        return a;
    }
}
int main(){
int a, b;
a = b =24;
cout << gcd(a,b);
return 0;
}