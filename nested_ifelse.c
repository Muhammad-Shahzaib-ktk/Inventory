#include<stdio.h>

int main(){
    int age;

    printf("Enter you age!\n");
    scanf("%d", &age);

    if(age==18){
        printf("You are eligible for the job\n");
        
    
        if(age>18){
            printf("You are eligible for the job\n");
            
        }
        else{
            printf("You are underage ! Sorry\n");
        }
    }
    else{
        if(age<=50){
            printf("You are eligible");
        }
        else{
            printf("You are overage! Sorry");
        }
    }
        
    

    
    
    return 0;
}