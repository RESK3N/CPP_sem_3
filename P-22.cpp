//Write a Program in C++ to overload binary "+" operator
#include<iostream>
using namespace std;
class complex {
    int img, rl;
public:
    complex(int r=0, int i=0){
        img=i;
        rl=r;
    }

    complex operator+ (complex &obj) {
        //cout<<rl<<endl<<img<<endl;
        complex res;
        res.rl = rl + obj.rl;
        res.img = img + obj.img;
        return res;
    }
    void display(){
        cout<<"Sum is "<<rl<<" + i "<<img;
    }
};
int main(){
    complex a(5,6),b(10,4);
    complex c=a+b;
    c.display();

}