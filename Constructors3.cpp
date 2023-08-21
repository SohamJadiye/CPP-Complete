#include<iostream>
#include<cmath>
using namespace std;
 
class Point
{
    int a,b;
    friend float area(Point,Point);
    public:
    Point(int ,int );

    void printNumber(){
        cout<<"Your Number is ("<< a<<" "<<b<<")"<<endl;
    }
};

Point :: Point(int x,int y){
    a=x;
    b=y;
}

float area(Point a1, Point b1){
    int x1 = pow(((b1.a)-(a1.a)),2);
    int y1 = pow(((b1.b)-(a1.b)),2);
   
    float area = sqrt(abs(x1+y1));
    
    return area;
}



int main(){

    Point a(0,0);
    Point b(1,6);
    a.printNumber(); 
    b.printNumber();
    cout<<area(a,b)<<endl;

    
    
    return 0;
}