#include<stdio.h>
int main()
{
int n,factorial=1;;
printf("ente rthe number");
scanf("%d",&n);

for(int i=2;i<=n;i++)
{
factorial=factorial*i;
}
printf("factorial is %d",factorial);
}

