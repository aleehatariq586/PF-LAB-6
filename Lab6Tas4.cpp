#include<stdio.h>
int main()
{
	int num,original,digit,reverse=0;
	printf("Enter a book code: ");
	scanf("%d",&num);
	original=num;
	while(num>0){
		digit=num%10;
		reverse=reverse*10+digit;
		num=num/10;
	}
	if(original==reverse){
		printf("Palindrome Number\n");
	}
	else{
		printf("Not a Palindrome Number\n");
	}
}
