#include<iostream>
using namespace std;

//Base Class
class Employee{
    public:
    int id;
    float salary;
    public:
    Employee(int inpId ){
        id = inpId;
        salary = 34;
    }
    Employee(){} 
};
//Derived Class
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     members/methods/etc .....
// }
//Creating a Programmer Class derived from employee base class
//Default visibility mode is private 
//Public Visibility mode: public members of the base class becomes 
//Public members of the derived class
//Private Visibility Mode: Public members of the base class becomes private members of base class
//You cannot inherit private members of the base class
class Programmer : Employee{

    public:
    Programmer(int inpId){
        id = inpId;
    }
    int languageCode = 9;
    void getData(){
        cout<<id<<endl;
    }

};

int main(){
    Employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;  
    Programmer skillF(100);
    cout<<skillF.languageCode<<endl;
    skillF.getData();

    return 0;
}