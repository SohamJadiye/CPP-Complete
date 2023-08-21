#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
    void setData(int a,float b){
        id = a;
        price = b;
    }
    void getData(void){
        cout<<"Code of this item is "<<id<<endl;
        cout<<"Price of this item is "<<price<<endl; 
    }

};

int main(){
    
    int size = 2;
    int p,q;
    // int *ptr = &size;
    // 1.general_store
    // 2.veggies
    // 3.hardware
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    for(int i =0;i<=size;i++)
    {
        cout<<"Enter Id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
       
    }
    for(int i =0;i<=size;i++)
    {
        cout<<"Item Number: "<<i+1<<endl;
        ptrTemp->getData();

    }


    return 0;
}