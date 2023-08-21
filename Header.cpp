#include<iostream>
#include "this.h"
using namespace std;

// User Defined Header file
// System Header Files
// int glo =7;
int main()
{
    // int a;
    // cout<<"Hello World"<<endl;
    // int glo = 10;
    // cout<<"Local Variable "<<glo<<endl;
    // cout<<"Global Resolution Operator "<<::glo<<endl;

    int age = 20;
    switch (age)
    {
    case 18:
        cout<<"You can come to party"<<endl;
        break;
     case 16:
        cout<<"You cannot come to party"<<endl;
        break;    
    
    default:
        cout<<"You are not eligible for the party";
        break;
        
    }

    return 0;
}