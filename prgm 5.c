#include<stdio.h>
int main()
{
int  l ,b,area,perimeter;
printf("enter the lenght and breadth:");
scanf("%d %d",&l,&b);
area=l*b;
perimeter=2*(l+b);
printf("area=%d,perimeter=%d",area,perimeter);
return 0;
}
