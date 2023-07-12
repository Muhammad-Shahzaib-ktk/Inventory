#include<stdio.h>
int main()
{
    int area;
    int length;
    int breadth;
    printf("Enter length:\n");
    scanf("%d",&length);
    printf("Enter breadth:\n");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("Area is %d sqr/meter",area);


    return 0;
}