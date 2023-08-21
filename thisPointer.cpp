#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A & setData(int a1){
      this->a = a1;
      return *this;
    }
    void getData(){
        cout<<"The value of a is "<<a<<endl;
    }

};

int main(){
    //This is a keyword which is a pointer which points to the object which is being Created
    A a;
    a.setData(4);
    a.getData();    
    return 0;
}