#include<stdio.h>

int main(){
    int marks;
    int Total;
    int percentage=0;

    printf("Enter Obtained Marks:\n");
    scanf("%d", &marks);

    printf("Enter Total Marks:\n");
    scanf("%d", &Total);

    percentage = (marks*100)/100;

    if(percentage>50){
        printf("Congrats! You have passed the Examination.");
    }
    else{
        printf("Better Luck next time!");
    }
    return 0;
}