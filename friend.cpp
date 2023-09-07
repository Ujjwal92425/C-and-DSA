#include <iostream>
using namespace std;
class second;
class first {
    int x;
    public :
        void in () {
            cout<<"enter x: "<<endl;
            cin>>x;
        }
        friend void process(first,second);
};
class second {
    int y;
    public :
        void in1 () {
            cout<<"enter y: "<<endl;
            cin>>y;
        }
        friend void process(first,second);
};
void process(first f9,second s9) {
    cout<<f9.x+s9.y<<endl;
}
int main () {
    first f7;
    second s7;
    f7.in();
    s7.in1();
    process(f7,s7);
}
