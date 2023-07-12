#include<stdio.h>

int main(){
    int num;

    printf("Enter the Number:\n");
    scanf("%d", &num);

    if(num>0){
        printf("Entered Number is Positive.\n");
    }
    else{
        printf("Entered Number is Negative.");
    }
    
    return 0;
}