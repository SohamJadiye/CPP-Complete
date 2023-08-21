#include<iostream>
using namespace std;

class Base1{
    public:
    void greet(){
        cout<<"How are you?"<<endl;
    }

};
class Base2{
    public:
    void greet(){
        cout<<"Kaise Ho?"<<endl;
    }

};
class Derived: public Base1,public Base2{
    int a;
    public:
    void greet(){
        Base1 :: greet();
    }

};
class B{
    public:
    void say()
    {
        cout<<"Hello World"<<endl;
    }

};
class D: public B{
    // public:
    // void say()
    // {
    //     cout<<"Hello Bois"<<endl;
    // }

};


int main(){
    
    // Ambiguity
    Base1 obj1;
    Base2 obj2;
    obj1.greet();
    obj2.greet();
    Derived d;
    d.greet();
   
    D d1;
    d1.say();
    
  

    return 0;
}