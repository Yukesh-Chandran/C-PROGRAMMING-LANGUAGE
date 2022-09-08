/* C code for finding the string length using user defined function (with argument with return type)*/
#include<stdio.h>
int parama(char *l);
int main()
{
    char s[50];
    int x;
    printf("Enter the String withoout space: ");
    scanf("%s",s);
    x=parama(s);
    printf(" The length of the string is %d",x);
}
int parama(char s[])
{
    int i;
    int count; // variable to store the character count 
    for(i=0;s[i]!='\0';i++) 
    {
        count++;
    }
    return count;
}
