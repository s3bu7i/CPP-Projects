#include <iostream>
using namespace std;
class Point
{
    int x, y;

public:
    int *p;
    Point()
    {
        cout << "A" << endl;
        x = y = 0;
        p = new int;
    }
    Point(const Point &o)
    {
        cout << "B" << endl;
        x = o.x + 1;
        y = o.y - 1;
        p = new int;
        *p = ++(*(o.p));
        *(o.p) = *p + 2;
    }
    Point(int k)
    {
        cout << "C" << endl;
        x = k;
        y = k + 2;
        p = new int;
        *p = x + y;
    }
    ~Point()
    {
        cout << "D" << endl;
        delete p;
    }
    void print()
    {
        cout << *p << endl;
        cout << x + y << endl;
    }
};
void f1(Point &obj) { obj.print(); }
void f2(Point *obj) { (*obj).print(); }
void f3(Point obj) { obj.print(); }
int main()
{
    Point p1(1);
    f3(p1);
    f1(p1);
    f2(&p1);
}