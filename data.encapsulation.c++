#include <iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;

public:
    void setLength(int len)
    {
        length = len;
    }
    void setBreadth(int brth)
    {
        breadth = brth;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int getArea()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle rectangle1;
    rectangle1.setLength(8);
    rectangle1.setBreadth(6);
    cout << "Length = " << rectangle1.getLength() << endl;
    cout << "Breadth = " << rectangle1.getBreadth() << endl;
    cout << "Area = " << rectangle1.getArea();

    return 0;
}
