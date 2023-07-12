#include<stdio.h>
int main()
{
    int radius;
    float pi;
    float area;
    radius=78;
    pi=3.14;
    area = pi * radius * radius;
    printf("The area of a circle is %f\n",area);
    int height;
    height=50;
    area= pi * radius * radius * height;
    printf("The area of cylinder is %f\n",area);

    return 0;
}