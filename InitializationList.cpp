#include <iostream>
using namespace std;

/*
Syntax for initialization List in constructor:
constructor(argument-list): initialization-section
{
    assignment + other code;
}
class Test{
    int a;
    int b;
    public:
    Test(int i ,int j ):a(i),b(j)
    {
        constructor-body
    }
}
*/
class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(a+j)
    {
        cout << "Constructor Executed " << endl;
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;

    }
};

int main()
{
    Test t(4,6);

    return 0;
}