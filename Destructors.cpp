#include<iostream>
using namespace std;

int count =0;
class Num{

   public:
 
   Num(){
    count++;
    cout<<"This is the time when Constructor is Called"<<endl;

   }
   ~Num(){
    cout<<"Destructer Called"<<endl;
    count--; 
   }
};

int main()
{
   cout<<"We are inside our main function"<<endl;
   cout<<"Creating first object n1"<<endl;
   Num n1;
   {
    cout<<"Entering this block"<<endl;
    cout<<"Creating two more objects"<<endl;
    Num n2 ,n3;
    cout<<"Exiting this block"<<endl;
   }
   cout<<"Back to main"<<endl;


   return 0; 
}