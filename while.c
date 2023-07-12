#include<stdio.h>

int main(){
    int x;
    printf("Enter your number:\n");
    scanf("%d", &x);

    while(x<100000){
        printf("%d\n", x);
        x++;
    }
    return 0;
} 