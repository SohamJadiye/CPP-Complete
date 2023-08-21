#include<iostream>
using namespace std;
int main(){
    
    for (int  i = 0; i < 4; i++)
    {
        cout<<"Hi";
        continue;
        cout<<i<<endl;
        if(i==2)
        {
            break;
            // continue;
        }


    }
    
    return 0;
}