#include<stdio.h>
int main()
{
	int m,n,temp;
	printf("enter the value of m:\n ");
	scanf("%d",&m);
	printf("enter the value of n:\n");
	scanf("%d",&n);
	temp=m;
	m=n;
	n=temp;
	printf("After swapping the value of m is %d\n",m);
	printf("After swapping the value of n is %d\n",n);
	return 0;
}
