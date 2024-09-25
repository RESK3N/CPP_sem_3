//Program to sort without array using DMA
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n,i,j,temp=0;
    printf("Enter number of elements >> ");
    scanf("%d",&n);
    int *num=(int*) calloc(n,4);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d :",i);
        scanf("%d",num+i);
    }
//    //test
//    for(i=0;i<n;i++)
//    {
//        printf("element %d : %d  ",i,*(num+i));
//
//    }
        //sorting
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(*(num+j) > *(num+j+1))
            {
                temp=*(num+j);
                *(num+j)=*(num+j+1);
                *(num+j+1)=temp;
            }

        }

    }
    //printing the results
    printf("The sorted array is >> ");
    for(i=0;i<n;i++)
    {
        printf("%d   ",*(num+i));
    }

}