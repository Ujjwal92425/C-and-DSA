//dsa lec 4 cy
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Clear the newline character

    string array1[n];

    for (int i = 0; i < n; i++) {
        getline(cin, array1[i]);
    }

    char array2[n];
    
    for (int i = 0; i < n; i++) {
        cin >> array2[i];
    }

    for (int i = 0; i < n; i++) {
        cout << array1[i] << " " << array2[i]<<" ";
    }

    return 0;
}
*/

//merging of array 
// #include <iostream>
// using namespace std;
// int main () {
//     int n,m,i,s,count;

//     cin>>n;
//     int arr1[n];

//     for ( i = 0; i < n; i++)
//     {
//         cin>>arr1[i];
//     }
    
//     cin>>m;
//     int arr2[m];

//     for ( i = 0; i < m; i++)
//     {
//         cin>>arr2[i];
//     }
//      s =n+m;
//     // int arr3[s];
//     // arr3[i]=arr1[i];

//     for ( i = 0; i < m; i++)
//     {
//         arr1[n+i]=arr2[i];
//     }
    
//     for ( i = 0; i < s; i++)
//     {
//         cout<<arr1[i];
//     } 
    
// }

#include <iostream>
using namespace std;
int main () {
    int n,m,i,s,count;

    cin>>n;
    int arr1[n];

    for ( i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    
    cin>>m;
    int arr2[m];

    for ( i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
     s =n+m;

    for ( i = 0; i < m; i++)
    {
        arr1[n+i]=arr2[i];
    }
    
    for ( i = 0; i < s; i++)
    {
        cout<<arr1[i];
    }
    
    
    
}