//write a program in C++ which will calculate the average of marks of 5 subjects , 5 students from 2 different sections
#include<iostream>
using namespace std;
class student {
    float marks[5];
    float average;
public:
    void inputMarks(){
        float sum=0;
        for(int i=0;i<5;i++){
            cout<<endl<<"Enter marks for subject "<<i+1<<":";
            cin>>marks[i];
            sum+=marks[i];
        }
        average=sum/5;
    }
    friend class section;
};
class section {
    student students[5];
public:
    void inputSection(){
        for(int i=0;i<5;i++){
            cout<<"student "<<i+1<<" :"<<endl;
            student[i].inputMarks();

        }
    }
    void displayAverage(){
        for(int i=0;i<5,i++)
    }
};