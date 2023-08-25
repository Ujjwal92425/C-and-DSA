/*#include <iostream>
using namespace std;
int main()
{
    int n, i, j;

    cout << "Enter size:" << endl;

    cin >> n;

    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(arr[i], arr[min]);
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}*/

#include <iostream>
using namespace std;
int main () {
    int temp;
    struct node
    {
        int data;
        struct node *next;
    };
    struct node*n;
    n=(struct node *)malloc(sizeof(struct node*));

    
}
