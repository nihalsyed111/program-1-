#include<stdio.h>
int main()
{
int n,i=1,sum;
printf("enter the value of n:");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i++;

}
printf("the total sum is:%d",&sum);
return 0;
}
