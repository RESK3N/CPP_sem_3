//write  a program in c++ to calculate rate of interest
#include<iostream>
using namespace std;
class inter{
public:
    void roi(float p,float t,float r=0.15){
        float in=p*r*t;
        cout<<"Your total interest is "<<in<<endl;
    }
}x;
int main(){
    float p,r,t;
    cout<<"Enter Principle Amount : ";
    cin>>p;
    cout<<"Enter Time in Years : ";
    cin>>t;
    cout<<"Enter Rate of Interest : ";
    cin>>r;
    r/=100;
    x.roi(p,t,r);
    x.roi(p,t);
}