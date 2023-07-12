#include<stdio.h>

int main(){
    int num1;
    int num2;
    int num3;

    printf("Enter Num1:\n");
    scanf("%d",&num1);
    printf("Enter Num2:\n");
    scanf("%d",&num2);
    printf("Enter Num3:\n");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3){
        printf("Num1 is Greater\n");
    }
    else if(num2>num1 && num2>num3){
        printf("Num2 is Greater\n");
        }
    else{
        printf("Num3 is Greater\n");
    }
    return 0;
}