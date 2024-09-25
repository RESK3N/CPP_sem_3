//wapc to access the array elements using pointer
#include <stdio.h>
int main()
{
    int i;
    int* p;
    int arr[]={1,2,3,4,5,6,7,8,9,10,11};
    for (i=0;i<11;i++)
    {
        *p=arr[i];
        printf("\n%d",*p);
    }
}

