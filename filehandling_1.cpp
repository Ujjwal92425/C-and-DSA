/*
#include<iostream>
#include <fstream>
using namespace std;
int main() {
    // ofstream of ("result.txt");
    // of << "hello";
    // of.close(); .........
    // cout<<"data saved "<<endl;.0
    
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
*/
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main () {
//     char s[30];
//     ofstream fileout;
//     ifstream filein;
//     fileout.open("data",ios::app);
//     fileout <<"Hello World ";
//     fileout.close();

//     filein.open("data",ios::in);
//     filein.getline(s,30);
//     cout<<s;

// }

// seekpg(): moves get pointer(input) to specified position
// seekp(): moves put pointer(output) to specified position
// tellg(): give the current  position of get pointer;
// tellp():  give the current  position of put pointer;

#include <iostream>
#include <fstream>
using namespace std;
int main () {

    char s[30];
    ofstream fileout;
    fstream file;
    fileout.open("hello",ios::out);
    fileout<<"HELLO WORLD";
    fileout.close();
    file.open("hello",ios::in | ios::out);
    cout<<file.tellg();
    file.seekp(6);
    file.seekg(6);
    cout<<file.tellg();
    cout<<file.tellp();
    file>>s;

}

