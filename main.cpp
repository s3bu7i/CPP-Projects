#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    try
    {
        int age = 15;
        if (age >= 19)
        {
            cout << "bu dogrudur";
        }
        else
        {
            cout << age;
        }
    }
    catch (int myNum)
    {
        cout << "acces denied";
        cout << "Age is:" << myNum;
    }
    return 0;
}

// 