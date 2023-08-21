#include<iostream>
using namespace std;

class Base{
    public:
    int var_base;
    void display(){
        cout<<"Displaying Base class variable var  "<<var_base<<endl;
    }
};
class Derived:public Base{
    public:
    int var_derived;
    void display(){
        cout<<"Displaying Base class variable var  "<<var_derived<<endl;
    }
};


int main(){

    Base* base_classPointer;
    Base obj1;
    Derived obj2;
    base_classPointer = &obj1;//Pointing base class pointer to derived class
    
    base_classPointer->var_base = 40;
    base_classPointer->display();

    Derived * derived_class_pointer;
    derived_class_pointer = &obj2;
    derived_class_pointer->var_derived = 99;
    derived_class_pointer->display();

    return 0;
}