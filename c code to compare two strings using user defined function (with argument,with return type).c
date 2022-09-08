/*c code to compare two strings using user defined function (with argument,with return type)*/
#include<stdio.h>
int stringcompare(char s1[],char s2[]); //prototype declaration
int main()
{
    char s1[50];
    char s2[50];
    int ascii_return;
    printf("Enter the first string without space: ");
    scanf("%s",s1);
    printf("Enter the second string without space: ");
    scanf("%s",s2);
   ascii_return = stringcompare(s1,s2);
   printf("\nThe ASCII value difference is %d\n",ascii_return);
   if(ascii_return==0)
   printf("Both strings are equal");
   else
   printf("String mismatches");
}
int stringcompare(char s1[],char s2[])
{
    int i;
    int difference;
    for(i=0;s1[i]&&s1[i]==s2[i];i++);
    difference=s1[i]-s2[i];
    return difference;
    
    
}
