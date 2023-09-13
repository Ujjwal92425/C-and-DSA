#include<iostream>
#include <fstream>
using namespace std;
int main() {
    // ofstream of ("result.txt");
    // of << "hello";
    // of.close();
    // cout<<"data saved "<<endl;

    //read
    char s[10];
    ifstream inf("result.txt");
    inf>>s;
    inf.close();
    cout<<s;
}