#include <iostream>

using namespace std;

class A
{
public:
    int x;
    void print()
    {cout<<x<<"  "<<y<<endl;}
    A() {
        x=10; y=20;
    }
private:
    int y;
};

class B:public A{
public:
    int z;
    void print() {
        A::print(); cout<<z<<endl;
    }
    B(){z=100;}
};

int main(){
    B objB;
    objB.print();
}




