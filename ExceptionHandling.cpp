#include<iostream>
using namespace std;

// void test(int x) {
//     try {
//         if(x==0)  {
//             throw x;
//         }
//         if (x==-1)
//         {
//             throw 'x';
//         }
//         if (x==1)
//         {
//             throw 1.0;
//         }
//     }
//     catch(...) {
//         cout<<"Caught an exception";
//     }
        
// }

// int main () {
//     cout<<"testing generic catch";
//     test(-1);
//     test(0);
//     test(1);
//     return 0;
// }







// int main()
// {
// 	try{
// 		cout<<"before throw\n";
		
// 		throw(1);
// 	}
// 	catch(int x)
// 	{
// 		cout<<x <<" is printed\n"; 
// 	}
// 	cout<<"exception sucessfull";
// }





// #include<iostream>
// using namespace std;
// void divide(double x,double y)
// {
// 	cout<<"inside function\n";
// 	try
// 	{
// 		if(y==0.0)
// 		throw y;
// 		else
// 		cout<<"\ndivision="<<x/y;
// 	}
// 	catch(double)
// 	{
// 		cout<<"\ncatch double inside function";
// 		throw;
// 	}
// 	cout<<"\nend of function";
// }
// int main()
// {
// 	cout<<"\ninside main";
// 	try
// 	{
// 		divide(10.5,2.0);
// 		divide(20.0,0.0);
// 	}
// 	catch(double)
// 	{
// 		cout<<"\ncaught doublr inside main";
// 	}
// 	cout<<"\nend of main";
// 	return 0;
// }





class Test {
    public:
    Test () {
        cout<<"Constructor of Test"<<endl;
    }
    ~Test() {
        cout<<"Distructor of Test "<<endl;

    }
};
int main () {
    try {
        Test t1;
        throw 10;
    }
    catch(int i) {
        
    }
}