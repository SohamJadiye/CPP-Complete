#include<iostream>
#include<cmath>
using namespace std;
// Create 2 classes:
//1.Simple Calculator - Takes input of two numbers using a
//utility function +,-,*,/ and display the results using another function
//2.Scientific Calculator-Takes input any two numbers
//using a utility function
//and performs any four scientific operation of your choice.

//Create another class Hybrid calculator and inherit it using these 2
// classes:
//Q1. What type of inheritance are you using 
//Q2. Which mode of inheritance you are using
//Q3. Create an object of HybridCalculator and display results of simple
// scientific calculator
//Q4. How is code reusability implemented

class Simple{

    protected:
    float a,b;
    int add,prod;
    float div;
    public:
    void set_info(int a,int b){
         
      this->a = a;
      this->b = b;

    }
    void calc(){
        
        add = a+b;
        prod = a*b;
        div =a/b;

    }
    void display()
    {
         
        cout<<"Addition "<<add<<endl;
        cout<<"Multiplication "<<prod<<endl;
        cout<<"Division "<<div<<endl;
    }
};

class Scientific{
    protected:
    int a;
    float sqr;
    float cub;
    float sqroot;
    float cubroot;
    

    public:
    void sciset_info(int a){
     
      this->a = a;

    }
    void scicalc()
    {
        sqr = a*a;
        cub = a*a*a;
        sqroot = sqrt(a);
        cubroot = cbrt(a);
    }
    void scidisplay()
    {
        cout<<"Square of Number "<<sqr<<endl;
        cout<<"Cube of Number "<<cub<<endl;
        cout<<"Square root of Number "<<sqroot<<endl;
        cout<<"Cube Root of Number "<<cubroot<<endl;
    }
    






};
class Hybrid: public Simple,public Scientific{

    public:
    void set(int a ,int b )
    {
        set_info(a,b);
        sciset_info(a);
    }
    void process()
    {
        calc();
        scicalc();
    }
    void displays()
    {
        display();
        scidisplay();
    }


};

int main(){
    Hybrid obj;
    obj.set(9,16);
    obj.process();
    obj.displays();



    return 0;
}