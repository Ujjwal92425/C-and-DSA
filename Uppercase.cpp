// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;
// int main () {
//     int n;
//     cin>>n;
//     string name [n];
//     for (int i = 0; i < n; i++)
//     {
//         cin.ignore();
//         getline(cin,name[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         transform(name[i].begin(), name[i].end(), name[i].begin(), ::toupper);
//         cout<<name[i]<<" ";
//     }
// }
#include <iostream>     // std::cout, std::endl  
#include <iomanip>      // std::setbase  
using namespace std;  
  
int main () {  
  int i=95;
  char ch =i;
  string name= "ujju kumar";
  cout<<ch;
  cout<<name.size();
  return 0;  
}  