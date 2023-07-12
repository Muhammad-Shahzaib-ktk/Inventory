#include<stdio.h>

int main(){
    int grade;
    int salary;
    int bonus;

    printf("Enter the Grade:\n");
    scanf("%d", &grade);

    printf("Enter the Salary:\n");
    scanf("%d", &salary);

    if(grade>15){
        bonus=salary*(50/100);
        printf("Salary with 50 percent bonus is: %d", bonus + salary);
    }
    else if(grade<15){
        bonus=salary*(25/100);
        printf("Salarty with 25 percent bonus is: %d", bonus + salary);
    }

    return 0;
}