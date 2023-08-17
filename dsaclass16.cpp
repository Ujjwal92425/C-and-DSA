#include <iostream>
using namespace std;

int main() {
    int n, l, r, mid, data;

    cout << "Enter size"<<endl;
    cin >> n;

    int arr[n];

    cout << "Enter array elements "<< endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search"<<endl;
    cin >> data;

    l = 0;
    r = n - 1;

    while (l <= r) {
        mid = l + r / 2;  

        if (arr[mid] == data) {
            cout << "Element found at index " << mid << endl;
            break;
        } else if (data < arr[mid]) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    if (l > r) {
        cout << "Element not found" << endl;
    }

    return 0;
}
