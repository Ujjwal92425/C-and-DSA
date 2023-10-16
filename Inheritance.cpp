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


//Hierarchical
/*#include<iostream>
using namespace std;
class M  {
    protected:
    int x;
    public:
    void set(int a) {
        x=a;
    }

};
class N :public M {
    public:
    void display() {
        cout<<"X : "<<x<<" accessed in Derived Class N "<<endl;
    }
};
class O :public M {
    public:
    void display() {
        cout<<"X : "<<x<<" accessed in Derived Class O";
    }
};
int main() {
    N obj1;
    O obj2;
    obj1.set(12);
    obj1.display();
    obj2.set(19);
    obj2.display();
    return 0;
}*/

//Hybrid
#include<iostream>
using namespace std;
class student
{
    protected:
    int roll_number;
    public:
    void get_number(int a)
    {
        roll_number=a;
    }
    void put_number()
    {
        cout<<"Roll No."<<roll_number<<endl;
    }
};
class test:public student
{
    protected:
    float part1, part2;
    public:
    void get_marks(float x, float y)
    {
        part1=x;
        part2=y;
    }
    void put_marks()
    {
        cout<<"\n"<<"part1="<<part1<<"\n"<<"part2="<<part2<<"\n";
    }
};
class sports
{
    protected:
    float score;
    public:
    void get_score(float s)
    {
        score=s;
    }
    void put_score()
    {
        cout<<"Sports wt:"<<score<<"\n\n";
    }
};
class result:public test,public sports
{
    float total;
    public:
    void display();
};
void result :: display () {
    total = part1 +part2+score;
    put_number();
    put_marks();
    put_score();
    cout<<"Total Score : "<<total<<endl;

}
int main() {
    result student_1;
    student_1.get_number(1234);
    student_1.get_marks(27.5,33.5);
    student_1.display();
    return 0 ;
}



