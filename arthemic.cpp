#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the number:\n");
	scanf("%d",&a);
	printf("enter the number:\n");
	scanf("%d",&b);
	int sum,diff,prod;
	float quo;
	sum=a+b;
	printf("sum=%d\n",sum);
	diff=a-b;
	printf("difference=%d\n",diff);
	prod=a*b;
	printf("product=%d\n",prod);
	quo=a/b;
	printf(" quotient=%.2f",quo);
	return 0;
}
