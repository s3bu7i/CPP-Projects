#include <iostream>
#include <string>
#include <vector>

using namespace std;
class mother
{
public:
    mother()
    {

        cout << "mother:empty constrouctor" << endl;
    }
    mother(int a)
    {
        cout << "mother :parametreize constructor " << a << endl;
    }
};
class daughter : public mother
{ // inher public
public:
    daughter() { cout << "daughter :empty constrouctor " << endl; }
    daughter(int b) : mother(b)
    {
        cout << "daughter:paramtreize consturctor" << b << endl;
    }
};
class son : public mother
{ // inher public
public:
    son(int b) : mother(b)
    {
        cout << "son:paramtreize consturctor" << b << endl;
    }
};
int main(void)
{
    daughter sara(2);
    return 0;
}