#include <iostream>
using namespace std;
class one {
    
    public:
    int x,y;
    void in() {
        cout<<"Enter the data "<<endl;
        cin>>x>>y;
    }
};
class two : public one {
    
    public:
    int z;
    void take() {
        cout<<"Enter Z : "<<endl;
        cin>>z;
    }
    void dis() {
        cout<<x+y+z;
        }
};
int main() {
    two t1;
    t1.in();
    t1.take();
    t1.dis();
       
}