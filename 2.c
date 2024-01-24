#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);

for(int i=2;i<=n;i++)
{
for(int j=2;j<=i;j++)
{
if(n%i==0)

printf("%d",n);
}
}
}
