#include <iostream>
using namespace std;
class A
{
protected:
    int x;

public:
    A(int i)
    {
        x = i;
        cout << "CA" << endl;
    }
    virtual ~A() { cout << "DA" << endl; }
    virtual void print(void)
    {
        cout << "A: x = " << x << endl;
    }
};
class B : public A
{
private:
    int x;

public:
    B(int i) : A(i + 2)
    {
        x = i;
        cout << "CB" << endl;
    }
    ~B() { cout << "DB" << endl; }
    void print(void)
    {
        cout << "B: x = " << x << endl;
    }
};
void fun1(A p) { p.print(); }
void fun2(A &p) { p.print(); }
int main(void)
{
    A obj1(4);
    B obj2(5);
    fun2(obj1);
    fun1(obj2);
    fun2(obj2);
}