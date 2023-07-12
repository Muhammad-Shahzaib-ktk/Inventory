#include<stdio.h>

int main(){
    int cel;
    int faht;

    printf("Enter temperature in Celcius:\n");
    scanf("%d", &cel);

    faht=(cel*9/5)+32;

    printf("Temperature in Fahrenheit is:%d", faht);

    return 0;
}