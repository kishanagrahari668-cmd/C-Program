#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x>20)
    {
        printf("number is positive");
    }
    else
    {
        printf("number is negative");
    }
    return 0;
}