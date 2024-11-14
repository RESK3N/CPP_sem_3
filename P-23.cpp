//Write a Program in c++ to implement virtual function
#include<iostream>
using namespace std;
class base{
public:
    virtual void vdisplay(){
        cout<<"Base class called via dynamic !!"<<endl;
    }
    void ndisplay(){
        cout<<"Base class called via static !!"<<endl;
    }
};
class dev:public base{
public:
    void vdisplay(){
        cout<<"Derived class called via dynamic !!"<<endl;
    }
    void ndisplay(){
        cout<<"Derived class called via static !!"<<endl;
    }
};
int main(){
    base *a,*b;
    dev c,d;
    a=&c;
    b=&d;
    a->vdisplay();
    b->ndisplay();
}