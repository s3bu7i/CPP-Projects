#include <iostream>
using namespace std;
int main()
{
    int *p, *q, x, y;
    x = 6;
    y = 7;
    p = &x;
    q = &y;
    cout << p << endl;
    cout << *p << endl;
    cout << q << endl;
    cout << *q << endl;
    cout << x << endl;
    cout << y << endl;
    cout << &x << endl;
    cout << &y << endl;
    cout << &p << endl;
    cout << &q << endl;
}