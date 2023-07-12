#include<stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;

    printf("Enter the 1st Number:\n");
    scanf("%d", &num1);

    printf("Enter the 2nd Number:\n");
    scanf("%d", &num2);

    printf("Enter the 3rd Number:\n");
    scanf("%d", &num3);

    printf("Enter the 4th Number:\n");
    scanf("%d", &num4);

    printf("Enter the 5th Number:\n");
    scanf("%d", &num5);

    if(num1<num2&&num1<num3&&num1<num4&&num1<num5){
        printf("Num1 is the Smallest");
    }
    else if(num2<num1&&num2<num3&&num2<num4&&num2<num5){
        printf("Num2 is the Smallest");
    }
    else if(num3<num2&&num3<num1&&num3<num4&&num3<num5){
        printf("Num3 is the Smallest");
    }
    else if(num4<num2&&num4<num3&&num4<num1&&num4<num5){
        printf("Num4 is the Smallest");
    }
    else{
        printf("Num5 is the Smallest");
    }

    
    return 0;
}