#include<iostream>
#include <fstream>
using namespace std;
int main() {
    // ofstream of ("result.txt");
    // of << "hello";
    // of.close();
    // cout<<"data saved "<<endl;

    //read
    // char s[10];
    // ifstream inf("result.txt");
    // inf>>s;
    // inf.close();
    // cout<<s;

    char s[30];
    ofstream of("result");
    of<<"hello";
    of.close();
    cout<<"data saved"<<endl;
    ifstream inf("result");
    inf>>s;
    cout<<s;
    inf.close();
    return 0;
}