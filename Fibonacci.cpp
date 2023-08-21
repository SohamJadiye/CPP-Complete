#include<iostream>
using namespace std;

int fib(int n)
{
    if (n <=1){
        return 1;
    }
    
    
    return fib(n-2)+fib(n-1);
}
int main(){
    
    int n;
    cout<<"Enter the nth term to find fibonacci"<<endl;
    cin>>n;
    cout<<"fib number at position "<<n<<" is "<<fib(n);
    return 0;
}