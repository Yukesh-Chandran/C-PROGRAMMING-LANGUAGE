int maximum(int a,int b,int c,int d);
#include<stdio.h>
int main()
{
    int a,b,c,d,x;
    printf("Enter Value of a,b,c,d: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
     x = maximum(a,b,c,d);
    printf("%d",x);
    
} 
int maximum( int a,int b,int c,int d)
{
   if(a>b&&a>c&&a>d)
   {
       //printf("%d",a);
       return a;
   } 
   else if(b>c&&b>d)
   {
       //printf("%d",b);
       return b;
   }
   else if(c>d)
   {
       //printf("%d",c);
       return c;
   }
   else
    
   //printf("%d",d);
   return d;
}
    
