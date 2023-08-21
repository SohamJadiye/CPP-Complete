#include<iostream>
using namespace std;


class Employee{
    
    int id;
   
    static int count;
    public:
    void setData(void){
        cout<<"Enter Id ";
        cin>>id;
        count++;
    }
    void getData(void){
       cout<<"The Id of the employee is "<<id<<"this is employee number "<<count<<endl;
    }
    static void getCount(void){
        cout<<"The Value of Count is "<<count<<endl;
    }

};  
int Employee :: count;

int main(){
 
    Employee harry,rohan,lovish;
    harry.setData();
    harry.getData();
    Employee::getCount();


    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}