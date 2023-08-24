#include<stdio.h>
int power(int x,int n)
{
	if(n==1)
	{
		return x;
	}
	return x*power(x,n-1);
}
int main()
{
	int _x,n,p;
	printf("PROGRAM TO FIND THE VALUE OF (x^n)");
	printf("\nEnter the value of x:");
	scanf("%d",&_x);
	printf("\nEnter the value of n:");
	scanf("%d",&n);
	p=power(_x,n);
	printf("\nThe value of %d to the power of %d is %d",_x,n,p);
}
/*#include<stdio.h>
int power(int *a,int n)
{
	if(n==1)
	{
		return *a;
	}
	return *a*power(a,n-1);
}
int main()
{
	int x,n,p;
	printf("PROGRAM TO FIND THE VALUE OF (x^n)");
	printf("\nEnter the value of x:");
	scanf("%d",&x);
	printf("\nEnter the value of n:");
	scanf("%d",&n);
	int *a=&x,*b=&n;
	p=power(&x,n);
	printf("\nThe value of %d to the power of %d is %d",x,n,p);
}*/

