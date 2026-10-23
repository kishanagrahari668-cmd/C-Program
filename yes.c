#include<stdio.h>
int min()
{
int x,i;
int fact=0;
printf("Enter a number:");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
    fact=fact*i;
}
printf("Factorial=%d",fact);
return 0;
}