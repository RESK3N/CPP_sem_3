//write a program in c to add two lengths in feet and inches by taking user input
#include<stdio.h>
    int main(){
    struct {
    int ft,in;
    }l1,l2,l3;
    printf("ENTER DISTANCE 1 >> \nIn Feet :");
    scanf ("%d",&l1.ft);
    printf("In Inches :");
    scanf ("%d",&l1.in);
    printf("ENTER DISTANCE 2 >> \nIn Feet :");
    scanf ("%d",&l2.ft);
    printf("In Inches :");
    scanf ("%d",&l2.in);
// adding
    l3.in=l1.in+l2.in;
    l3.ft=l1.ft+l2.ft;
    if (l3.in>=12)
    {
        l3.in-=12;
        l3.ft++;
    }
        printf("The sum of distance in feet : %d and inches :%d", l3.ft,l3.in);
}
