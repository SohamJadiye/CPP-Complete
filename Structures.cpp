// structures are user defined datatype
#include<iostream>
using namespace std;

typedef struct employee
{
    int eID;
    char favChar;
    float salary;
}ep;
 
struct employee
{
    int eID;
    char favChar;
    float salary;
};

int main(){

    ep soham;
    soham.eID = 18;
    soham.favChar='c';
    soham.salary = 120000;

    cout<<  soham.eID <<endl;
    cout<<  soham.favChar <<endl;
    cout<<  soham.salary <<endl;
    

    return 0;
}