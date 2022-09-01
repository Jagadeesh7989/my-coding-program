#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	checkevenodd(n);
	if(n==0)
	printf("even");
	else
	printf("odd");
}
int checkevenodd(int n)
{
	if(n%2==0)
    return (0);
    else
    return (1);
}
