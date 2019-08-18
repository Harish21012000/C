#include<stdio.h>
void main()
{
    int n;
    int i,c=0;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==0)
        printf("the entered number is prime");
    else
        printf("the entered number is not prime");
}
