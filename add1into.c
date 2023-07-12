#include<stdio.h>
#include<math.h>

int main(){
    int num;
    int rem;
    int sum;

    printf("Enter the Number:\n");
    scanf("%d", &num);

    rem=num%10;
    sum=rem+1;
    printf("%d", sum);
    num=num/10;
    rem=num%10;
    sum=rem+1;
    printf("%d", sum);
    num=num/10;
    rem=num%10;
    sum=rem+1;
    printf("%d", sum);

    num=sum;
    sum=0;
    rem=num%10;
    sum=sum+rem;
    printf("%d", sum);
    
    return 0;
}