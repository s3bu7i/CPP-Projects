#include <iostream>
using namespace std;
class Test
{
public:
    Test()
    {
        x = y = 0;
        cout << ++count << endl;
    }
    Test(int i)
    {
        x = y = i;
        cout << (count += 2) << endl;
    }
    Test(int x, int y)
    {
        this->x = x;
        this->y = y;
        cout << (count += 3) << endl;
    }
    void Print()
    {
        cout << x + y << endl
             << count << endl;
    }
    static int count;

private:
    int x, y;
};
int Test::count = 2;
int main()
{
    Test A(7), B(5, 10), C;
    A.Print();
    B.Print();
    B.count = 9;
    C.Print();
    Test D;
}