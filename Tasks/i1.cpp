#include <iostream>
#include <string>
#include <vector>

using namespace std;

class cpolygon
{
protected:
    int width; int hight;
    public:
    void set_values (int a, int b){
        width =a; hight =b;
    }
};

class CRectangle: public cpolygon{
    public:
        int area(){
            return (width*hight);
        }
};

class CTriangle : public cpolygon
{ // here is inheritance
    public:
        int area()
        {

            return (width * hight / 2);
        }
};

int main(){
    CRectangle ret;
    CTriangle tri;
    ret.set_values(4,5);
    tri.set_values(6,8);
    cout<<ret.area()<<endl;
    cout<<tri.area()<<endl;
    return 0;
}

