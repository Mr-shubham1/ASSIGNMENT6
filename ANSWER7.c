#include<stdio.h>
int main()
{
    int n,count=0,k;
    printf("enter a number\n");
    scanf("%d",&n);
    k=n;
    while(k!=0)
    {
        k=k/10;
        count++;
    }
    printf("%d is %d digit number",n,count);
    return 0;
}
