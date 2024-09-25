//C program to take input of all students in class and binary search a student
#include<stdio.h>
int main()
{
    int i,j,num,temp,low,high,mid,target,flag=0;
    //input
    printf("Enter Number of students >> ");
    scanf("%d",&num);
    int stu[num];
    //array input
    printf("\nEnter Roll number of students >> ");
    for(i=0;i<num;i++)
    {
        printf("\nStudent %d :",i+1);
        scanf("%d",&stu[i]);
    }
    //Bubble sorting
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-i-1;j++)
        {
            if(stu[j]>stu[j+1])
            {
                temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;
            }
        }

    }
    //sorting test
    printf("sorted array is >> ");
    for(i=0;i<num;i++)
        printf("%d  ",stu[i]);


    l1:
    printf("Enter student roll to search >> ");
    scanf("%d",&target);

    //Binary search
    temp=0;
    low=0;
    high=num;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(stu[mid]==target)
        {
            printf("Student roll: %d is Present at the class",stu[mid]);
            high=0;
            temp=1;
        }else if(stu[mid]>target)
        {
            high=mid-1;
        }else if(stu[mid]<target)
        {
            low=mid+1;
        }

    }
    if(temp==0)
        printf("The Student roll: %d is absent today",target);
    printf("\nEnter 0 to exit .\nEnter any other number to search again >>");
    scanf("%d",&flag);
    if(flag!=0)
        goto l1;

}