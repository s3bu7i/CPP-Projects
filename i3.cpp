
#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

class name{
    char n[20];
    protected:
    void set_name(char N[])
    {
        strcpy(n,N);

    }
    void print_name(){
        cout<<n<<"  ";
    }

};

class ID
{
    int id;

protected:
    void set_id(int i) { id = i; }
    void print_id() { cout << id << endl; }
};
class student : public name, public ID
{

public:
    student(char Name[], int id)
    {
        set_name(Name);
        set_id(id);
    }
    void print()
    {
        print_name();
        print_id();
    }
};

int main()
{
    student ST("mohammad", 200810456);
    ST.print();
}
