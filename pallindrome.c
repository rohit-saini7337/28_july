#include<stdio.h>
int main(){
	int temp,rem,sum=0,num;
	printf("enter a number");
	scanf("%d",&num);
	temp=num;
	while(num>0){
		rem=num%10;
		sum=sum*10+rem;
		num/=10;
		
		
		
	}if(temp==sum){
		printf("pallindrome");
	}
	else{
		printf("not pallindrome");
	}
	
	
	
}
