#include<stdio.h>
int main()
{
int arr[]={10,20,30,40,50,60,70,80,90,100};
int count=sizeof(arr)/sizeof(arr[0]);
printf("total elements present in the array is:%d\n",count);
return 0;
}
