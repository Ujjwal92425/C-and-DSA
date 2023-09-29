#include <iostream>
using namespace std;
class point {
    private:
    int x,y;
    public:
    point() {
        x=0,y=0;
    }
    point(int i,int j) {
        x=i;y=j;
    }
    point operator -();
    void display() {
        cout<<x<<"\t"<<y;
    }
};
