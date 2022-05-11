#include<iostream>
using namespace std;
class A {
    public :
    int a;
    void setV(int a){
        a = a; // here as the name of both of the variable is same so we cant use it
        // inspite of this we can use 
        this->a = a; // this is useable
    }
    A& theobj(int a){
        this->a = a;
        return *this; // main use of this pointer to return the exact object
    }
    void getV(){
        cout << a << endl; 
    }
};
int main(){
    // this is a pointer that points to the object that invokes the member functions
    A a;
    a.setV(4);
    a.getV();
return 0;
}