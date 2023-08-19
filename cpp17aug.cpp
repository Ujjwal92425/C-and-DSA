// #include <iostream>
// using namespace std;
// int sum(int x,int y,int z);
// void main() {
//     cout<<"Sum" << sum(10,15,25)<<endl;
//     // cout<<"Sum" << sum(10,20)<<endl;
//     // cout<<"Sum" << sum()<<endl;

// }
#include <iostream>
using namespace std;
int main () {
    int i,pos,num,n;
    cout<<"enter the size"<<endl;
    cin >>n;
    int array[n];
    for ( i = 0; i < n; i++)
    {
        cin>>array[i];

    }

    cout<<"enter the value"<<endl;
    cin>>num;
    cout<<"enter the position"<<endl;
    cin>>pos;

    for ( i = n-1; i >=pos -1; i--)
    {
        array[i+1]=array[i];

    }
    array[pos-1]=num;
    n++;
    cout<<"New Array is :"<<endl;
    for ( i = 0; i < n ; i++)
    {
        cout <<array[i];
    } 

}
