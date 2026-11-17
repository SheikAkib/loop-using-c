#include<stdio.h>
int main()
{
    int i,sum=0,n=7;
    printf("\%d",n);

    for(i=2;i<=n;i+=2)
    {
        sum+=i;
    }
    printf("The sum of the value:%d",sum);
    return 0;
}
