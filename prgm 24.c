#include<stdio.h>
int main()
{
int a,b;
printf("enter the value of two numbers:");
scanf("%d %d",&a,&b);
if(a>0&&b>0)
{
printf("both the numbers are positive");
}
if(a>0&&b<0)
{
printf("only one number is positive");
}
return 0;
}
