#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    
    protected:
    string title;
    float rating;

    public:
    CWH(string s,float r){
        title =  s;
        rating = r;
    }
    virtual void display(){}
    virtual void display()=0;//Pure virtual function-create abstract base class
    
};

class CWHVideo:public CWH{

    float videoLenght;
    public:
    CWHVideo(string s ,float r ,float vl):CWH(s,r){
        videoLenght =vl;
    }
    void display()
    {
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings "<<rating<<" Out of 5 stars "<<endl;
        cout<<"Length of this video is "<<videoLenght<<" minutes"<<endl;
    }
};
class CWHText:public CWH{

    int words;
    public:
    CWHText(string s ,float r ,int wc):CWH(s,r){
        words = wc;
    }
     void display()
    {
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings of Text Tutorial "<<rating<<" Out of 5 stars "<<endl;
        cout<<"No fo words in this text tutorial "<<words<<" words"<<endl;
    }
};


int main(){

    string title;
    float rating,vlen;
    int words;

    //for code with harry video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title,rating,vlen);
    // djVideo.display();

    title = "Django Text";
    words = 450;
    rating = 4.19;
    CWHText djText(title,rating,words);
    // djText.display();

    CWH * tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();






    return 0;

}
/*
1.They cannot be static.
2.They are accessed by object pointer_traits.
3.Virtual functions can be a friend of another class.
4.A virtual function in base class might not be used.
5.A virual function defined in the base class,there is no necessity of redefining it in derived class.
*/ 