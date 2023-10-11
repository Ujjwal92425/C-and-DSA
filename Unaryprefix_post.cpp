// #include <iostream>
// using namespace std;

// class uf {
//     int a;
//     int b;
//     int c;     
//     public :
//     void getvalue() {
//         cout<<"Value of  A , B  & C"<<endl;
//         cin>>a>>b>>c;
//     }
//     void show() {
//         cout<<a<<endl<<b<<endl<<c<<endl;
//     }
//     void friend operator--(uf &x,int x1);
// };
// void operator--(uf &x, int y) {
//     x.a=x.a--;
//     x.b=x.b--;
//     x.c=x.c--;

// }
// int main () {
//     uf x1;
//     x1.getvalue ();
//     cout <<"Before Overloading : "<<endl;
//     x1.show();
//     cout<<"After Overloading : "<<endl;
//     operator--(x1,5);
//     x1.show();
//     return 0;
// }
#include <iostream>
using namespace std;
class Counter {
    private:
    unsigned int count;
    public:
    Counter() : count(0)
    {}
    Counter (int c) :count (c)
    {}
    unsigned int get_count() const
    {
        return count;
    }
    Counter operator++ () {
        return Counter(++count);
    }
    Counter operator++ (int) {
        return Counter (count ++);
    }
};
int main() {
    Counter c1,c2;
    cout<< "c1= "<<c1.get_count()<<endl;
    cout <<"c2= "<<c2.get_count()<<endl;
    ++c1;
    c2=++c1;
    cout<< "c1= "<<c1.get_count()<<endl;
    cout <<"c2= "<<c2.get_count()<<endl;
}

