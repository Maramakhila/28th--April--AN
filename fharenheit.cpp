#include<stdio.h>
int main()
{
	float celusis;
	printf("enter the temp in celusis:\n");
	scanf("%f",&celusis);
	float fhar;
	fhar=(celusis*1.8)+32;
	printf("\n Temperature in fharenheit is %.2f",fhar);
	return 0;
}
