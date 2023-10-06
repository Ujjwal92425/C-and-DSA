#include <iostream>
using namespace std;

// class time1 {
//     int hrs;
//     public:
//     time1(int t) {//constructor of basic typ
//         hrs = t/60;
//         cout<<hrs;
//     }
// };
// int main () {
//     time1 t1(120);//minute 120
// }

// Class to basic 

class Student {
    private:
    int rollnO;
    float fees;

    public:
        Student (int a,float m) {
            rollnO =a;
            fees = m;
        }
        operator int ()  {
            return(rollnO);//keyword used
        }
        operator float () {
            return (fees);
        }
};
int main () {
    int j;
    float f;
    Student st(5,4200.50);
    j = st;
    f= st;
    cout<<"Value of j : "<<j<<endl;
    cout<<"Value of f : "<<f<<endl;
}