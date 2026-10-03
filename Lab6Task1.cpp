#include<stdio.h>
int main()
{
	int pin,digit,sum=0;
	printf("Enter 4 digit pin: ");
	scanf("%d",&pin);
	while(pin>0)
	{
		digit=pin%10;
		sum = sum+digit;
		pin=pin/10;
	}
	printf("Sum of digits=%d\n",sum);
	if(sum>10){
		printf("Strong Pin\n");
	}
	else{
		printf("Weak Pin\n");
	}
}
