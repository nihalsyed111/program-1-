#include<stdio.h>
int main()
{
int marks1,marks2,marks3,total ,average;
char grade;
printf("enter the marks of the 3 subjects:");
scanf("%d %d %d",&marks1,&marks2,&marks3);
total =(marks1+marks2+marks3);
printf("total marks is:%d\n",total);
average=total/3;
printf("average is:%d\n",average);
if(average>=90)
{
printf("grade A");
}
else if(80<=average<90)
{
printf("grade B");
}
else if(70<=average<80)
{
printf("grade C");
}
else if(60<=average<70)
{
printf("grade D");
}
else if(50<=average<60)
{
printf("grade E");
}
else
printf("worst grade");
return 0;
}
