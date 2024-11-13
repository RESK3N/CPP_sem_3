//Write a C++ program that will create a class which will calculate the area of triangle, reactangle and circle having the same name.
#include <iostream>
#include <math.h>

using namespace std;
class overload{
public:void Area(int b,int h){
        int area=0.5*b*h;
        cout<<"The area of triangle is:"<<area<<endl;
    }
    void Area(float l,float b){
        float area=l*b;
        cout<<"The area of rectangle is:"<<area<<endl;
    }
    void Area(float r){
        float area=M_PI* pow(r,2);
        cout<<"The area of circle is:"<<area;
    }
};
int main(){
    int h,b;
    float a,c,r;
    overload x;
    cout<<"Enter base and height of triangle:";
    cin>>h>>b;
    cout<<"Enter length and breadth of rectangle:";
    cin>>a>>c;
    cout<<"Enter the radius:";
    cin>>r;
    x.Area(a,c);
    x.Area(b,h);
    x.Area(r);
}