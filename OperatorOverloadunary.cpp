// #include <iostream>
// using namespace std;
// class abc {
//     private:
//     int x;
//     int y;
//     int z;

//     public:
//     abc(int a,int b,int c) {
//         x=a;
//         y=b;
//         z=c;

//     }
// void display () {
//     cout<<x;
//     cout<<y;
//     cout<<z;
//     cout<<endl;

// }
// void operator-() {
//     x=-x;
//     y=-y;
//     z=-z;
// }
// };
// int main () {
//     abc s(10,-20,30);
//     cout<<"s: ";
//     s.display();
//     -s;
//     cout<<"s:";
//     s.display();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class invert_position{
//     int x,y;
//     public:
//     invert_position(int a,int b) {
//     x=a;
//     y=b;
//     }
//     void show() {
//         cout<<"\nx= "<<x;
//         cout<<"\ny= "<<y;
//     }
//     friend void operator-(invert_position);
//     };

//     void operator -(invert_position i)
//     {
//         i.x=i.x;
//         i.y=i.y;
//     }
//     int main () {
//         invert_position i(2,3);
//         -i;
//         i.show();
//         return 0;
//     }

    // #include <iostream>
    // using namespace std;
    // class point {
    //     int x,y;
    //     public:
    //     point() {
    //         x=0;y=0;                         
    //     }                                            
    //     point(int i,int j) {                            
    //         x=i;y=j;                                     
    //     }                                                        
    //     point operator -();                                          
    //     void display () {
    //         cout<<x<<"\t"<<y;
    //     }
    // };
    // point point::operator-() {
    //     x=-x;
    //     y=-y;

    // }
    // int main() {
    //     point o1(10,10);
    //     -o1;
    //     o1.display();
    // }

// #include <iostream>
// using namespace std;
// class sum {
//     public:
//     int b,a;
//     sum() {//constructor
//         b=50;
//     }
//     void set_data () {
//         cout<<"Enter a : ";
//         cin>>a;
//     }
//     int operator+(sum s1){
//         return(a+s1.b);
//     }

//     };
    
//     int main() {
//         int d;
//         sum s,t;
//         s.set_data();
//         d=s+t;
//         cout<<"Sum is : "<<d;
//     }
    
// 

#include <iostream>
using namespace std;

class complex {
    int x,y;
public:
    complex () {
        x=10;
        y=20;
    }
    complex(int a,int b) {
        x=a;
        y=b;
    }
    friend complex operator +(complex,complex);
    void show() {
        cout<<x<<"+i"<<y;
    }
};

complex operator+(complex e1,complex e2) {
    complex temp;
    temp.x= e1.x+e2.x;
    temp.y =e1.y+e2.y;
    return (temp);
}

int main () {
    complex e1(2,3),e2(4,5),e3;
    e3=e1+e2;
    e3.show();
}
