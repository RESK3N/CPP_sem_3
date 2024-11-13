// Write a Program in C++ to implement multi level inheritence with respect to student registration system
#include<iostream>
using namespace std;
class name {
public:
    string str;
    name() {
        cout << "Enter your name : ";
        cin >> str;
    }
};
class details:public name{
public:
    string stream,school,deg;
    details(){
            cout<<"Enter your school of study : ";
            cin>>school;
            cin>>school;
            cout<<"Enter your Degree : ";
            cin>>deg;
            cout<<"Enter your stream : ";
            cin>>stream;
    }
};
class reg : public details{
public:
    int roll ,regs;
    reg() {
        cout << "Enter roll no : ";
        cin >> roll;
        cout << "Enter your registration no : ";
        cin >> regs;
    }
    void display(){
        cout<<" ------- "<<school<<" Registration -------"<<endl;
        cout<<str<< "\tRoll no: "<<roll<<endl;
        cout<<"reg. no.: "<<regs<<endl;
        cout<<"Sucessfully registered for "<<deg<<" "<<stream;

    }
};



int main(){
    reg x;
    x.display();
}