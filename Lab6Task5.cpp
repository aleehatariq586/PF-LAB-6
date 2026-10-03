#include<stdio.h>
int main()
{
	int n,i;
	long long catalan=1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		catalan=catalan* (2 * (2 * i + 1)) / (i + 2);
	}
	printf("Catalan number=%lld",catalan);
}
