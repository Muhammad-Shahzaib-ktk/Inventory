#include<stdio.h>

int main(){
    float pie;
    float radius;
    float circumference;

    printf("Enter the radius:\n");
    scanf("%f", &radius);

    printf("Enter the value of pie:\n");
    scanf("%f", &pie);

    circumference = 2*pie*radius;

    printf("The Cirumference of the Circle is: %f", circumference);

    return 0;
}