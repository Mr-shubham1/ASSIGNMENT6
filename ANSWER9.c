#include<stdio.h>
int main()
{
    int a,b,i,k;
    printf("enter two number\n");
    scanf("%d %d",&a,&b);
   
    for(i=1;i<=b;i++)
    {
         k=a;
        k=k*i;
        if(k%b==0)
        break;
    }
    printf("LCM of %d and %d is %d",a,b,k);
    return 0;
}