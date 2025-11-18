#include<stdio.h>
int main()
{
int choice,a,b,sum,subtraction,multiplication;
printf("enter the choice,a,b:");
scanf("%d %d %d",&choice,&a,&b);
switch(choice)
{
case 1:
sum=a+b;
printf("the sum of a and b is:%d",sum);
break;
case 2:
subtraction=a-b;
printf("the subtraction value of a and b is:%d",subtraction);
break;
case 3:
multiplication=a*b;
printf("multiplication value of a and b is:%d",multiplication);
break;
default:
printf("choice invalid");
}
return 0;
}
