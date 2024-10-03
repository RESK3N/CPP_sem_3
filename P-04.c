//Program to check if a string is palindrome or not
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    printf("Enter string length : ");
    scanf("%d",&n);
    char str[n],arr[n];
    printf("Enter the string :");
    scanf("%s",str);
    for(i=0;i<n;i++){
        arr[i]=str[n-i-1];
    }
    for(i=0;i<n;i++){
        if(arr[i]!=str[i]){
            printf("The string is not palindrome !");
            exit(0);
        }
    }
printf("The string is palindrome");
}