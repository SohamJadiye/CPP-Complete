#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;

}
void swapReference(int &a,int &b)
{
    int temp =a;
    a = b;
    b = temp;
    
}

int & swapReferences(int &a,int &b)
{
    int temp = a;
    a=b;
    b = temp;
    return a;
}

int main(){
    
    int a =4;
    int b =5;
    cout<<a <<" "<<b<<endl;
    swap(&a,&b);
    cout<<a <<" "<<b<<endl;
    swapReference(a,b);
    cout<<a <<" "<<b<<endl;
    swapReferences(a,b)=766;  
    cout<<a <<" "<<b<<endl;


    return 0;
}