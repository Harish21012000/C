#include<stdlib.h>
int sumofdigits(n)
{
    int s=0;
    while(n>0)
    {
        s=s+(n%10);
        n=n/10;
    }
    return s;
}
void main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int s=sumofdigits(n);
    printf("sum of digits= %d",s);
}
