#include<iostream>
using namespace std;


class Complex{
  
  int a,b;
  public:
  //Special member function with same name as of the class
  //it is automatically invoked whenever an object is created
  //It is used to initialize the objects of the class
  Complex(void);
    //constructor declaration
  
  void printData()
  {
    cout<<"Your number is "<<a <<" +"<<b<<"i"<<endl;
  }


};
Complex :: Complex(void){
    a=4;
    b=5;
}
int main(){
     
    Complex c;
    c.printData();

    return 0;
}
/*
Properties of Constructors
1.It should be declared in the public section of the class
2.They are automatically invoked whenever the object is created.
3.They cannot return values and do not have return types.
4.It can have default arguments.
5.We cannot refer to their address.
*/