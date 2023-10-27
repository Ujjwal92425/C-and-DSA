/*
#include<iostream>
#include<string.h>
using namespace std;

class department
{
    public:
    char name[20];
    department()
    {
        strcpy(name,"abc");
    }
    ~department()
    {
        cout<<"department class destroyed"<<endl;
    }
};
class professor
{
    int pid;
    int exp;
    department *d;
    public:
    professor(int a, int b, department *d)
    {
        pid=a;
        exp=b;
        this->d=d;
    }
    ~professor()
    {
        cout<<"professor class destroyed."<<endl;
    }
};
int main()
{
    department D;
    {
        professor p(1,2,&D);
    }
    cout<<"At this point professor gets deleted but department is still there"<<endl;
}

#include<iostream>
using namespace std;
class birthday
{
	int date, month, year;
	public:
		birthday(int d, int m, int y)
		{
			date=d;
			month=m;
			year=y;
			cout<<"birthday constructor"<<endl;
		}
		~birthday()
		{
			cout<<"birthday destructor"<<endl;
		}
		void display()
		{
			cout<<date<<"/"<<month<<"/"<<year<<endl;
		}
};
class person
{
	string name;
	birthday b;

	public:
		person(string n, int d, int m, int y):b(d,m,y)
		{
			name=n;
			cout<<"person constructor"<<endl;                                                                  
		}
		void show()
		{
			b.display();
			cout<<name;
		}
		~person()
		{
			cout<<"person distructor"<<endl;
		}
};
int main()
{
	person ob("abc",12,10,2023);
	ob.show();
}
*/
//dynamic memory

//<data type> *<ptr_name> = new<data_type> For one memory location

//<data type> *<ptr_name> = new<data_type>[size]; For array of memory location 




