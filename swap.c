#include<stdio.h>
int main(){
	int c,a,b;
	printf("enter two number");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("after swap value of 1st=%d and 2nd=%d",a,b);
	
	
}
