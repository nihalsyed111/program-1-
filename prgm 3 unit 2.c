#include<stdio.h>
int main()
{
int arr[6]={5,10,15,20,25,30};
int low=0,high=6,mid,key;
printf("enter the element to be searched:");
scanf("%d",&key);
while(low<=high)
{
mid=(low+high)/2;
if(arr[mid]==key)
{
printf("element is found at the position %d/n",key,mid+1);
return 0;
}
else if(key<arr[mid])
    {
high=mid-1;}

else
{
low=mid+1;
}
}
printf("element %d not found");
return 0;
}
