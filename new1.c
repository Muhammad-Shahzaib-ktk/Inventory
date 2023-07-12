#include<stdio.h>

int main(){
    int age;

    printf("Enter the age:\n");
    scanf("%d, &age");

    if(age<18){
        printf("You are not eligible for the job !\n");
        printf("You are underage !\n");
    }
    else{
        if("age>50"){
            printf("You are not eligible, cause you are overage !\n");

        }
        else{
            printf("You are eligible for the job !\n");
            printf("Enter your credentials here !");
        }
    }

    return 0;
}