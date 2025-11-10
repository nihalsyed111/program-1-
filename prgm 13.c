#include<stdio.h>
int main()
{
int age;
float height;
char grade;
printf("Enter the age of the student:%d",&age);
printf("Enter the height of the student:%f",&height);
printf("Enter the grade of the student:%c",&grade);
printf("The student details are as follows:");
scanf("%d %f %c",&age,&height,&grade);
return 0 ;
}
