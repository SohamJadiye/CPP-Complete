#include<iostream>
using namespace std;

class Employee
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a,int b, int c);//Declaration
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

void Employee :: setData(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;

};

int main()
{
    Employee harry;
    harry.d = 7;
    harry.e = 77;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}

//OOPS
//C++ --> Initially called --> C with classes by stroustroup
//class --> extension of structures (in C)
//structures had limitations
//--->Members are public.
//--->No Methods.
//classes --> structures + more.
//classes --> can have methods and classes
//classes --> can make few members as private and few as public 
//structures in C++ are typedefed
//you can declare objects along with class declaration
// class Employee1{
//     //Class Definition
// };
//harry.salary = 8 makes no sense if salary is private

// Nesting of member functions
