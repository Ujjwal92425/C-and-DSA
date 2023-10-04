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

     #include <iostream>
    using namespace std;
    class invert_position {
        int x,y;
        public:
        invert_position(int a ,int  b) {
            x=a;
            y=b;
        }
        void show() {
            cout<<"\nx : "<<x;
            cout<<"\ny : "<<y;
        }
        friend void operator -(invert_position &t);
    };
    void operator -(invert_position &i) {
        i.x = -i.x;
        i.y=-i.y;
    }
    int main () {
        invert_position i(2,3);
        -i;
        i.show();
        return 0;
    }
    