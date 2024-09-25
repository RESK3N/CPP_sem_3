#include<stdlib.h>
#include<stdio.h>
int main()
{
    int i,j,n,flag=0,temp=0;
    printf("Enter Number of Elements >>");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter Element No:%d>> ",i+1);
        scanf("%d",&arr[i]);
    }
    //sorting
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("The Sorted array is >> \n");
            for(j=0;j<n;j++)
                printf("\n%d",arr[j]);
            exit(1);
        }
    }
}
