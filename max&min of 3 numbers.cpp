#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the value of a:\n");
	scanf("%d",&a);
	printf("enter the value of b:\n");
	scanf("%d",&b);
	printf("enter the value of c:\n");
	scanf("%d",&c);
	if(a>b&&a>c){
		printf("maximum is a=%d",a);
	}
	else if(b>a&&b>c){
		printf("maximum is b=%d",b);
	}
	else{
		printf("maximum is c=%d",c);
	}
	if(a<b&&a<c){
		printf("minimum is a=%d",a);
	}
	else if(b<a&&b<c){
		printf("minimum is b=%d",b);
	}
	else{
		printf("minimum is c=%d",c);
	}
	return 0;
}
