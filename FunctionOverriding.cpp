#include <iostream>
using namespace std;

class A {
    public:
    void show() {
        cout<<"Int The Base Class A "<<endl;
    }
};

class B:public A {
    public:
    void show() {
        cout<<"Int The Derived Class B "<<endl;
    }
};
int main() {
    B obj1;
    obj1.show(); //derived class show
    obj1.A ::show();
}

