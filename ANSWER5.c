#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("enter value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i*i*i;
    }
    printf("sum of cubes of first %d natural number is %d",n,s);
    return 0;
}