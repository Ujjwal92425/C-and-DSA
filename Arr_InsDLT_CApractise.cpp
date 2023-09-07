#include <iostream>
using namespace std;
int main()
{
    int size, i, data, pos,pos2;

    cout << "Enter the size of array : " << endl;

    cin >> size;

    int arr1[size];

    cout << "Enter the elements of the array : " << endl;

    for (i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }

    cout << endl
         << "Current Array is : ";

    for (i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << endl;

    cout << "Enter the pos where u want to insert : ";
    cin >> pos;
    cout << endl;

    cout << "Enter the data u want to insert : ";
    cin >> data;
    cout << endl;

    if (pos == 0)
    {
        for (i = size - 1; i >= 0; i--)
        {
            arr1[i + 1] = arr1[i];
        }
        size++;
        arr1[0] = data;
    }

    else if (pos == size)
    {
        arr1[size] = data;
        size++;
    }

    else
    {
        for (i = size; i >= pos - 1; i--)
        {
            arr1[i + 1] = arr1[i];
        }
        arr1[pos - 1] = data;
        size++;
    }

    cout << "Updated Array is : ";

    for (i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }

    cout<<endl;
    cout<<"Deletion: "<<endl;

    cout << "Enter the pos from where u want to delete : ";
    cin >> pos2;
    cout << endl;

    if (pos2 == 0)
    {
        for (i = 0; i < size-1; i++)
        {
            arr1[i] = arr1[i+1];
        }
        size--;
    }

    else if (pos2 == size)
    {
        size--;
    }

    else
    {
        for (i = pos2-1; i <size-1; i++)
        {
            arr1[i] = arr1[i+1];
        }
        size--;
    }

    cout << "Updated Array is : ";

    for (i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
}
