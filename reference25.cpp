#include <iostream>
using namespace std;
int main () {
    string food = "ALLU";
    string &khana = food;

    cout <<food<<endl;
    cout << khana <<endl;
    cout<<&food;
}
/*#include <iostream>
using namespace std;
void fun1(int a, int b)
{
    a = a + 2;
    b = b + 2;
    cout << "call by value" << endl;
    cout << a << endl
         << b << endl;
}
void fun2(int *c, int *d)
{
    *c = *c + 2;
    *d = *d + 2;
    cout << "call by address" << endl;
    cout << c << endl
         << d << endl;
}
void fun3(int &n, int &m)
{
    n = n + 2;
    m = m + 2;
    cout << "call by reference" << endl;
    cout << n << endl
         << m << endl;
}
int main()
{
    int x, y;
    cout << "Enter data" << endl;
    cin >> x >> y;

    fun1(x, y);
    cout << "value after fun call ";
    cout << x << endl
         << y << endl;

    fun2(&x, &y);
    cout << "value after calling 2" << endl;
    cout << x << endl
         << y<<endl;

    fun3(x, y);
    cout << "value after fun3" << endl;
    cout << x << endl
         << y;
}*/