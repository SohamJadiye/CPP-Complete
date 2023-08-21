#include<iostream>
using namespace std; 


int sum(int a, int b);

int sum(int , int);

int main(){
    
      
    int num1,num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1,num2);
    return 0;
 

    return 0;
}
int sum(int a,int b){
    
    // Formal parameters a and b will be taking values from actual parameters num1 and num2
    int c = a+b;
    return c;

}