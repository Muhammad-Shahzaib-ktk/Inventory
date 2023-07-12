#include<stdio.h>

int main(){
    int a;
    printf("Enter your number:\n");
    scanf("%d", &a);

    while(a>=10 && a<=20){
        printf("%d\n", a);
        a++;
    }
    return 0;
}