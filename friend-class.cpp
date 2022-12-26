#include <iostream>
#include <string>

using namespace std;

class square;
class rectringle
{
    int width, hight;

public:
    int area(void)
    {
        return (width * hight);
    }
    void convert(square);
};
class square
{
    int side;

public:
    void set_side(int x)
    {
        side = x;
    }
    friend class rectringle;
};

void rectringle::convert(square a)
{
    width = a.side;
    hight = a.side;
}

int main()
{
    square sq;
    rectringle rect;
    sq.set_side(2);
    rect.convert(sq);
    cout << rect.area() << endl;

    return 0;
}
