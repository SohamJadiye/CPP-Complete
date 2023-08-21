#include<iostream>
using namespace std;
// union has better memory management
   union money{
        int rice;
        char car;
        float pounds;
    };

int main(){
    
    
    union money m1;
    
    enum Meal{breakfast,lunch,Dinner};
    Meal m2 = lunch;
    cout<<breakfast<<endl;
    cout<<m2<<endl;
    

    m1.rice =10;
    m1.car='c';//only use one at a time(memory management(share))
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;
 
    

    return 0;
}