
#include<iostream>
using namespace std;
// class BC
// {
// 	public:
// 		virtual void show()
// 		{
// 			cout<<"\nshow() of base class"<<endl;
			
// 		}
// };
// class DC:public BC
// {
// 	public:
// 		void show()
// 		{
// 			cout<<"\nshow() of derived class"<<endl;
// 		}
// };
// int main(){
// 	BC *bptr;
// 	BC base;
// 	bptr=&base;
// 	cout<<"\n-----------runtime polimoephism-----------";
// 	cout<<"bptr points to base objects\n";
// 	bptr->show();
// 	DC derived;
// 	bptr=&derived;
// 	cout<<"bptr now points to derived objects\n";
// 	bptr->show();
// 	return 0;
// }

class teacher  {
    public:
    virtual void proj()=0;
    void show() {
        cout<<"This is sample abstract class ";
    }
};
class derived1:public teacher {
    public:
    void proj() {
        cout<<"C++"<<endl;
    }
};
int main () {
    teacher *ptr;
    derived1 obj1;
    ptr=&obj1;
    ptr->proj();
    ptr->show();
}

