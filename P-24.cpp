#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter values of a and b :"<<endl;
    cin>>a>>b;
    try{
        if(a==0)
            throw a;
        else if(b==0)
            throw b;
        if(a>b)
        c=a/b;
        else
            c=b/a;

    }
    catch(int x){
        cout<<"Division by zero";
    }
    cout<<"result is "<<c;

}