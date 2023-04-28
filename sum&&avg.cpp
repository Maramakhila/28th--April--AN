#include<stdio.h>
int main()
{
	int n,i,num,sum=0;
	float avg;
	printf("enter no.of elements:\n");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=1;i<=n;i++){
		scanf("%d",&num);
		sum=sum+num;
	}
		avg=(float)sum/n;
		printf("sum of numbers=%d\n",sum);
		printf("average of numbers=%f\n",avg);
		return 0;
}
