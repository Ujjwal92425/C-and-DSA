//*ptr is not instalize(Wild Pointer)
/*
#include <iostream>
using namespace std;
int main () {
    int *ptr;
    cout<<*ptr;
    return 0;
}
*/


//display nothing bcz it point to value

/*
#include <iostream>
using namespace std;
int main () {
    int *ptr;
    *ptr=12;
    cout<<ptr;
}
*/
/*
#include <iostream>
using namespace std;
int main () {
    int *ptr;
    int a=23;
    ptr=&a;
    *ptr=12;
    cout<<*ptr;
}
*/
/*
#include <iostream>
using namespace std;
int main () {
    int x;
    int *p;
    p=NULL;
    
    cout<<*p;
}


#include <iostream>
using namespace std;
int main () {
    int *ptr;
    float f=10.3;
    ptr=&f;  //return error
    cout<<*ptr;
    
    }

*/
#include <iostream>
using namespace std;
int main () {
    int x=4;
    float y= 5.5;

    void *ptr; //void pointer

    ptr=&x;

    cout<<(*(int*)ptr)<<endl; //void pointer is now float

    ptr=&y;

    cout<<(*(float*)ptr);
    }
    
    


    