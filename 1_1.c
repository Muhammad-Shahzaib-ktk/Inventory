#include<stdio.h>

int main(){
    char Name[20];
    long int Id;
    char Course[30];

    printf("Your Name:\n");
    scanf("%s", &Name);
    
    printf("Your Id:\n");
    scanf("%ld", &Id);

    printf("Your Course:\n");
    scanf("%s", &Course);

    

    return 0;
}