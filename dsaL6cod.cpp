// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, i, temp, j;

//     cin >> n;
//     int arr[n];

//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     for (i = 1; i < n; i++)
//     {
//         temp = arr[i];
//         j = i + 1;
//         while (j >= 0 && arr[j] > temp)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = temp;
//     }
//     for (i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
#include <iostream>
using namespace std;
int main()
{
    int n, i,m;

    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin>>m;
    int arr2[m];

    for (i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int s=n+m;
    cout<<s;

}