//Wapc to implement adamas grading system
#include<stdio.h>
int main(){
    int i,credit=0,n=2;
    struct{
        char sub[20];
        int cred;
        float marks;
    }s[n];
    float xf[n],sum=0,gpa;
    for(i=0;i<n;i++) {
        printf("Enter name of subject : ");
        scanf("%s",&s[i].sub);
        printf("\nEnter credit of subject : ");
        scanf("%d",&s[i].cred);
        printf("\nEnter marks obtained in subject : ");
        scanf("%f",&s[i].marks);
        xf[i]=s[i].marks*s[i].cred;
        credit+=s[i].cred;
        sum+=xf[i];
    }
    gpa=(sum/credit)/10;
    printf("The credit is %f\nGrade : ",gpa);
    if(gpa<3.5)
        printf("F");
    else if(gpa>3.5&&gpa<4)
        printf("P");
    else if(gpa>4&&gpa<5)
        printf("C");
    else if(gpa>5&&gpa<6)
        printf("B");
    else if(gpa>6&&gpa<7)
        printf("B+");
    else if(gpa>7&&gpa<8)
        printf("A");
    else if(gpa>8&&gpa<9)
        printf("A+");
    else if(gpa>9&&gpa<10)
        printf("O");
    else
        printf("Unable to calculate gpa !!");
}
