// what is virtual function ??
// suppose we hv a base class which has a function (func method) and a derived class from that base class and we hv modified that function int that derived class so now if we are accessing that functions through any pointer of that base class thn virtual function gives us the power to control what we will execute through that virtual key word..
#include<iostream>
using namespace std;
// class car {
//     public :
//     void imcar() {
//         cout << "i m a car" << endl;
//     }
// };

// class ford : public car {
//     public:
//     void imcar(){
//         cout << "i m a ford car" << endl;
//     }
// };

// int main(){
//     car* c = new ford;
//     c->imcar(); // here this will print "i m car" cz here as we r using a pointer of car type so the function in the car class will be initiated
    
// return 0;
// }

class car {
    public :
    virtual void imcar() {
        cout << "i m a car" << endl;
    }
};

class ford : public car {
    public:
    void imcar(){
        cout << "i m a ford car" << endl;
    }
};

int main(){
    car* c = new ford;
    c->imcar(); // here this will print "i m a ford car" cz here as we r using virtual func so it will execute if and only if the derived class has no such function (here it has so it will print "i m a ford car")
    
return 0;
}

