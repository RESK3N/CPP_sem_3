//Write a C program to calculate the Fibonacci series using recursion.
#include<stdio.h>
void fibo(int l,int h,int count){
    if(count>0)
    {
        int s=h;
        h=h+l;
        printf("%d\n",l);
        count--;
        fibo(s,h,count);
    }
}
int main ()
{
    int count;
    printf("Enter limit : ");
    scanf("%d",&count);
    fibo(0,1,count);
}

