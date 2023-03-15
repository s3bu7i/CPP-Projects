#include <iostream>

using namespace std;

class A
{
public:
    int x;
    A (int a, int b){x=a; y=b;}
    void print(){
        cout<<x<<"  "<<y<<endl;
    }

private:
    int y;
};

class B
{
public:
    A objA;
    B(int a, int b,int c): objA(a,b){
        z=c;
    }
    void print() {
        objA.print();
        cout<<z<<endl;

    }
private:
    int z;


};
int main(){
    B objB(3,4,5);
    objB.print();
    objB.objA.print();

}


