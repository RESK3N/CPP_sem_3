//Write a program in c to check if a string is palindrome or not using only library functions.
#include<stdio.h>
int main(){
    int n,flag=0;
    printf("Enter length of string >> ");
    scanf("%d",&n);
    char str[n],cpy;
    printf("Enter the string >> ");
    scanf("\n");
    scanf("%[^\n]s",str);
//    printf("%s\n",str);
    for(int i=0;i<n;i++){
        cpy=str[n-i-1];
        if(cpy!=str[i])
            flag=1;
    }
    if(flag==0)
        printf("\nThe given string is palindrome !");
    else
        printf("\nThe given string is not palindrome");
}