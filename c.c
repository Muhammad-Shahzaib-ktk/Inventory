#include<stdio.h>

int main(){
    int n;
    int a;
    int b;

    printf("Enter a 3 digit value to be reversed:\n");
    scanf("%d", &n);

    a=n/100;
    n=n%100;
    b=n/10;
    n=n%10;

    printf("The reverse order of the given value is:%d%d%d",n,b,a);
    
    return 0;
}