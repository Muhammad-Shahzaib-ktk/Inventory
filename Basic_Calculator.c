#include<stdio.h>
#include<math.h>

int main(){
    float Num1;
    float Num2;

    printf("Enter the First number:\n");
    scanf("%f", &Num1);
    printf("Enter the Second number:\n");
    scanf("%f", &Num2);

    printf("The sum of Num1 and Num2 is:%f\n", Num1+Num2);
    printf("The diff of Num1 and Num2 is:%f\n", Num1-Num2);
    printf("The product of Num1 and Num2 is:%f\n", Num1*Num2);
    printf("The Division of Num1 and Num2 is:%f\n", Num1/Num2);
    
    

    return 0;
}