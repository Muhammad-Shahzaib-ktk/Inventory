#include<stdio.h>

int main(){
    int Ict;
    int Discrete;
    int Management;
    int marks;
    int percentage=(marks/100*100);

    printf("Enter Ict Marks out of 100:\n");
    scanf("%d", &Ict);
    printf("Enter Discrete Marks out of 100:\n");
    scanf("%d", &Discrete);
    printf("Enter Management Marks out of 100:\n");
    scanf("%d", &Management);

    if(percentage>=40 && percentage==33){
        printf("Congrats !");
    }
    else{
        printf("Sorry!");
    }
    return 0;
}