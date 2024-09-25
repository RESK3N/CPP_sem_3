#include <stdio.h>
int main()
{
    int *ptr1,*ptr2;
    int a=5,b=6;
    ptr1= &a;
    ptr2= &b;
    int c=*ptr1 + *ptr2;
    printf("%d",c);
}