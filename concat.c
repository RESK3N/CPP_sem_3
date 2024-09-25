//write a program in c to copy, concatenate, compare two strings w/o string.h
#include<stdio.h>
int main()
{
    int len1,len2,n,i,flag=0;
    char str1[100],str2[100],str3[200];
    printf("\nEnter string 1 : ");
    scanf("%s",&str1);
    printf("\nEnter string 2 : ");
    scanf("%s",&str2);
    for(i=0;i<100;i++){
        if(str1[i] == '\0') {
            len1 = i ;
            break;
        }
    }
    for(i=0;i<100;i++) {
        if (str2[i] == '\0') {
            len2 = i;
            break;
        }
    }
    //coping string 1 to another string 3
    for(i=0;i<len1;i++){
        str3[i]=str1[i];
    }
    printf("String copied to another string >> %s",str3);
   //concatenate
   for(i=0;i<len2;i++){
       str3[len1+i]=str2[i];
   }
   printf("\nConcatenated string >> %s",str3);
   //compare
   if(len1>len2)
       n=len1;
   else
       n=len2;
   for(i=0;i<n;i++)
   {
       if(str1[i]!=str2[i])
           flag=1;
   }
   if(flag==0)
   printf("\nThe strings are same");
   else
       printf("\nThe strings are not same");



}

