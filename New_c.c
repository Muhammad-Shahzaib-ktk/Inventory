#include<stdio.h>

int main(){
    int num1;
    int num2;

    printf("Enter the Number:\n");
    scanf("%d",&num1);
    printf("Enter the Number:\n");
    scanf("%d",&num2);

    if(num1>num2){
        printf("Num1 is Greater:\n");
    }
    else{
        printf("Num2 is Greater:\n");
    }
    return 0;
}