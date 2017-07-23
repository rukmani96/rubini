#include<stdio.h>
int main()
{
int n;
printf("enter any year:");
scanf("%d",&n);
if(n!=100&&n!=400&&n!=4)
{
printf("%d is a leap year:\n",n);
}
else
{
printf("%d is not a leap year:\n",n);
}
return 0;
}
