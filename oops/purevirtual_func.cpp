#include<iostream>
using namespace std;
// so what is pure virtual function and abstrat classes ??
// as we are inheriting from car class so we hv defined the imcar() func inside that class if we make the value of imcar() func 0 then that would be a purely virtual function.. and that car class would be an abstract class( an abstract class must hv a one purley virtual function)

class car { // this class is now an abstract class 
    public :
    virtual void imcar() = 0; // making it purely virtual function now if we derive any class from this car class we need to define this imcar() in that otherwise compiler will throw an error
};

class ford : public car {
    public:
    void imcar(){
        cout << "i m a ford car" << endl;
    }
};
class audi : public car {
    public:
    void imcar(){
        cout << "i m an audi car" << endl; // hv to define it otherwise the compiler will throw an error
    }
};

int main(){
    car* c = new ford;
    c->imcar(); // here this will print "i m a ford car" cz here as we r using a pointer of car type so the function in the car class will be initiated
    
return 0;
}