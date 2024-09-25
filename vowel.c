//write a program in c to count the number of vowels and consonants in a string
#include<stdio.h>
int main(){
    int i,n,v=0,c=0;
    char str[100];
    printf("\nEnter string : ");
    scanf("%s",&str);

    for(i=0;i<100;i++){
        if(str[i] == '\0') {
            n= i ;
            break;
        }
    }
    for(i=0;i<n;i++){
        switch (str[i]) {
            case 'a' :v++;break;
            case 'e' :v++;break;
            case 'i' :v++;break;
            case 'o' :v++;break;
            case 'u' :v++;break;
            default:c++;break;

        }
    }
    printf("Number of vowels :%d \nNumber of consonants:%d",v,c);

}
