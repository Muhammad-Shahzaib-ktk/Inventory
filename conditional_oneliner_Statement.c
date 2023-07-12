#include<stdio.h>

int main(){
    int num;
    
    printf("Enter the number\n");
    scanf("%d",&num);
     // One Liner
    (num%2==0)? printf("Number is Even"): printf("Number is odd");

    return 0;
}