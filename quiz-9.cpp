#include <iostream>
using namespace std;
class A
{
protected:
    int x;

public:
    A(int i = 1)
    {
        x = i;
        cout << "CA \n";
        m1();
    }
    virtual ~A() { cout << "DA \n"; }
    virtual void m1() { cout << x << endl; }
    virtual void pr1() { m1(); }
    void pr2() { m1(); }
    void pr3() { m1(); }
};
class B : public A
{
protected:
    int x;

private:
    int *m_array;

public:
    B(int length) : A(length - 1)
    {
        x = length;
        m_array = new int[length];
        m1();
    }
    ~B()
    {
        cout << "DB \n";
        delete[] m_array;
    }
    virtual void m1() { cout << x << endl; }
    void pr1() { m1(); }
    virtual void pr2() { m1(); }
    void pr3() { m1(); }
};
int main()
{
    B *b = new B(5);
    A *a = b;
    a->m1();
    a->pr1();
    a->pr2();
    a->pr3();
    delete a;
    return 0;
}