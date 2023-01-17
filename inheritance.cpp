#include <iostream>
using namespace std;

// Simple class
class A
{
public:
    int x;

    // COnstructor initializing
    // the data members
    A() { x = 0; }

    A(int a)
    {
        cout << "Constructor A(int a) is invoked" << endl;
        x = a;
    }
};

// Complex class
class B
{
    int data;
    A objA;

public:
    // COnstructor initializing the
    // data members
    B(int a)
        : objA(a)
    {
        data = a;
    }

    // Function to print values
    // of data members in class
    // A and B
    void display()
    {
        cout << "Data in object of class B = " << data
             << endl;
        cout << "Data in member object of "
             << "class A in class B = " << objA.x;
    }
};

// Driver code
int main()
{
    // Creating object of class B
    B objb(25);

    // Invoking display function
    objb.display();
    return 0;
}