
#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter values of a and b :"<<endl;
    cin>>a>>b;
    try{
        if(a==0)
            throw runtime_error("a is zero");
        else if(b==0)
            throw runtime_error("b is zero");
        if(a>b)
            c=a/b;
        else
            c=b/a;
        cout<<"result is "<<c;
        }
    catch(exception& e){
        cout<<"Error !! "<<e.what();
    }

}