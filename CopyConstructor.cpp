#include<iostream>
using namespace std;

class Number{
    
   int a;
   public:
   Number(){
    a =100;

   }
   Number(int num){

    a = num;
   }
   //when no copy constructor is found,compiler supplies its own copy constructor
   Number(Number &obj){
    
    cout<<"Copy Constructor called "<<endl;

    a = obj.a;
   } 
   void display(){

    cout<<"The Number for this object is "<<a<<endl;
   }

}; 

int main(){

    Number x,y,z(450),z2; 
    x.display();
    y.display();
    z.display();
    Number z1(z);
    z1.display();
    // z1 should exactly resemble z or x or y
    z2 = z;//copy constructor not called
    Number z3 = z;
    //Copy constructor called

    
    return 0;
}