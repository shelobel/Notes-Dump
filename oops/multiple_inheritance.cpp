#include<iostream>
using namespace std;
// basic syntax od multiple inheritance 
// class derivedC : visibility-mode base1, visibility-mode base2 {
//     class body of derivedC class
// } 
class bas1{
    protected:
    int base1int;
    public:
    void set_base1(int a){
        base1int = a;
    }
};
class bas2{
    protected:
    int base2int;
    public:
    void set_base2(int a){
        base2int = a;
    }
};
class derivedC : public bas1, public bas2 {
    public:
    void show(){
        cout << base1int << endl;
        cout << base2int << endl;
        cout << base1int + base2int <<endl;
    }
};
int main(){
    derivedC h;
    h.set_base1(10);
    h.set_base2(15);
    h.show();  // works
return 0;
}