#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Binary{
        
    string s;
    public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);

};
void Binary :: ones(void){

    for(int i =0;i<s.length();i++)
    {
        if(s.at(i)=='0'){
           s.at(i) = '1';
        }
        else{
           s.at(i) = '0';
        } 

    } 


}
void Binary :: display(void){

    for(int i =0;i<s.length();i++)
    {
        cout<<s.at(i);

    } 
}

void Binary :: read(void){
    cout<<"Enter a binary number";
    cin>>s;

} 

void Binary :: chk_bin(void){
    
    for(int i =0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect Binary format"<<endl;
            exit(0);
        } 

    }
}

int main(){

    Binary b;
    b.read();
    b.chk_bin();
    b.ones();
    b.display();

    
    return 0;
}