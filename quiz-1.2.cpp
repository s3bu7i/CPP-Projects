#include <iostream>
using namespace std;
void f1(int *a)
{
    *a = *a * *a;
}
void f2();
void f3();
int main()
{
    int x = 5;
    f1(&x);
    cout << x << endl;
    // f2();
    // f3();
}
void f2()
{
    int x;
    int *p, *L;
    x = 3;
    p = &x;
    cout << x << endl;
    cout << &x << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << ".................\n";
    p = new int;
    L = new int;
    *p = 5;
    *L = 7;
    cout << *p << endl;
    cout << p << endl;
    delete p;
    p = new int;
    delete p;
    int *c;
    c = L;
    delete c;
    // delete p; Error
}
void f3()
{
    int A[] = {1, 2, 3, 4, 5};
    int *p;
    p = A;
    cout << A[0] << endl;
    p[0] = 16;
    cout << A[0] << endl;
    cout << p[0] << endl;
    cout << "..................\n";
    for (int i = 0; i < 5; ++i)
        cout << p[i] << endl;
    cout << "..................\n";
    for (int i = 0; i < 5; ++i, ++p)
        cout << *p << endl;
}