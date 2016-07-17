#include<stdio.h>
#include<conio.h>
int fac(int);
int main()
{
	int n,fact;
	printf("Enter the number ");
	scanf("%d",&n);	
	fact=fac(n);	
	printf("The factorial of %d is %d",n,fact);
}

int fac(int y)
{
	int x=y-1;
	if(y==0)
	{
		return 1;
	}
	else
	{
		return (y*fac(x));
	}
}

