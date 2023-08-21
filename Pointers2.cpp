#include<iostream>
using namespace std;

int main(){
    
    int a = 4;
    int *ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;

    //New keyword - Operator
    int *p = new int(40);
    float *ptrs = new float(40.78);
    cout<<"The value at p is "<<*(p)<<endl;
    cout<<"The value at ptr is "<<*(ptrs)<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;

    //Delete Operator
    //Delete arr;
    //Delete[] arr;
    //Free Dynamically Allocated Memory Block
     
    return 0;
}