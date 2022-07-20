#include<stdio.h>
int main()
{
    int a,result,rem;
    printf("enter a number\n");
    scanf("%d",&a);
    while(a!=0)
    {
     rem=a%10;
     result=result*10+rem;
     a=a/10;
    }
    printf("%d",result);
    return 0;
}