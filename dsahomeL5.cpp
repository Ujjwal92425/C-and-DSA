/*#include <iostream>
using namespace std;
int main()
{
    int m, n, iteam, j, i;

    cin >> n;
    cin >> m;

    int array1[m][n];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> array1[i][j];
        }
    }
    cin >> iteam;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            if (array1[i][j] == iteam)
            {
                cout << array1[i][j];
                break;
            }
        }
    }
    if (array1[i][j] != iteam) {
        cout<<"Element "<<iteam <<" not found";
    }

    // for ( i = 0; i < m; i++)
    // {
    //     for ( j = 0; j < n; j++)
    //     {
    //         cout << array1[i][j];
    //     }
    //     cout<<endl;

    // }
}
*/
#include <iostream>
using namespace std;
int main () {
    int i,n,data,place,s;

    cin>>n;
    int arr[n];

    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cin>>data;
    cin>>place;
    int mid,l,r;
    l=0;
    r=n-1;
    mid=(l+r)/2;
    if (data<mid)
    {
        for ( i = 0; i < mid; i++)
        {
            if (arr[i]<=data) {
                
         }
        }
        
    }
    


    

}


