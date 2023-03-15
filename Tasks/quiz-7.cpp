#include <iostream>
using namespace std;
class A
{
private:
    int x;

public:
    A(int i)
    {
        x = i + 1;
        cout << "CA" << endl;
        print();
    }
    ~A()
    {
        cout << "DA" << endl;
        print();
    }
    void print(void) { cout << "A: x = " << x << endl; }
    void setX(int i) { x = i + 2; }
};
class B : public A
{
private:
    int x;
    A a;

public:
    void setX(int i) { x = i + 5; }
    B(int i) : a(i + 2), A(i * 2)
    {
        x = i;
        cout << "CB" << endl;
        a.print();
    }
    B() : A(1), a(2)
    {
        x = 0;
        cout << "CB" << endl;
        a.print();
    }
    ~B() { cout << "DB" << endl; }
    void print(void) { cout << "B: x = " << x << endl; }
};
int main(void)
{
    B o1(5);
}