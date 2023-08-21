#include<iostream>
using namespace std;

inline int product(int a ,int b)
{
    //Not recommended to use below lines with the inline functions
    static int c = 0;//This executes only once
    c = c+1;//Next time this function is run,the value of c will be retained
    return a*b+c;
}

int main(){
    
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a;
    cin>>b;
    cout<<"The product of a and b is"<<endl<<product(a,b)<<endl; 
    cout<<"The product of a and b is"<<endl<<product(a,b)<<endl; 
    cout<<"The product of a and b is"<<endl<<product(a,b)<<endl; 
    cout<<"The product of a and b is"<<endl<<product(a,b)<<endl; 
    
    return 0;
}