#include <iostream>
using namespace std;
class A
{
    int var;

public:
    void print() { cout << var + 2 * 3 << endl; }
    void f1()
    {
        A obj;
        obj.var++;
        obj.print();
    }
    void f2(A obj)
    {
        obj.var++;
    }
    void f3(A *obj)
    {
        obj->var++;
        (*obj).print();
    }
    void f4(A &obj)
    {
        obj.var++;
    }
    A()
    {
        cout << "C" << endl;
        var = 10;
    }
    ~A()
    {
        cout << "D" << endl;
        print();
    }
};
int main()
{
    A obj;
    obj.f2(obj);
    obj.f3(&obj);
    obj.f4(obj);
    obj.f1();
    return 0;
}