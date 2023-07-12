#include<stdio.h>
//Worng
int main(){
    int num1;
    int num2;
    int num3;
    int num4;

    printf("Enter Num1:\n");
    scanf("%d", &num1);
    printf("Enter Num2:\n");
    scanf("%d", &num2);
    printf("Enter Num3:\n");
    scanf("%d", &num3);
    printf("Enter Num4:\n");
    scanf("%d", &num4);

    if(num1>num2){
        printf("Num1 is greater\n");
    }
    else if(num1>num3){
        printf("Num1 is greater\n");
    }
    else if(num1>num4){
        printf("Num1 is greater\n");
    }
    else if(num2>num1){
        printf("Num2 is greater\n");
    }
    else if(num2>num3){
        printf("Num2 is greater\n");
    }
    else if(num2>num4){
        printf("Num2 is greater\n");
    }
    else if(num3>num1){
        printf("Num3 is greater\n");
    }
    else if(num3>num2){
        printf("Num3 is greater\n");
    }
    else{
        printf("Num4 is greater\n");
    }


    return 0;
}