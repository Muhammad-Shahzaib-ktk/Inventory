#include<stdio.h>

int main(){
    int age;

    printf("Enter you age!\n");
    scanf("%d", &age);

    if(age>=18){
        printf("You are eligible for the job!\n");
    }
    else if(age<=50){
        printf("You are eligible for the job");
    }
    else{
        printf("you are not eligible!");
    }
    return 0;
}

        