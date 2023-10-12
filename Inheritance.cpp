// #include <iostream>
// using namespace std;
// class one {
    
//     public:
//     int x,y;
//     void in() {
//         cout<<"Enter the data "<<endl;
//         cin>>x>>y;
//     }
// };
// class two : public one {
    
//     public:
//     int z;
//     void take() {
//         cout<<"Enter Z : "<<endl;
//         cin>>z;
//     }
//     void dis() {
//         cout<<x+y+z;
//         }
// };
// int main() {
//     two t1;
//     t1.in();
//     t1.take();
//     t1.dis();
       
// }

/*#include<bits/stdc++.h>
using namespace std;

class Student {
    private:
    int roll_no;
    protected:
    char section[10];
    public:
    void get_rno() {
        cout<<"Enter the Roll No" <<endl;
        cin>>roll_no;
    }
    void show_rno() {
        cout<<"Roll No : "<<roll_no<<endl;
    }
};
class result : private Student {
    private:
    float fee;
    public:
    void get_data() {
        get_rno();
        cout<<"Enter Fee "<<endl;
        cin>>fee;

        cout<<"Enter Section "<<endl;
        cin>>section;
    }
    void display() {
        show_rno();
        cout<<"Fee : "<<fee<<endl;
        cout<<"Section : "<<section<<endl;
    }
}; 

int main () {
    result obj1;
    obj1.get_data();
    obj1.display();
    //obj1.get_rno(); //not work in  Private
    //obj1.show_rno(); // Private
    //obj1.roll_no=78;  // will inh.


}
*/
#include<iostream>
using namespace std;



