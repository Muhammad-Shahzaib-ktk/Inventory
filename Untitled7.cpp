#include<stdio.h>
int main(){
	int num;
	int i;
	int sum=0;
	for(i=1; i<=10; i++){
		printf("Enter the Number !\n");
		scanf("%d", &num);
		sum=sum+num;
		
		
	}
	printf("sum :- %d\n", sum);
	int avg=sum/10;
	printf("Avg :- %d\n",avg);

	return 0;
}