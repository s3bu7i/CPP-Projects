#include <iostream> 
using namespace std;
class Point
{
    static int x;
    int y;

public:
    Point()
    {
        x = y = 10;
        print();
    }
    Point(int i) { x = y = i; }
    void print() { cout << "(" << x << "," << y << ")" << endl; }
    void moveRight(void)
    {
        x++;
        y++;
    }
    void moveLeft(void)
    {
        --x;
        --y;
    }
};
int Point::x = -1;
class Line
{
    Point a, b;

public:
    Line() : b(3) { ; }
    void resize(void)
    {
        a.moveLeft();
        b.moveRight();
    }
    void shift(void)
    {
        a.moveLeft();
        b.moveLeft();
    }
    void draw()
    {
        a.print();
        b.print();
    }
};
int main()
{
    Line obj;
    obj.resize();
    obj.draw();
    obj.shift();
    obj.draw();
}
