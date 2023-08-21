#include<iostream>
using namespace std;

class Base{
    
    protected:
    int a;
    private:
    int b;
};


class Derived : protected Base{


};
int main(){
    Derived d;
    // cout<<d.a;//will not work since a is protected in both base as well as derived class
    

    return 0;
}