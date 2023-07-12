#include<stdio.h>

int main(){
    int hour;
    int min;
    int sec;

    printf("Enter the hour:\n");
    scanf("%d", &hour);

    printf("Enter min:\n");
    scanf("%d", &min);

    printf("Enter the sec:\n");
    scanf("%d", &sec);

    hour=hour*60*60;
    min=min*60;
    sec=sec+hour+min;

    printf("The Equivalent time in seconds is: %d seconds", sec);

    return 0;
}