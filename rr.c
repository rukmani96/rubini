#include<stdio.h>
int main()
{
int n;
printf("\nenter any number:");
scanf("%d",&n);
if(n>1&&n%2==0)
{
printf("n is even\n");
}
else
{
printf("n is odd\n");
}
return 0;
}
