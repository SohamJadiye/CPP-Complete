#include<iostream>
using namespace std;

class Complex{

   int real,imaginary;
   public:
   void getData(){
    cout<<"The real part "<<real<<endl;
    cout<<"The Imaginary part is "<<imaginary<<endl;
   }
   void setData(int a, int b){
    real = a;
    imaginary = b;
   }
};
int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    // (*ptr).setData(1,54);
    // (*ptr).getData();
    /*
     *(ptr).setData(1,54) is exactly same as
     ptr->setData(1,54);
    */
    ptr->setData(1,99);
    ptr->getData();

    //Array of Objects
    Complex *ptr1 = new Complex[4];
    ptr->setData(1,4);
    ptr->getData();
    
    return 0;
}