#include<stdio.h>
int main()
{
	int num,digit;
	int even=0,odd=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num<0){
		num=-num;
	}
	if(num==0){
		even=1;
	}
	while(num>0){
		digit=num%10;
		if(digit%2==0){
			even++;
		}
		else{
			odd++;
		}
		num=num/10;
	}
	printf("Even digits=%d\n",even);
	printf("Odd digits=%d\n",odd);
}
