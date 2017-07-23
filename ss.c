#include<stdio.h>
int main()
{
char c;
printf("enter any character:");
scanf("%c",&c);
if(c>='a'&&c<='z'||c>='A'&&c<='z')
{
printf("given character is a alphabet:\n");
}
else
{
printf("given character is not an alphabet:\n");
}
}
