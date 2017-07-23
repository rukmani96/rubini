#include<stdio.h>
int main()
{
int a,b,c,n;
printf("enter three numbers:");
  scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
  printf("a is the greatest number:\n");
}
  if(b>a&&b>c)
  {
    printf("b is greatest number:\n");
  }
  if(c>a&&c>b)
  {
    printf("c is greatest number:\n");
  }
  return 0;
}
