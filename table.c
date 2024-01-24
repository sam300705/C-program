#include<stdio.h>
int main()
{
int n;
printf("enter the number of table u wanted\n");
scanf("%d",&n);

for(int i=1;i<=10;i++)
{
int product= n*i;
printf("%d x %d = %d\n",n,i,product);
}
}
