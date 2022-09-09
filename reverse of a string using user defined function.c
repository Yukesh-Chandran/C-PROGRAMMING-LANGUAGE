/* Reverse of a string using user defined function*/
#include<stdio.h>

int main()
{
    char ch[50],b[50];
    int i=0,j;
    printf("Please enter the string:");
    scanf("%s",ch);
    while(ch[i]!='\0')
    {
        i++;
    }
    for(--i,j=0;i>=0;j++,i--)
    {
        b[j]=ch[i];
    }
    b[j]='\0';
    printf("%s",b);
}
