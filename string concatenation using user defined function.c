#include<stdio.h>
#include<string.h>
void poor(char s1[],char s2[]);
int main()
{
    char s1[50]="Hai Boomer ";
    char s2[50]="karthi";
    poor(s1,s2);
   printf("%s",s1);
}
void poor(char s1[],char s2[])
{
    int i,j;
    i=0;
    while(*(s1+i)!='\0')
    ++i;
   for(j=0;s2[j]!='\0';i++,j++)
   {
      s1[i]=s2[j] ;
   }
   s1[i]='\0';
}
