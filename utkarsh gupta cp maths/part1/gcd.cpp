#include<iostream>
using namespace std;
// TC is O(log(max(a, b)))
int gcd(int a, int b) {  
    if( a == 0){   // here we are only putiing if a becomes zero then return b so basically we are assuming that a would be smaller
        return b;
    }
    else {
        return gcd (b%a, a);  // here also we are passing the remainder at first which will be smaller or equal to a .. so ya passing arguments is important here 
    }
}
int main(){
// eular's theorem 
cout << gcd (24, 15) << endl;
return 0;
}