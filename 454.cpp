#include<stdio.h>

int main(){
	int r,c,n=9;
	int px=n/2+1;
	for(r=1; r<=n; r++){
		for(c=1;  c<=n; c++){
	 	if(c==px || c==n-px+1)
	 	
	 	printf("*");
	 	
		else
		
			printf(" ");
			
	}
		if(r<=n/2)
		px--;
		else
		px++;
		printf("\n");
		
	}
	return 0;

}
