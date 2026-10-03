#include<stdio.h>
int main()
{
	int i,attendance;
	int present=0,absent=0;
	for(i=1;i<=15;i++){
		printf("Enter attendance of student %d(1 for present,0 for absent): ",i);
		scanf("%d",&attendance);
	if(attendance==1){
		present++;
	}
	else if(attendance==0){
		absent++;
	}
}
printf("\nTotal present students=%d",present);
printf("\nTotal absent students=%d",absent);
	
}
