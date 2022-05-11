// friend function is nothing but it gives u the power to access the private and protected elements of a class..we can define a friend function as well as a friend class through which we can access all the private and public members of that particular class..
#include<iostream>    // https://www.geeksforgeeks.org/friend-class-function-cpp/
using namespace std;
class triangle {
    private : 
    float a;
    float cir;
    float area;
    
    public :
    void setA(int b) {
        a = b;
        cir = 3*a;
        area = (1.73*a*a)/4;
    }
    friend void accessT(triangle); // declearing this as a friend function to triangle
    // we can also decleare a friend class to a class
    friend class A;
};
class A { // this class is a friend class to class triangle
    public:
    void accessTC(triangle t){
    cout << t.a <<endl;
    cout << t.cir << endl;
    cout << t.area << endl;
    }
};

void accessT(triangle t){  // we cant access a and cir directly we need to make it friend
    cout << t.a <<endl;
    cout << t.cir << endl;
    cout << t.area << endl;
}
int main(){
    triangle t;
    t.setA(5.5);
    accessT(t);
    cout << endl;
    // envoking friend class A
    A a;
    a.accessTC(t);
return 0;
}