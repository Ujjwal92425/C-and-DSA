#include <iostream>
using namespace std;

/*
class B1 {
    public:
    void show_data() {
        cout<<"In the Base Class 1"<<endl;
    }
};

class B2 {
    public:
    void show_data() {
        cout<<"In the Base Class 2"<<endl;

    }
};

class D : public B1,public B2 {
    public:
};

int main () {
    D obj;
    //obj.show_data();//Ambiguity problem 
    // Solution 
    //obj.B1 ::show_data();
    //obj . B2 ::show_data();
}
*/


class B {

    protected:
    int x;

    public:
    void get_dataB() {
        cout<<"Enter the value of x : "<<endl;
        cin>>x;
    }
};

class DB1: public virtual B {
    protected:
    int y;

    public:
    void get_dataDB1() {
        cout<<"Enter the value of y : "<<endl;
        cin>>y;
    }
};

class DB2:public virtual B {
    protected:
    int z;

    public:
    void get_dataDB2() {
        cout<<"Enter the value of z : "<<endl;
        cin>>z;
    }
};

class D : public DB1,public DB2 {
    public:
    void sum() {
        int result;
        result = x+y+z;
        cout<<"Result : "<<result;
    }
};

int main () {
    D obj1;
    obj1.get_dataB();
    obj1.get_dataDB1();
    obj1.get_dataDB2();
    obj1.sum();
    return 0;
}


