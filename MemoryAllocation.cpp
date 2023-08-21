#include<iostream>
using namespace std;

class Shop
{
    int ItemId[100];
    int ItemPrice[100];
    int counter;
    public:
    void initCounter(void){counter = 0;}
    void setPrice(void);
    void displayPrice(void);
};

void Shop :: setPrice(void)
{
    cout<<"Enter Id of your Item no "<<counter+1<<endl;
    cin>>ItemId[counter];
    cout<<"Enter the price of your item"<<endl;
    cin>>ItemPrice[counter];
    counter++;
} 
void Shop :: displayPrice(void)
{
    for(int i =0;i<counter;i++)
    {
        cout<<"The Price of the Item with Id "<<ItemId[i]<<" is "<<ItemPrice[i]<<endl;
    }
}




int main(){

    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;


    
    return 0;
}